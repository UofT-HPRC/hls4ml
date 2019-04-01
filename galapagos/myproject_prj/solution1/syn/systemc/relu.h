// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _relu_HH_
#define _relu_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct relu : public sc_module {
    // Port declarations 25
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > data_0_V_read;
    sc_in< sc_lv<32> > data_1_V_read;
    sc_in< sc_lv<32> > data_2_V_read;
    sc_in< sc_lv<32> > data_3_V_read;
    sc_in< sc_lv<32> > data_4_V_read;
    sc_in< sc_lv<32> > data_5_V_read;
    sc_in< sc_lv<32> > data_6_V_read;
    sc_in< sc_lv<32> > data_7_V_read;
    sc_in< sc_lv<32> > data_8_V_read;
    sc_in< sc_lv<32> > data_9_V_read;
    sc_in< sc_lv<32> > data_10_V_read;
    sc_in< sc_lv<32> > data_11_V_read;
    sc_out< sc_lv<32> > ap_return_0;
    sc_out< sc_lv<32> > ap_return_1;
    sc_out< sc_lv<32> > ap_return_2;
    sc_out< sc_lv<32> > ap_return_3;
    sc_out< sc_lv<32> > ap_return_4;
    sc_out< sc_lv<32> > ap_return_5;
    sc_out< sc_lv<32> > ap_return_6;
    sc_out< sc_lv<32> > ap_return_7;
    sc_out< sc_lv<32> > ap_return_8;
    sc_out< sc_lv<32> > ap_return_9;
    sc_out< sc_lv<32> > ap_return_10;
    sc_out< sc_lv<32> > ap_return_11;


    // Module declarations
    relu(sc_module_name name);
    SC_HAS_PROCESS(relu);

    ~relu();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<1> > tmp_29_fu_118_p2;
    sc_signal< sc_lv<31> > tmp_257_fu_124_p1;
    sc_signal< sc_lv<31> > res_0_V_write_assig_fu_128_p3;
    sc_signal< sc_lv<1> > tmp_29_1_fu_140_p2;
    sc_signal< sc_lv<31> > tmp_258_fu_146_p1;
    sc_signal< sc_lv<31> > res_1_V_write_assig_fu_150_p3;
    sc_signal< sc_lv<1> > tmp_29_2_fu_162_p2;
    sc_signal< sc_lv<31> > tmp_259_fu_168_p1;
    sc_signal< sc_lv<31> > res_2_V_write_assig_fu_172_p3;
    sc_signal< sc_lv<1> > tmp_29_3_fu_184_p2;
    sc_signal< sc_lv<31> > tmp_260_fu_190_p1;
    sc_signal< sc_lv<31> > res_3_V_write_assig_fu_194_p3;
    sc_signal< sc_lv<1> > tmp_29_4_fu_206_p2;
    sc_signal< sc_lv<31> > tmp_261_fu_212_p1;
    sc_signal< sc_lv<31> > res_4_V_write_assig_fu_216_p3;
    sc_signal< sc_lv<1> > tmp_29_5_fu_228_p2;
    sc_signal< sc_lv<31> > tmp_262_fu_234_p1;
    sc_signal< sc_lv<31> > res_5_V_write_assig_fu_238_p3;
    sc_signal< sc_lv<1> > tmp_29_6_fu_250_p2;
    sc_signal< sc_lv<31> > tmp_263_fu_256_p1;
    sc_signal< sc_lv<31> > res_6_V_write_assig_fu_260_p3;
    sc_signal< sc_lv<1> > tmp_29_7_fu_272_p2;
    sc_signal< sc_lv<31> > tmp_264_fu_278_p1;
    sc_signal< sc_lv<31> > res_7_V_write_assig_fu_282_p3;
    sc_signal< sc_lv<1> > tmp_29_8_fu_294_p2;
    sc_signal< sc_lv<31> > tmp_265_fu_300_p1;
    sc_signal< sc_lv<31> > res_8_V_write_assig_fu_304_p3;
    sc_signal< sc_lv<1> > tmp_29_9_fu_316_p2;
    sc_signal< sc_lv<31> > tmp_266_fu_322_p1;
    sc_signal< sc_lv<31> > res_9_V_write_assig_fu_326_p3;
    sc_signal< sc_lv<1> > tmp_29_s_fu_338_p2;
    sc_signal< sc_lv<31> > tmp_267_fu_344_p1;
    sc_signal< sc_lv<31> > res_10_V_write_assi_fu_348_p3;
    sc_signal< sc_lv<1> > tmp_29_10_fu_360_p2;
    sc_signal< sc_lv<31> > tmp_268_fu_366_p1;
    sc_signal< sc_lv<31> > res_11_V_write_assi_fu_370_p3;
    sc_signal< sc_lv<32> > res_0_V_write_assig_1_fu_136_p1;
    sc_signal< sc_lv<32> > res_1_V_write_assig_1_fu_158_p1;
    sc_signal< sc_lv<32> > res_2_V_write_assig_1_fu_180_p1;
    sc_signal< sc_lv<32> > res_3_V_write_assig_1_fu_202_p1;
    sc_signal< sc_lv<32> > res_4_V_write_assig_1_fu_224_p1;
    sc_signal< sc_lv<32> > res_5_V_write_assig_1_fu_246_p1;
    sc_signal< sc_lv<32> > res_6_V_write_assig_1_fu_268_p1;
    sc_signal< sc_lv<32> > res_7_V_write_assig_1_fu_290_p1;
    sc_signal< sc_lv<32> > res_8_V_write_assig_1_fu_312_p1;
    sc_signal< sc_lv<32> > res_9_V_write_assig_1_fu_334_p1;
    sc_signal< sc_lv<32> > res_10_V_write_assi_1_fu_356_p1;
    sc_signal< sc_lv<32> > res_11_V_write_assi_1_fu_378_p1;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_10();
    void thread_ap_return_11();
    void thread_ap_return_2();
    void thread_ap_return_3();
    void thread_ap_return_4();
    void thread_ap_return_5();
    void thread_ap_return_6();
    void thread_ap_return_7();
    void thread_ap_return_8();
    void thread_ap_return_9();
    void thread_res_0_V_write_assig_1_fu_136_p1();
    void thread_res_0_V_write_assig_fu_128_p3();
    void thread_res_10_V_write_assi_1_fu_356_p1();
    void thread_res_10_V_write_assi_fu_348_p3();
    void thread_res_11_V_write_assi_1_fu_378_p1();
    void thread_res_11_V_write_assi_fu_370_p3();
    void thread_res_1_V_write_assig_1_fu_158_p1();
    void thread_res_1_V_write_assig_fu_150_p3();
    void thread_res_2_V_write_assig_1_fu_180_p1();
    void thread_res_2_V_write_assig_fu_172_p3();
    void thread_res_3_V_write_assig_1_fu_202_p1();
    void thread_res_3_V_write_assig_fu_194_p3();
    void thread_res_4_V_write_assig_1_fu_224_p1();
    void thread_res_4_V_write_assig_fu_216_p3();
    void thread_res_5_V_write_assig_1_fu_246_p1();
    void thread_res_5_V_write_assig_fu_238_p3();
    void thread_res_6_V_write_assig_1_fu_268_p1();
    void thread_res_6_V_write_assig_fu_260_p3();
    void thread_res_7_V_write_assig_1_fu_290_p1();
    void thread_res_7_V_write_assig_fu_282_p3();
    void thread_res_8_V_write_assig_1_fu_312_p1();
    void thread_res_8_V_write_assig_fu_304_p3();
    void thread_res_9_V_write_assig_1_fu_334_p1();
    void thread_res_9_V_write_assig_fu_326_p3();
    void thread_tmp_257_fu_124_p1();
    void thread_tmp_258_fu_146_p1();
    void thread_tmp_259_fu_168_p1();
    void thread_tmp_260_fu_190_p1();
    void thread_tmp_261_fu_212_p1();
    void thread_tmp_262_fu_234_p1();
    void thread_tmp_263_fu_256_p1();
    void thread_tmp_264_fu_278_p1();
    void thread_tmp_265_fu_300_p1();
    void thread_tmp_266_fu_322_p1();
    void thread_tmp_267_fu_344_p1();
    void thread_tmp_268_fu_366_p1();
    void thread_tmp_29_10_fu_360_p2();
    void thread_tmp_29_1_fu_140_p2();
    void thread_tmp_29_2_fu_162_p2();
    void thread_tmp_29_3_fu_184_p2();
    void thread_tmp_29_4_fu_206_p2();
    void thread_tmp_29_5_fu_228_p2();
    void thread_tmp_29_6_fu_250_p2();
    void thread_tmp_29_7_fu_272_p2();
    void thread_tmp_29_8_fu_294_p2();
    void thread_tmp_29_9_fu_316_p2();
    void thread_tmp_29_fu_118_p2();
    void thread_tmp_29_s_fu_338_p2();
};

}

using namespace ap_rtl;

#endif
