`include "./include/config.sv"
module CSR(
    input  logic [ 0:0] clk,
    input  logic [ 0:0] rstn,
    input  logic [11:0] raddr,
    input  logic [11:0] waddr,
    input  logic [ 0:0] we,
    input  logic [31:0] wdata,
    output logic [31:0] rdata,
    // Lab4 TODO: you need to add some input or output pors to implement CSRs' special functions
    input  logic [31:0] mcause_in,
    input  logic [31:0] pc_wb,
    input  logic [ 0:0] exception_en,
    output logic [31:0] mtvec_global,
    output logic [31:0] mstatus_global,
    output logic [31:0] mepc_global,
    input  logic [ 0:0] mret_en
);
    import "DPI-C" function void set_csr_ptr(input logic [31:0] m1 [], input logic [31:0] m2 [], input logic [31:0] m3 [], input logic [31:0] m4 []);

    reg [31:0] mstatus;
    always_ff @(posedge clk) begin
        if(!rstn) begin
            mstatus <= 32'h0;
        end
        // Lab4 TODO: implement mstatus
        else if(exception_en) begin
            mstatus <= {mstatus[31:12],mstatus[8:0],3'b110};
        end
        else if(mret_en) begin
            mstatus <= {mstatus[31:12],3'b001,mstatus[11:3]};
        end
        else if(waddr==`CSR_MSTATUS && we) begin
            mstatus <= {wdata[31],8'b0,wdata[22:0]};
        end
    end

    reg [31:0] mtvec;
    always_ff @(posedge clk) begin
        if(!rstn) begin
            mtvec <= 32'h0;
        end
        // Lab4 TODO: implement mtvec
        else if(waddr==`CSR_MTVEC && we) begin
            mtvec <= {wdata[31:2],2'b0};    //不一定
        end
    end

    reg [31:0] mcause;
    always_ff @(posedge clk) begin
        if(!rstn) begin
            mcause <= 32'h0;
        end
        // Lab4 TODO: implement mcause
        else if(exception_en) begin
            mcause <= mcause_in;
        end
        else if(waddr==`CSR_MCAUSE && we) begin
            mcause <= wdata;
        end
    end

    reg [31:0] mepc;
    always_ff @(posedge clk) begin
        if(!rstn) begin
            mepc <= 32'h0;
        end
        // Lab4 TODO: implement mepc
        else if(exception_en) begin
            mepc <= pc_wb;
        end
        else if(waddr==`CSR_MEPC && we) begin
            mepc <= wdata;
        end
    end

    always_ff @(posedge clk) begin
        mstatus_global <= mstatus;
        mtvec_global   <= mtvec;
        mepc_global    <= mepc;
    end
    // read
    always_comb begin
        case(raddr)
            `CSR_MSTATUS: rdata = mstatus;
            `CSR_MTVEC  : rdata = mtvec;
            `CSR_MCAUSE : rdata = mcause;
            `CSR_MEPC   : rdata = mepc;
            default     : rdata = 32'h0;
        endcase
    end
    initial begin
        set_csr_ptr(mstatus, mtvec, mepc, mcause);
    end
endmodule