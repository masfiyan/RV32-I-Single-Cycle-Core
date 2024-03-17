module ProgramCounter (
    input wire clk,
    input wire rst,
    input wire [31:0] start,
    output reg [31:0] pc,
    output reg [31:0] pc4
);
    always @(posedge clk or negedge rst) begin
        if (rst) begin
            pc4 <= 0;
            pc <= 0;
        end else begin
            pc4 <= pc + 4;
            pc <= start;
        end
    end

endmodule
