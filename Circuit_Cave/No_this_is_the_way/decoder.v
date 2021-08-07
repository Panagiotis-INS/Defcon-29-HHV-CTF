`default_nettype	none

module decoder(i_inp, o_out);
	input	wire [7:0]		i_inp;
	output	wire [7:0]		o_out;

	assign o_out = {
		i_inp[7],
		i_inp[4],
		i_inp[1],
		i_inp[2],
		i_inp[6],
		i_inp[3],
		i_inp[5],
		i_inp[0]
	};
endmodule