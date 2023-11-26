`include "./include/config.sv"

// Lab4 TODO: implement the Exp_Commit module for ecall instruction
// you need to generate exception code for `syscall from machine mode`
module Exp_Commit(
    input  logic exp_en,
    input  logic [31:0] mstatus,
    output logic [31:0] mcause_in,
    output logic [ 0:0] exception_en
);
    assign exception_en = exp_en;

    always_comb begin
        mcause_in = 0;
            if(exp_en) begin
                case(mcause_in[2:1])
                    `MODE_U: mcause_in = 8;
                    `MODE_S: mcause_in = 9;
                    `MODE_H: mcause_in = 10;
                    `MODE_M: mcause_in = 11;
                endcase
            end
    end
endmodule