/* verilator lint_off UNUSED */
module Register (
    input wire clk,
    input wire rst,
    input wire [31:0] inst,
    input wire reg_Write,
    input wire signed [31:0] write_date,
    output reg signed [31:0] rs1,
    output reg signed [31:0] rs2
);
    reg signed [31:0] regs [0:31];

    always @(posedge clk or negedge rst) begin
        if (rst) begin

        end else begin
            if (reg_Write && inst[11:7] != 0)
                regs[inst[11:7]] <= write_date;
        end
    end

    always @* begin
        rs1 = (inst[19:15] != 0) ? regs[inst[19:15]] : 0;
        rs2 = (inst[24:20] != 0) ? regs[inst[24:20]] : 0;
    end
endmodule
