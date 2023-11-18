// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+139,"clk", false,-1, 0,0);
    tracep->declBus(c+140,"rstn", false,-1, 0,0);
    tracep->declBus(c+141,"commit_wb", false,-1, 0,0);
    tracep->declBus(c+142,"pc_cur", false,-1, 31,0);
    tracep->declBus(c+143,"inst", false,-1, 31,0);
    tracep->declBus(c+144,"uncache_read_wb", false,-1, 0,0);
    tracep->pushNamePrefix("CPU ");
    tracep->declBus(c+145,"PC_RESET_VALUE", false,-1, 31,0);
    tracep->declBus(c+146,"I_CACHE_DEPTH", false,-1, 31,0);
    tracep->declBus(c+146,"D_CACHE_DEPTH", false,-1, 31,0);
    tracep->declBus(c+139,"clk", false,-1, 0,0);
    tracep->declBus(c+140,"rstn", false,-1, 0,0);
    tracep->declBus(c+141,"commit_wb", false,-1, 0,0);
    tracep->declBus(c+142,"pc_cur", false,-1, 31,0);
    tracep->declBus(c+143,"inst", false,-1, 31,0);
    tracep->declBus(c+144,"uncache_read_wb", false,-1, 0,0);
    tracep->declBus(c+2,"pc_if1", false,-1, 31,0);
    tracep->declBus(c+3,"pc_if2", false,-1, 31,0);
    tracep->declBus(c+4,"pc_id", false,-1, 31,0);
    tracep->declBus(c+5,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+6,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+7,"pc_wb", false,-1, 31,0);
    tracep->declBus(c+8,"inst_if2", false,-1, 31,0);
    tracep->declBus(c+9,"inst_id", false,-1, 31,0);
    tracep->declBus(c+10,"inst_ex", false,-1, 31,0);
    tracep->declBus(c+11,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+12,"inst_wb", false,-1, 31,0);
    tracep->declBus(c+13,"pc_target", false,-1, 31,0);
    tracep->declBus(c+14,"next_pc", false,-1, 31,0);
    tracep->declBus(c+15,"imm_id", false,-1, 31,0);
    tracep->declBus(c+16,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+17,"rf_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+18,"rf_rdata1_id", false,-1, 31,0);
    tracep->declBus(c+19,"rf_rdata1_ex", false,-1, 31,0);
    tracep->declBus(c+20,"rf_rdata2_id", false,-1, 31,0);
    tracep->declBus(c+21,"rf_rdata2_ex", false,-1, 31,0);
    tracep->declBus(c+22,"forward1_data", false,-1, 31,0);
    tracep->declBus(c+23,"forward2_data", false,-1, 31,0);
    tracep->declBus(c+24,"alu_rf_data1", false,-1, 31,0);
    tracep->declBus(c+25,"alu_rf_data2", false,-1, 31,0);
    tracep->declBus(c+26,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+27,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+28,"alu_result_ex", false,-1, 31,0);
    tracep->declBus(c+29,"alu_result_ls", false,-1, 31,0);
    tracep->declBus(c+30,"alu_result_wb", false,-1, 31,0);
    tracep->declBus(c+31,"jump_target", false,-1, 31,0);
    tracep->declBus(c+147,"mem_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+32,"mem_rdata_ls", false,-1, 31,0);
    tracep->declBus(c+33,"mem_rdata_wb", false,-1, 31,0);
    tracep->declBus(c+34,"dcache_rdata_ls", false,-1, 31,0);
    tracep->declBus(c+35,"alu_op_id", false,-1, 4,0);
    tracep->declBus(c+36,"alu_op_ex", false,-1, 4,0);
    tracep->declBus(c+37,"mem_access_id", false,-1, 4,0);
    tracep->declBus(c+38,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+39,"mem_access_ls", false,-1, 4,0);
    tracep->declBus(c+40,"br_type_id", false,-1, 4,0);
    tracep->declBus(c+41,"br_type_ex", false,-1, 4,0);
    tracep->declBus(c+148,"wstrb_ex", false,-1, 3,0);
    tracep->declBus(c+42,"alu_rs1_sel_id", false,-1, 1,0);
    tracep->declBus(c+43,"alu_rs1_sel_ex", false,-1, 1,0);
    tracep->declBus(c+44,"alu_rs2_sel_id", false,-1, 1,0);
    tracep->declBus(c+45,"alu_rs2_sel_ex", false,-1, 1,0);
    tracep->declBus(c+46,"wb_rf_sel_id", false,-1, 0,0);
    tracep->declBus(c+47,"wb_rf_sel_ex", false,-1, 0,0);
    tracep->declBus(c+48,"wb_rf_sel_ls", false,-1, 0,0);
    tracep->declBus(c+49,"wb_rf_sel_wb", false,-1, 0,0);
    tracep->declBus(c+50,"rf_we_id", false,-1, 0,0);
    tracep->declBus(c+51,"rf_we_ex", false,-1, 0,0);
    tracep->declBus(c+52,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+53,"rf_we_wb", false,-1, 0,0);
    tracep->declBus(c+54,"csr_op_id", false,-1, 2,0);
    tracep->declBus(c+55,"csr_op_ex", false,-1, 2,0);
    tracep->declBus(c+56,"csr_waddr_id", false,-1, 11,0);
    tracep->declBus(c+57,"csr_waddr_ex", false,-1, 11,0);
    tracep->declBus(c+58,"csr_waddr_ls", false,-1, 11,0);
    tracep->declBus(c+59,"csr_waddr_wb", false,-1, 11,0);
    tracep->declBus(c+60,"csr_we_id", false,-1, 0,0);
    tracep->declBus(c+61,"csr_we_ex", false,-1, 0,0);
    tracep->declBus(c+62,"csr_we_ls", false,-1, 0,0);
    tracep->declBus(c+63,"csr_we_wb", false,-1, 0,0);
    tracep->declBus(c+64,"csr_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+65,"csr_wdata_ls", false,-1, 31,0);
    tracep->declBus(c+66,"csr_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+67,"csr_rdata_id", false,-1, 31,0);
    tracep->declBus(c+68,"csr_rdata_ex", false,-1, 31,0);
    tracep->declBus(c+69,"forward1_en", false,-1, 0,0);
    tracep->declBus(c+70,"forward2_en", false,-1, 0,0);
    tracep->declBus(c+71,"jump", false,-1, 0,0);
    tracep->declBus(c+72,"pc_set", false,-1, 0,0);
    tracep->declBus(c+73,"pc_stall", false,-1, 0,0);
    tracep->declBus(c+73,"IF1_IF2_stall", false,-1, 0,0);
    tracep->declBus(c+72,"IF1_IF2_flush", false,-1, 0,0);
    tracep->declBus(c+73,"IF2_ID_stall", false,-1, 0,0);
    tracep->declBus(c+72,"IF2_ID_flush", false,-1, 0,0);
    tracep->declBus(c+149,"ID_EX_stall", false,-1, 0,0);
    tracep->declBus(c+74,"ID_EX_flush", false,-1, 0,0);
    tracep->declBus(c+149,"EX_LS_stall", false,-1, 0,0);
    tracep->declBus(c+149,"EX_LS_flush", false,-1, 0,0);
    tracep->declBus(c+149,"LS_WB_stall", false,-1, 0,0);
    tracep->declBus(c+149,"LS_WB_flush", false,-1, 0,0);
    tracep->declBus(c+140,"commit_if1", false,-1, 0,0);
    tracep->declBus(c+75,"commit_if2", false,-1, 0,0);
    tracep->declBus(c+76,"commit_id", false,-1, 0,0);
    tracep->declBus(c+77,"commit_ex", false,-1, 0,0);
    tracep->declBus(c+78,"commit_ls", false,-1, 0,0);
    tracep->pushNamePrefix("ALU_inst ");
    tracep->declBus(c+26,"sr1", false,-1, 31,0);
    tracep->declBus(c+27,"sr2", false,-1, 31,0);
    tracep->declBus(c+36,"alu_op", false,-1, 4,0);
    tracep->declBus(c+28,"result", false,-1, 31,0);
    tracep->declQuad(c+79,"result_64", false,-1, 63,0);
    tracep->declBus(c+81,"result_div", false,-1, 31,0);
    tracep->declBus(c+82,"result_rem", false,-1, 31,0);
    tracep->declBus(c+83,"sign", false,-1, 1,0);
    tracep->declBus(c+84,"sr1_abs", false,-1, 31,0);
    tracep->declBus(c+85,"sr2_abs", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rf_data1_mux ");
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+19,"din1", false,-1, 31,0);
    tracep->declBus(c+22,"din2", false,-1, 31,0);
    tracep->declBus(c+69,"sel", false,-1, 0,0);
    tracep->declBus(c+24,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rf_data2_mux ");
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+21,"din1", false,-1, 31,0);
    tracep->declBus(c+23,"din2", false,-1, 31,0);
    tracep->declBus(c+70,"sel", false,-1, 0,0);
    tracep->declBus(c+25,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rs1_mux ");
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+24,"din1", false,-1, 31,0);
    tracep->declBus(c+5,"din2", false,-1, 31,0);
    tracep->declBus(c+151,"din3", false,-1, 31,0);
    tracep->declBus(c+151,"din4", false,-1, 31,0);
    tracep->declBus(c+43,"sel", false,-1, 1,0);
    tracep->declBus(c+26,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rs2_mux ");
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+25,"din1", false,-1, 31,0);
    tracep->declBus(c+16,"din2", false,-1, 31,0);
    tracep->declBus(c+152,"din3", false,-1, 31,0);
    tracep->declBus(c+68,"din4", false,-1, 31,0);
    tracep->declBus(c+45,"sel", false,-1, 1,0);
    tracep->declBus(c+27,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_inst ");
    tracep->declBus(c+41,"br_type", false,-1, 4,0);
    tracep->declBus(c+24,"sr1", false,-1, 31,0);
    tracep->declBus(c+25,"sr2", false,-1, 31,0);
    tracep->declBus(c+5,"pc", false,-1, 31,0);
    tracep->declBus(c+16,"imm", false,-1, 31,0);
    tracep->declBus(c+71,"jump", false,-1, 0,0);
    tracep->declBus(c+31,"jump_target", false,-1, 31,0);
    tracep->declBit(c+86,"is_branch", false,-1);
    tracep->declBit(c+87,"is_jal", false,-1);
    tracep->declBit(c+88,"is_jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR_inst ");
    tracep->declBus(c+139,"clk", false,-1, 0,0);
    tracep->declBus(c+140,"rstn", false,-1, 0,0);
    tracep->declBus(c+56,"raddr", false,-1, 11,0);
    tracep->declBus(c+59,"waddr", false,-1, 11,0);
    tracep->declBus(c+63,"we", false,-1, 0,0);
    tracep->declBus(c+66,"wdata", false,-1, 31,0);
    tracep->declBus(c+67,"rdata", false,-1, 31,0);
    tracep->declBus(c+89,"mstatus", false,-1, 31,0);
    tracep->declBus(c+90,"mtvec", false,-1, 31,0);
    tracep->declBus(c+91,"mcause", false,-1, 31,0);
    tracep->declBus(c+92,"mepc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DCache_Read_Ctrl_inst ");
    tracep->declBus(c+34,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+29,"mem_raddr", false,-1, 31,0);
    tracep->declBus(c+39,"mem_access", false,-1, 4,0);
    tracep->declBus(c+32,"rdata", false,-1, 31,0);
    tracep->declBit(c+93,"is_load", false,-1);
    tracep->declBus(c+94,"load_type", false,-1, 2,0);
    tracep->declBus(c+34,"load_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DCache_inst ");
    tracep->declBus(c+146,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+139,"clk", false,-1, 0,0);
    tracep->declBus(c+28,"raddr", false,-1, 31,0);
    tracep->declBus(c+34,"rdata", false,-1, 31,0);
    tracep->declBus(c+28,"waddr", false,-1, 31,0);
    tracep->declBus(c+25,"wdata", false,-1, 31,0);
    tracep->declBus(c+38,"mem_access", false,-1, 4,0);
    tracep->declBus(c+149,"flush", false,-1, 0,0);
    tracep->declBus(c+149,"stall", false,-1, 0,0);
    tracep->declBus(c+95,"rdata_temp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Decode_inst ");
    tracep->declBus(c+9,"inst", false,-1, 31,0);
    tracep->declBus(c+35,"alu_op", false,-1, 4,0);
    tracep->declBus(c+37,"mem_access", false,-1, 4,0);
    tracep->declBus(c+15,"imm", false,-1, 31,0);
    tracep->declBus(c+50,"rf_we", false,-1, 0,0);
    tracep->declBus(c+60,"csr_we", false,-1, 0,0);
    tracep->declBus(c+42,"alu_rs1_sel", false,-1, 1,0);
    tracep->declBus(c+44,"alu_rs2_sel", false,-1, 1,0);
    tracep->declBus(c+46,"wb_rf_sel", false,-1, 0,0);
    tracep->declBus(c+40,"br_type", false,-1, 4,0);
    tracep->declBus(c+54,"csr_op", false,-1, 2,0);
    tracep->declBus(c+96,"rd", false,-1, 4,0);
    tracep->declBus(c+97,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Hazard_inst ");
    tracep->declBus(c+98,"rf_rd_ls", false,-1, 4,0);
    tracep->declBus(c+99,"rf_rd_wb", false,-1, 4,0);
    tracep->declBus(c+52,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+53,"rf_we_wb", false,-1, 0,0);
    tracep->declBus(c+100,"rf_rs1_ex", false,-1, 4,0);
    tracep->declBus(c+101,"rf_rs2_ex", false,-1, 4,0);
    tracep->declBus(c+29,"rf_wdata_tmp_ls", false,-1, 31,0);
    tracep->declBus(c+17,"rf_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+69,"forward1_en", false,-1, 0,0);
    tracep->declBus(c+70,"forward2_en", false,-1, 0,0);
    tracep->declBus(c+22,"forward1_data", false,-1, 31,0);
    tracep->declBus(c+23,"forward2_data", false,-1, 31,0);
    tracep->declBus(c+38,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+102,"rf_rd_ex", false,-1, 4,0);
    tracep->declBus(c+103,"rf_rs1_id", false,-1, 4,0);
    tracep->declBus(c+104,"rf_rs2_id", false,-1, 4,0);
    tracep->declBus(c+71,"jump", false,-1, 0,0);
    tracep->declBus(c+31,"jump_target", false,-1, 31,0);
    tracep->declBus(c+61,"csr_we_ex", false,-1, 0,0);
    tracep->declBus(c+5,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+72,"pc_set", false,-1, 0,0);
    tracep->declBus(c+72,"IF1_IF2_flush", false,-1, 0,0);
    tracep->declBus(c+72,"IF2_ID_flush", false,-1, 0,0);
    tracep->declBus(c+74,"ID_EX_flush", false,-1, 0,0);
    tracep->declBus(c+149,"EX_LS_flush", false,-1, 0,0);
    tracep->declBus(c+149,"LS_WB_flush", false,-1, 0,0);
    tracep->declBus(c+73,"pc_stall", false,-1, 0,0);
    tracep->declBus(c+73,"IF1_IF2_stall", false,-1, 0,0);
    tracep->declBus(c+73,"IF2_ID_stall", false,-1, 0,0);
    tracep->declBus(c+149,"ID_EX_stall", false,-1, 0,0);
    tracep->declBus(c+149,"EX_LS_stall", false,-1, 0,0);
    tracep->declBus(c+149,"LS_WB_stall", false,-1, 0,0);
    tracep->declBus(c+13,"pc_set_target", false,-1, 31,0);
    tracep->declBit(c+73,"stall_by_load_use", false,-1);
    tracep->declBit(c+153,"flush_by_load_use", false,-1);
    tracep->declBit(c+105,"is_load_ex", false,-1);
    tracep->declBit(c+71,"flush_by_jump", false,-1);
    tracep->declBit(c+61,"flush_by_csr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ICache_inst ");
    tracep->declBus(c+146,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+139,"clk", false,-1, 0,0);
    tracep->declBus(c+2,"raddr", false,-1, 31,0);
    tracep->declBus(c+8,"rdata", false,-1, 31,0);
    tracep->declBus(c+72,"flush", false,-1, 0,0);
    tracep->declBus(c+73,"stall", false,-1, 0,0);
    tracep->declBus(c+106,"rdata_temp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("NPC_Mux_inst ");
    tracep->declBus(c+2,"pc", false,-1, 31,0);
    tracep->declBus(c+72,"pc_set", false,-1, 0,0);
    tracep->declBus(c+13,"pc_target", false,-1, 31,0);
    tracep->declBus(c+14,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_inst ");
    tracep->declBus(c+145,"RESET_VALUE", false,-1, 31,0);
    tracep->declBus(c+139,"clk", false,-1, 0,0);
    tracep->declBus(c+140,"rstn", false,-1, 0,0);
    tracep->declBus(c+73,"stall", false,-1, 0,0);
    tracep->declBus(c+14,"next_pc", false,-1, 31,0);
    tracep->declBus(c+2,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"pc_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Priv_inst ");
    tracep->declBus(c+55,"csr_op", false,-1, 2,0);
    tracep->declBus(c+27,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+24,"rf_rdata1", false,-1, 31,0);
    tracep->declBus(c+16,"zimm", false,-1, 31,0);
    tracep->declBus(c+64,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+154,"CSRRW", false,-1, 2,0);
    tracep->declBus(c+155,"CSRRS", false,-1, 2,0);
    tracep->declBus(c+156,"CSRRC", false,-1, 2,0);
    tracep->declBus(c+157,"CSRRWI", false,-1, 2,0);
    tracep->declBus(c+158,"CSRRSI", false,-1, 2,0);
    tracep->declBus(c+159,"CSRRCI", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Regfile_inst ");
    tracep->declBus(c+139,"clk", false,-1, 0,0);
    tracep->declBus(c+103,"raddr1", false,-1, 4,0);
    tracep->declBus(c+104,"raddr2", false,-1, 4,0);
    tracep->declBus(c+99,"waddr", false,-1, 4,0);
    tracep->declBus(c+17,"wdata", false,-1, 31,0);
    tracep->declBit(c+53,"we", false,-1);
    tracep->declBus(c+18,"rdata1", false,-1, 31,0);
    tracep->declBus(c+20,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+107+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SegReg_EX_LS_inst ");
    tracep->declBus(c+145,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+139,"clk", false,-1, 0,0);
    tracep->declBus(c+140,"rstn", false,-1, 0,0);
    tracep->declBus(c+149,"stall", false,-1, 0,0);
    tracep->declBus(c+149,"flush", false,-1, 0,0);
    tracep->declBus(c+5,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+10,"inst_ex", false,-1, 31,0);
    tracep->declBus(c+28,"alu_result_ex", false,-1, 31,0);
    tracep->declBus(c+38,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+47,"wb_rf_sel_ex", false,-1, 0,0);
    tracep->declBus(c+51,"rf_we_ex", false,-1, 0,0);
    tracep->declBus(c+61,"csr_we_ex", false,-1, 0,0);
    tracep->declBus(c+57,"csr_waddr_ex", false,-1, 11,0);
    tracep->declBus(c+64,"csr_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+77,"commit_ex", false,-1, 0,0);
    tracep->declBus(c+6,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+11,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+29,"alu_result_ls", false,-1, 31,0);
    tracep->declBus(c+39,"mem_access_ls", false,-1, 4,0);
    tracep->declBus(c+48,"wb_rf_sel_ls", false,-1, 0,0);
    tracep->declBus(c+52,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+62,"csr_we_ls", false,-1, 0,0);
    tracep->declBus(c+58,"csr_waddr_ls", false,-1, 11,0);
    tracep->declBus(c+65,"csr_wdata_ls", false,-1, 31,0);
    tracep->declBus(c+78,"commit_ls", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_ID_EX_inst ");
    tracep->declBus(c+145,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+139,"clk", false,-1, 0,0);
    tracep->declBus(c+140,"rstn", false,-1, 0,0);
    tracep->declBus(c+149,"stall", false,-1, 0,0);
    tracep->declBus(c+74,"flush", false,-1, 0,0);
    tracep->declBus(c+4,"pc_id", false,-1, 31,0);
    tracep->declBus(c+9,"inst_id", false,-1, 31,0);
    tracep->declBus(c+18,"rdata1_id", false,-1, 31,0);
    tracep->declBus(c+20,"rdata2_id", false,-1, 31,0);
    tracep->declBus(c+15,"imm_id", false,-1, 31,0);
    tracep->declBus(c+37,"mem_access_id", false,-1, 4,0);
    tracep->declBus(c+35,"op_id", false,-1, 4,0);
    tracep->declBus(c+40,"br_type_id", false,-1, 4,0);
    tracep->declBus(c+46,"wb_rf_sel_id", false,-1, 0,0);
    tracep->declBus(c+42,"alu_rs1_sel_id", false,-1, 1,0);
    tracep->declBus(c+44,"alu_rs2_sel_id", false,-1, 1,0);
    tracep->declBus(c+50,"rf_we_id", false,-1, 0,0);
    tracep->declBus(c+54,"csr_op_id", false,-1, 2,0);
    tracep->declBus(c+60,"csr_we_id", false,-1, 0,0);
    tracep->declBus(c+56,"csr_waddr_id", false,-1, 11,0);
    tracep->declBus(c+67,"csr_rdata_id", false,-1, 31,0);
    tracep->declBus(c+76,"commit_id", false,-1, 0,0);
    tracep->declBus(c+5,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+10,"inst_ex", false,-1, 31,0);
    tracep->declBus(c+19,"rdata1_ex", false,-1, 31,0);
    tracep->declBus(c+21,"rdata2_ex", false,-1, 31,0);
    tracep->declBus(c+16,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+38,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+36,"op_ex", false,-1, 4,0);
    tracep->declBus(c+41,"br_type_ex", false,-1, 4,0);
    tracep->declBus(c+47,"wb_rf_sel_ex", false,-1, 0,0);
    tracep->declBus(c+43,"alu_rs1_sel_ex", false,-1, 1,0);
    tracep->declBus(c+45,"alu_rs2_sel_ex", false,-1, 1,0);
    tracep->declBus(c+51,"rf_we_ex", false,-1, 0,0);
    tracep->declBus(c+55,"csr_op_ex", false,-1, 2,0);
    tracep->declBus(c+61,"csr_we_ex", false,-1, 0,0);
    tracep->declBus(c+57,"csr_waddr_ex", false,-1, 11,0);
    tracep->declBus(c+68,"csr_rdata_ex", false,-1, 31,0);
    tracep->declBus(c+77,"commit_ex", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_IF1_IF2_inst ");
    tracep->declBus(c+145,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+139,"clk", false,-1, 0,0);
    tracep->declBus(c+140,"rstn", false,-1, 0,0);
    tracep->declBus(c+73,"stall", false,-1, 0,0);
    tracep->declBus(c+72,"flush", false,-1, 0,0);
    tracep->declBus(c+2,"pc_if1", false,-1, 31,0);
    tracep->declBus(c+140,"commit_if1", false,-1, 0,0);
    tracep->declBus(c+3,"pc_if2", false,-1, 31,0);
    tracep->declBus(c+75,"commit_if2", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_IF2_ID_inst ");
    tracep->declBus(c+145,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+139,"clk", false,-1, 0,0);
    tracep->declBus(c+140,"rstn", false,-1, 0,0);
    tracep->declBus(c+73,"stall", false,-1, 0,0);
    tracep->declBus(c+72,"flush", false,-1, 0,0);
    tracep->declBus(c+3,"pc_if2", false,-1, 31,0);
    tracep->declBus(c+8,"inst_if2", false,-1, 31,0);
    tracep->declBus(c+75,"commit_if2", false,-1, 0,0);
    tracep->declBus(c+4,"pc_id", false,-1, 31,0);
    tracep->declBus(c+9,"inst_id", false,-1, 31,0);
    tracep->declBus(c+76,"commit_id", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_LS_WB_inst ");
    tracep->declBus(c+145,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+139,"clk", false,-1, 0,0);
    tracep->declBus(c+140,"rstn", false,-1, 0,0);
    tracep->declBus(c+149,"stall", false,-1, 0,0);
    tracep->declBus(c+149,"flush", false,-1, 0,0);
    tracep->declBus(c+6,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+11,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+29,"alu_result_ls", false,-1, 31,0);
    tracep->declBus(c+32,"mem_rdata_ls", false,-1, 31,0);
    tracep->declBus(c+48,"wb_rf_sel_ls", false,-1, 0,0);
    tracep->declBus(c+52,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+62,"csr_we_ls", false,-1, 0,0);
    tracep->declBus(c+58,"csr_waddr_ls", false,-1, 11,0);
    tracep->declBus(c+65,"csr_wdata_ls", false,-1, 31,0);
    tracep->declBus(c+78,"commit_ls", false,-1, 0,0);
    tracep->declBus(c+93,"read_ls", false,-1, 0,0);
    tracep->declBus(c+7,"pc_wb", false,-1, 31,0);
    tracep->declBus(c+12,"inst_wb", false,-1, 31,0);
    tracep->declBus(c+30,"alu_result_wb", false,-1, 31,0);
    tracep->declBus(c+33,"mem_rdata_wb", false,-1, 31,0);
    tracep->declBus(c+49,"wb_rf_sel_wb", false,-1, 0,0);
    tracep->declBus(c+53,"rf_we_wb", false,-1, 0,0);
    tracep->declBus(c+63,"csr_we_wb", false,-1, 0,0);
    tracep->declBus(c+59,"csr_waddr_wb", false,-1, 11,0);
    tracep->declBus(c+66,"csr_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+141,"commit_wb", false,-1, 0,0);
    tracep->declBus(c+144,"uncache_read_wb", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_rf_wdata_mux ");
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+30,"din1", false,-1, 31,0);
    tracep->declBus(c+33,"din2", false,-1, 31,0);
    tracep->declBus(c+49,"sel", false,-1, 0,0);
    tracep->declBus(c+17,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCPU___024root__trace_init_top(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_top\n"); );
    // Body
    VCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPU___024root__trace_register(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPU___024root__trace_full_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_top_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPU___024root__trace_full_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->CPU__DOT__Regfile_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->CPU__DOT__PC_inst__DOT__pc_reg),32);
    bufp->fullIData(oldp+3,(vlSelf->CPU__DOT__pc_if2),32);
    bufp->fullIData(oldp+4,(vlSelf->CPU__DOT__pc_id),32);
    bufp->fullIData(oldp+5,(vlSelf->CPU__DOT__pc_ex),32);
    bufp->fullIData(oldp+6,(vlSelf->CPU__DOT__pc_ls),32);
    bufp->fullIData(oldp+7,(vlSelf->CPU__DOT__pc_wb),32);
    bufp->fullIData(oldp+8,(vlSelf->CPU__DOT__inst_if2),32);
    bufp->fullIData(oldp+9,(vlSelf->CPU__DOT__inst_id),32);
    bufp->fullIData(oldp+10,(vlSelf->CPU__DOT__inst_ex),32);
    bufp->fullIData(oldp+11,(vlSelf->CPU__DOT__inst_ls),32);
    bufp->fullIData(oldp+12,(vlSelf->CPU__DOT__inst_wb),32);
    bufp->fullIData(oldp+13,(vlSelf->CPU__DOT__pc_target),32);
    bufp->fullIData(oldp+14,(((IData)(vlSelf->CPU__DOT__pc_set)
                               ? vlSelf->CPU__DOT__pc_target
                               : ((IData)(4U) + vlSelf->CPU__DOT__PC_inst__DOT__pc_reg))),32);
    bufp->fullIData(oldp+15,(vlSelf->CPU__DOT__imm_id),32);
    bufp->fullIData(oldp+16,(vlSelf->CPU__DOT__imm_ex),32);
    bufp->fullIData(oldp+17,(vlSelf->CPU__DOT__rf_wdata_wb),32);
    bufp->fullIData(oldp+18,((((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                               & ((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                            >> 0xfU)) 
                                  == (0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                               >> 7U))))
                               ? vlSelf->CPU__DOT__rf_wdata_wb
                               : vlSelf->CPU__DOT__Regfile_inst__DOT__rf
                              [(0x1fU & (vlSelf->CPU__DOT__inst_id 
                                         >> 0xfU))])),32);
    bufp->fullIData(oldp+19,(vlSelf->CPU__DOT__rf_rdata1_ex),32);
    bufp->fullIData(oldp+20,((((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                               & ((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                            >> 0x14U)) 
                                  == (0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                               >> 7U))))
                               ? vlSelf->CPU__DOT__rf_wdata_wb
                               : vlSelf->CPU__DOT__Regfile_inst__DOT__rf
                              [(0x1fU & (vlSelf->CPU__DOT__inst_id 
                                         >> 0x14U))])),32);
    bufp->fullIData(oldp+21,(vlSelf->CPU__DOT__rf_rdata2_ex),32);
    bufp->fullIData(oldp+22,(vlSelf->CPU__DOT__forward1_data),32);
    bufp->fullIData(oldp+23,(vlSelf->CPU__DOT__forward2_data),32);
    bufp->fullIData(oldp+24,(vlSelf->CPU__DOT__alu_rf_data1),32);
    bufp->fullIData(oldp+25,(vlSelf->CPU__DOT__alu_rf_data2),32);
    bufp->fullIData(oldp+26,(vlSelf->CPU__DOT__alu_rs1),32);
    bufp->fullIData(oldp+27,(vlSelf->CPU__DOT__alu_rs2),32);
    bufp->fullIData(oldp+28,(vlSelf->CPU__DOT__alu_result_ex),32);
    bufp->fullIData(oldp+29,(vlSelf->CPU__DOT__alu_result_ls),32);
    bufp->fullIData(oldp+30,(vlSelf->CPU__DOT__alu_result_wb),32);
    bufp->fullIData(oldp+31,(vlSelf->CPU__DOT__jump_target),32);
    bufp->fullIData(oldp+32,(((4U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                               ? ((2U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                   ? 0U : ((1U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                            ? (0xffffU 
                                               & vlSelf->CPU__DOT__dcache_rdata_ls)
                                            : (0xffU 
                                               & vlSelf->CPU__DOT__dcache_rdata_ls)))
                               : ((2U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                   ? ((1U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                       ? 0U : vlSelf->CPU__DOT__dcache_rdata_ls)
                                   : ((1U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->CPU__DOT__dcache_rdata_ls 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelf->CPU__DOT__dcache_rdata_ls))
                                       : (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->CPU__DOT__dcache_rdata_ls 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelf->CPU__DOT__dcache_rdata_ls)))))),32);
    bufp->fullIData(oldp+33,(vlSelf->CPU__DOT__mem_rdata_wb),32);
    bufp->fullIData(oldp+34,(vlSelf->CPU__DOT__dcache_rdata_ls),32);
    bufp->fullCData(oldp+35,(vlSelf->CPU__DOT__alu_op_id),5);
    bufp->fullCData(oldp+36,(vlSelf->CPU__DOT__alu_op_ex),5);
    bufp->fullCData(oldp+37,(vlSelf->CPU__DOT__mem_access_id),5);
    bufp->fullCData(oldp+38,(vlSelf->CPU__DOT__mem_access_ex),5);
    bufp->fullCData(oldp+39,(vlSelf->CPU__DOT__mem_access_ls),5);
    bufp->fullCData(oldp+40,(vlSelf->CPU__DOT__br_type_id),5);
    bufp->fullCData(oldp+41,(vlSelf->CPU__DOT__br_type_ex),5);
    bufp->fullCData(oldp+42,(vlSelf->CPU__DOT__alu_rs1_sel_id),2);
    bufp->fullCData(oldp+43,(vlSelf->CPU__DOT__alu_rs1_sel_ex),2);
    bufp->fullCData(oldp+44,(vlSelf->CPU__DOT__alu_rs2_sel_id),2);
    bufp->fullCData(oldp+45,(vlSelf->CPU__DOT__alu_rs2_sel_ex),2);
    bufp->fullBit(oldp+46,(vlSelf->CPU__DOT__wb_rf_sel_id));
    bufp->fullBit(oldp+47,(vlSelf->CPU__DOT__wb_rf_sel_ex));
    bufp->fullBit(oldp+48,(vlSelf->CPU__DOT__wb_rf_sel_ls));
    bufp->fullBit(oldp+49,(vlSelf->CPU__DOT__wb_rf_sel_wb));
    bufp->fullBit(oldp+50,(vlSelf->CPU__DOT__rf_we_id));
    bufp->fullBit(oldp+51,(vlSelf->CPU__DOT__rf_we_ex));
    bufp->fullBit(oldp+52,(vlSelf->CPU__DOT__rf_we_ls));
    bufp->fullBit(oldp+53,(vlSelf->CPU__DOT__rf_we_wb));
    bufp->fullCData(oldp+54,(vlSelf->CPU__DOT__csr_op_id),3);
    bufp->fullCData(oldp+55,(vlSelf->CPU__DOT__csr_op_ex),3);
    bufp->fullSData(oldp+56,((vlSelf->CPU__DOT__inst_id 
                              >> 0x14U)),12);
    bufp->fullSData(oldp+57,(vlSelf->CPU__DOT__csr_waddr_ex),12);
    bufp->fullSData(oldp+58,(vlSelf->CPU__DOT__csr_waddr_ls),12);
    bufp->fullSData(oldp+59,(vlSelf->CPU__DOT__csr_waddr_wb),12);
    bufp->fullBit(oldp+60,(vlSelf->CPU__DOT__csr_we_id));
    bufp->fullBit(oldp+61,(vlSelf->CPU__DOT__csr_we_ex));
    bufp->fullBit(oldp+62,(vlSelf->CPU__DOT__csr_we_ls));
    bufp->fullBit(oldp+63,(vlSelf->CPU__DOT__csr_we_wb));
    bufp->fullIData(oldp+64,(((4U & (IData)(vlSelf->CPU__DOT__csr_op_ex))
                               ? ((2U & (IData)(vlSelf->CPU__DOT__csr_op_ex))
                                   ? ((1U & (IData)(vlSelf->CPU__DOT__csr_op_ex))
                                       ? (vlSelf->CPU__DOT__alu_rs2 
                                          & (~ vlSelf->CPU__DOT__imm_ex))
                                       : (vlSelf->CPU__DOT__alu_rs2 
                                          | vlSelf->CPU__DOT__imm_ex))
                                   : ((1U & (IData)(vlSelf->CPU__DOT__csr_op_ex))
                                       ? vlSelf->CPU__DOT__imm_ex
                                       : 0U)) : ((2U 
                                                  & (IData)(vlSelf->CPU__DOT__csr_op_ex))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->CPU__DOT__csr_op_ex))
                                                   ? 
                                                  (vlSelf->CPU__DOT__alu_rs2 
                                                   & (~ vlSelf->CPU__DOT__alu_rf_data1))
                                                   : 
                                                  (vlSelf->CPU__DOT__alu_rs2 
                                                   | vlSelf->CPU__DOT__alu_rf_data1))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->CPU__DOT__csr_op_ex))
                                                   ? vlSelf->CPU__DOT__alu_rf_data1
                                                   : 0U)))),32);
    bufp->fullIData(oldp+65,(vlSelf->CPU__DOT__csr_wdata_ls),32);
    bufp->fullIData(oldp+66,(vlSelf->CPU__DOT__csr_wdata_wb),32);
    bufp->fullIData(oldp+67,(((0x300U == (vlSelf->CPU__DOT__inst_id 
                                          >> 0x14U))
                               ? vlSelf->CPU__DOT__CSR_inst__DOT__mstatus
                               : ((0x305U == (vlSelf->CPU__DOT__inst_id 
                                              >> 0x14U))
                                   ? vlSelf->CPU__DOT__CSR_inst__DOT__mtvec
                                   : ((0x342U == (vlSelf->CPU__DOT__inst_id 
                                                  >> 0x14U))
                                       ? vlSelf->CPU__DOT__CSR_inst__DOT__mcause
                                       : ((0x341U == 
                                           (vlSelf->CPU__DOT__inst_id 
                                            >> 0x14U))
                                           ? vlSelf->CPU__DOT__CSR_inst__DOT__mepc
                                           : 0U))))),32);
    bufp->fullIData(oldp+68,(vlSelf->CPU__DOT__csr_rdata_ex),32);
    bufp->fullBit(oldp+69,(vlSelf->CPU__DOT__forward1_en));
    bufp->fullBit(oldp+70,(vlSelf->CPU__DOT__forward2_en));
    bufp->fullBit(oldp+71,(vlSelf->CPU__DOT__jump));
    bufp->fullBit(oldp+72,(vlSelf->CPU__DOT__pc_set));
    bufp->fullBit(oldp+73,(vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use));
    bufp->fullBit(oldp+74,(vlSelf->CPU__DOT__ID_EX_flush));
    bufp->fullBit(oldp+75,(vlSelf->CPU__DOT__commit_if2));
    bufp->fullBit(oldp+76,(vlSelf->CPU__DOT__commit_id));
    bufp->fullBit(oldp+77,(vlSelf->CPU__DOT__commit_ex));
    bufp->fullBit(oldp+78,(vlSelf->CPU__DOT__commit_ls));
    bufp->fullQData(oldp+79,(vlSelf->CPU__DOT__ALU_inst__DOT__result_64),64);
    bufp->fullIData(oldp+81,(vlSelf->CPU__DOT__ALU_inst__DOT__result_div),32);
    bufp->fullIData(oldp+82,(vlSelf->CPU__DOT__ALU_inst__DOT__result_rem),32);
    bufp->fullCData(oldp+83,((((IData)(vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h175d6d08__0) 
                               << 1U) | (vlSelf->CPU__DOT__alu_rs1 
                                         >> 0x1fU))),2);
    bufp->fullIData(oldp+84,(vlSelf->CPU__DOT__ALU_inst__DOT__sr1_abs),32);
    bufp->fullIData(oldp+85,(vlSelf->CPU__DOT__ALU_inst__DOT__sr2_abs),32);
    bufp->fullBit(oldp+86,((IData)((0x10U == (0x18U 
                                              & (IData)(vlSelf->CPU__DOT__br_type_ex))))));
    bufp->fullBit(oldp+87,(((IData)(vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0) 
                            & ((IData)(vlSelf->CPU__DOT__br_type_ex) 
                               >> 2U))));
    bufp->fullBit(oldp+88,(vlSelf->CPU__DOT__Branch_inst__DOT__is_jalr));
    bufp->fullIData(oldp+89,(vlSelf->CPU__DOT__CSR_inst__DOT__mstatus),32);
    bufp->fullIData(oldp+90,(vlSelf->CPU__DOT__CSR_inst__DOT__mtvec),32);
    bufp->fullIData(oldp+91,(vlSelf->CPU__DOT__CSR_inst__DOT__mcause),32);
    bufp->fullIData(oldp+92,(vlSelf->CPU__DOT__CSR_inst__DOT__mepc),32);
    bufp->fullBit(oldp+93,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ls) 
                                  >> 3U))));
    bufp->fullCData(oldp+94,((7U & (IData)(vlSelf->CPU__DOT__mem_access_ls))),3);
    bufp->fullIData(oldp+95,(vlSelf->CPU__DOT__DCache_inst__DOT__rdata_temp),32);
    bufp->fullCData(oldp+96,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                       >> 7U))),5);
    bufp->fullCData(oldp+97,((7U & (vlSelf->CPU__DOT__inst_id 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+98,((0x1fU & (vlSelf->CPU__DOT__inst_ls 
                                       >> 7U))),5);
    bufp->fullCData(oldp+99,((0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                       >> 7U))),5);
    bufp->fullCData(oldp+100,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+101,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+102,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                        >> 7U))),5);
    bufp->fullCData(oldp+103,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+104,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+105,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                                   >> 3U))));
    bufp->fullIData(oldp+106,(vlSelf->CPU__DOT__ICache_inst__DOT__rdata_temp),32);
    bufp->fullIData(oldp+107,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0]),32);
    bufp->fullIData(oldp+108,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[1]),32);
    bufp->fullIData(oldp+109,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[2]),32);
    bufp->fullIData(oldp+110,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[3]),32);
    bufp->fullIData(oldp+111,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[4]),32);
    bufp->fullIData(oldp+112,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[5]),32);
    bufp->fullIData(oldp+113,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[6]),32);
    bufp->fullIData(oldp+114,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[7]),32);
    bufp->fullIData(oldp+115,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[8]),32);
    bufp->fullIData(oldp+116,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[9]),32);
    bufp->fullIData(oldp+117,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[10]),32);
    bufp->fullIData(oldp+118,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[11]),32);
    bufp->fullIData(oldp+119,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[12]),32);
    bufp->fullIData(oldp+120,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[13]),32);
    bufp->fullIData(oldp+121,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[14]),32);
    bufp->fullIData(oldp+122,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[15]),32);
    bufp->fullIData(oldp+123,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[16]),32);
    bufp->fullIData(oldp+124,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[17]),32);
    bufp->fullIData(oldp+125,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[18]),32);
    bufp->fullIData(oldp+126,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[19]),32);
    bufp->fullIData(oldp+127,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[20]),32);
    bufp->fullIData(oldp+128,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[21]),32);
    bufp->fullIData(oldp+129,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[22]),32);
    bufp->fullIData(oldp+130,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[23]),32);
    bufp->fullIData(oldp+131,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[24]),32);
    bufp->fullIData(oldp+132,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[25]),32);
    bufp->fullIData(oldp+133,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[26]),32);
    bufp->fullIData(oldp+134,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[27]),32);
    bufp->fullIData(oldp+135,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[28]),32);
    bufp->fullIData(oldp+136,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[29]),32);
    bufp->fullIData(oldp+137,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[30]),32);
    bufp->fullIData(oldp+138,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[31]),32);
    bufp->fullBit(oldp+139,(vlSelf->clk));
    bufp->fullBit(oldp+140,(vlSelf->rstn));
    bufp->fullBit(oldp+141,(vlSelf->commit_wb));
    bufp->fullIData(oldp+142,(vlSelf->pc_cur),32);
    bufp->fullIData(oldp+143,(vlSelf->inst),32);
    bufp->fullBit(oldp+144,(vlSelf->uncache_read_wb));
    bufp->fullIData(oldp+145,(0x80000000U),32);
    bufp->fullIData(oldp+146,(8U),32);
    bufp->fullIData(oldp+147,(vlSelf->CPU__DOT__mem_wdata_ex),32);
    bufp->fullCData(oldp+148,(vlSelf->CPU__DOT__wstrb_ex),4);
    bufp->fullBit(oldp+149,(0U));
    bufp->fullIData(oldp+150,(0x20U),32);
    bufp->fullIData(oldp+151,(0U),32);
    bufp->fullIData(oldp+152,(4U),32);
    bufp->fullBit(oldp+153,(0U));
    bufp->fullCData(oldp+154,(1U),3);
    bufp->fullCData(oldp+155,(2U),3);
    bufp->fullCData(oldp+156,(3U),3);
    bufp->fullCData(oldp+157,(5U),3);
    bufp->fullCData(oldp+158,(6U),3);
    bufp->fullCData(oldp+159,(7U),3);
}
