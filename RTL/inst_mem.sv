module inst_mem (
    input logic clk,  
    input logic rst,  
    input logic [9:0] addr,
    output logic [31:0] inst
);
    logic [31:0] mem[1023:0];

    task initMemory(string initFile);
        $readmemh(initFile, mem);
    endtask

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            
        end else begin
            if (!$rose(rst)) begin
                initMemory("/home/masfiyan/Desktop/inst.hex");
            end
        end
    end

    assign inst = mem[addr/4];
endmodule
