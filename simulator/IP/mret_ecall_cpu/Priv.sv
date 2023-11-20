module Priv(
    input  logic [ 2:0] csr_op,
    input  logic [31:0] csr_rdata,
    input  logic [31:0] rf_rdata1,  //rs
    input  logic [31:0] zimm,       //zimm
    output logic [31:0] csr_wdata   //写入csr的值
);
    localparam 
        CSRRW   = 3'b001,
        CSRRS   = 3'b010,
        CSRRC   = 3'b011,
        CSRRWI  = 3'b101,
        CSRRSI  = 3'b110,
        CSRRCI  = 3'b111;
    always_comb begin
        // Lab4 TODO: implement CSR calculate logic
        case(csr_op)
            CSRRW:  csr_wdata = rf_rdata1;
            CSRRWI: csr_wdata = zimm;
            CSRRS:  csr_wdata = csr_rdata | rf_rdata1;
            CSRRSI: csr_wdata = csr_rdata | zimm;
            CSRRC:  csr_wdata = csr_rdata & ~rf_rdata1;
            CSRRCI: csr_wdata = csr_rdata & ~zimm;
            default: csr_wdata = 0;
        endcase
    end
endmodule