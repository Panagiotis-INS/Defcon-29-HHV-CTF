`default_nettype	none

module challenge(i_clk, o_out, o_data);
	input	wire		i_clk;
	output	wire		o_out;
	output	wire [7:0]	o_data;

	wire [7:0]	mem_out;
	wire 		mem_bitsel;
	wire [7:0]	decoder_out;

	reg	[2:0]	r_counter_bitsel;
	reg	[7:0]	r_counter_addr;
	reg	[7:0]	r_shiftreg;

	reg [7:0] memory [71:0];
	initial begin
		memory[0] 	= 8'h50;
		memory[1] 	= 8'h50;
		memory[2] 	= 8'h3c;
		memory[3] 	= 8'h77;
		memory[4] 	= 8'h3e;
		memory[5] 	= 8'h27;
		memory[6] 	= 8'h36;
		memory[7] 	= 8'h07;
		memory[8] 	= 8'h5a;
		memory[9] 	= 8'h06;
		memory[10] 	= 8'h2e;
		memory[11]	= 8'h7d;
		memory[12]	= 8'h07;
		memory[13]	= 8'h0f;
		memory[14]	= 8'h7d;
		memory[15]	= 8'h5b;
		memory[16]	= 8'h1f;
		memory[17]	= 8'h33;
		memory[18]	= 8'h52;
		memory[19]	= 8'h7d;
		memory[20]	= 8'h5b;
		memory[21]	= 8'h06;
		memory[22]	= 8'h36;
		memory[23]	= 8'h27;
		memory[24]	= 8'h7d;
		memory[25]	= 8'h16;
		memory[26]	= 8'h06;
		memory[27]	= 8'h3f;
		memory[28]	= 8'h27;
		memory[29]	= 8'h36;
		memory[30]	= 8'h3a;
		memory[31]	= 8'h1f;
		memory[32]	= 8'h5a;
		memory[33]	= 8'h7d;
		memory[34]	= 8'h2f;
		memory[35]	= 8'h52;
		memory[36]	= 8'h0e;
		memory[37]	= 8'h7a;
		memory[38]	= 8'h7d;
		memory[39]	= 8'h32;
		memory[40]	= 8'h5a;
		memory[41]	= 8'h06;
		memory[42]	= 8'h33;
		memory[43]	= 8'h73;
		memory[44]	= 8'h7d;
		memory[45]	= 8'h1a;
		memory[46]	= 8'h07;
		memory[47]	= 8'h0e;
		memory[48]	= 8'h2e;
		memory[49]	= 8'h36;
		memory[50]	= 8'h0e;
		memory[51]	= 8'h5b;
		memory[52]	= 8'h0f;
		memory[53]	= 8'h7d;
		memory[54]	= 8'h2f;
		memory[55]	= 8'h06;
		memory[56]	= 8'h7d;
		memory[57]	= 8'h32;
		memory[58]	= 8'h1f;
		memory[59]	= 8'h07;
		memory[60]	= 8'h5a;
		memory[61]	= 8'h1a;
		memory[62]	= 8'h7d;
		memory[63]	= 8'h52;
		memory[64]	= 8'h0e;
		memory[65]	= 8'h36;
		memory[66]	= 8'h1a;
		memory[67]	= 8'h3f;
		memory[68]	= 8'h0e;
		memory[69]	= 8'h36;
		memory[70]	= 8'h27;
		memory[71]	= 8'h5f;
	end

	decoder decoder_I (
		.i_inp	(r_shiftreg),
		.o_out	(decoder_out)
	);

	assign mem_out = memory[r_counter_addr[6:0]];
	assign mem_bitsel = mem_out[r_counter_bitsel];
	assign o_out = r_counter_bitsel == 7 && ~i_clk;
	assign o_data = decoder_out;

	always @(posedge i_clk)
	begin
		r_counter_bitsel <= r_counter_bitsel + 1'b1;

		if (r_counter_bitsel == 6)
		begin
			r_counter_addr <= r_counter_addr + 1'b1;
		end
	end

	always @(negedge i_clk)
	begin
		r_shiftreg <= { mem_bitsel, r_shiftreg[7:1] };
	end

endmodule

