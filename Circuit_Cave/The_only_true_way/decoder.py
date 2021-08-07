from nmigen import *

class ChallengeDecoder( Elaboratable ):
	def __init__( self, inp ):
		self.input = inp
		self.output = Signal( 8 )

	def elaborate( self, platform ):
		m = Module()

		m.d.comb += self.output.eq(
			Cat(
				self.input.bit_select( 0, 1 ),
				self.input.bit_select( 5, 1 ),
				self.input.bit_select( 3, 1 ),
				self.input.bit_select( 6, 1 ),
				self.input.bit_select( 2, 1 ),
				self.input.bit_select( 1, 1 ),
				self.input.bit_select( 4, 1 ),
				self.input.bit_select( 7, 1 ),
			)
		)

		return m