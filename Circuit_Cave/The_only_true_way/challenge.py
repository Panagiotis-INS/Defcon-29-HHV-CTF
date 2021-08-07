from nmigen import *
from rom import *
from decoder import *

class ChallengeModule( Elaboratable ):
	def __init__( self ):
		self.data = Signal( unsigned(8) )
		self.out = Signal( unsigned(1) )

	def elaborate( self, platform ):
		m = Module()
		pos = ClockDomain("pos", local=True)
		neg = ClockDomain("neg", clk_edge="neg", local=True)

		neg.clk = pos.clk
		neg.rst = pos.rst

		m.domains += [pos, neg]

		memory = ROM( [
			0x50, 0x50, 0x3c, 0x77,
			0x1a, 0x27, 0x0f, 0x33,
			0x36, 0x07, 0x32, 0x07,
			0x7a, 0x2e, 0x7d, 0x52,
			0x0e, 0x36, 0x1a, 0x3f,
			0x0e, 0x36, 0x27, 0x7d,
			0x1f, 0x0f, 0x07, 0x7a,
			0x2e, 0x7d, 0x16, 0x57,
			0x2f, 0x52, 0x06, 0x7a,
			0x7d, 0x07, 0x0f, 0x7d,
			0x0f, 0x1f, 0x16, 0x27,
			0x36, 0x7d, 0x16, 0x06,
			0x3f, 0x27, 0x36, 0x3a,
			0x1f, 0x5a, 0x5f
		] )

		m.submodules.mem = memory

		mem_out 	= Signal( unsigned(8) )
		mem_bitsel 	= Signal( unsigned(1) )
		decoder_out = Signal( unsigned(8) )

		counter_bitsel = Signal( unsigned(3), reset = 0 )
		counter_addr   = Signal( unsigned(8), reset = 0 )
		shiftreg 	   = Signal( unsigned(8), reset = 0 )

		decoder = ChallengeDecoder(shiftreg)
		m.submodules.decoder = decoder

		m.d.comb += memory.adr.eq( counter_addr )
		m.d.comb += mem_out.eq( memory.dat_r )
		m.d.comb += mem_bitsel.eq( mem_out.bit_select(counter_bitsel, 1) )
		m.d.comb += self.out.eq( (counter_bitsel == 7).bool() & (~ClockSignal( "pos" )).bool() )
		m.d.comb += self.data.eq( decoder.output )

		m.d.pos += counter_bitsel.eq( counter_bitsel + 1 )
		with m.If( counter_bitsel == 6 ):
			m.d.pos += counter_addr.eq( counter_addr + 1 )

		m.d.neg += shiftreg.eq( Cat(shiftreg.bit_select(1,7), mem_bitsel) )

		return m

#from nmigen import sim

if __name__ == "__main__":

	dut = ChallengeModule()
	sim = Simulator(dut)
	def proc():
		for i in range( 1000 ):
			yield Tick()
	sim.add_clock( 1e-6)
	sim.add_clock( 1e-6, domain="pos")
	sim.add_sync_process( proc )
	with sim.write_vcd("challenge.vcd", "challenge.gtkw"):
		sim.run()
