from nmigen import *
from math import ceil, log2
from nmigen.back.pysim import *
from nmigen_soc.memory import *
from nmigen_soc.wishbone import *

# Simulated read-only memory module.
class ROM( Elaboratable, Interface ):
  def __init__( self, data ):
    # Record size.
    self.size = len( data )
    # Data storage.
    self.data = Memory( width = 8, depth = self.size, init = data )
    # Memory read port.
    self.r = self.data.read_port()

    # Initialize Wishbone bus interface.
    Interface.__init__( self,
                        data_width = 8,
                        addr_width = ceil( log2( self.size + 1 ) ) )
    self.memory_map = MemoryMap( data_width = self.data_width,
                                 addr_width = self.addr_width,
                                 alignment = 0 )

  def elaborate( self, platform ):
    m = Module()
    # Register the read port submodule.
    m.submodules.r = self.r

    # Set 'dat_r' bus signal to the value in the
    # requested 'data' array index.
    m.d.comb += [
      self.r.addr.eq( self.adr ),
      self.dat_r.eq( self.r.data )
    ]

    # End of simulated memory module.
    return m
