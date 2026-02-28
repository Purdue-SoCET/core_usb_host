// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vusbh_host_tb_wrapper__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vusbh_host_tb_wrapper::Vusbh_host_tb_wrapper(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vusbh_host_tb_wrapper__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , n_rst_i{vlSymsp->TOP.n_rst_i}
    , hsel_i{vlSymsp->TOP.hsel_i}
    , hwrite_i{vlSymsp->TOP.hwrite_i}
    , htrans_i{vlSymsp->TOP.htrans_i}
    , hsize_i{vlSymsp->TOP.hsize_i}
    , hready_o{vlSymsp->TOP.hready_o}
    , utmi_data_in_i{vlSymsp->TOP.utmi_data_in_i}
    , utmi_txready_i{vlSymsp->TOP.utmi_txready_i}
    , utmi_rxvalid_i{vlSymsp->TOP.utmi_rxvalid_i}
    , utmi_rxactive_i{vlSymsp->TOP.utmi_rxactive_i}
    , utmi_rxerror_i{vlSymsp->TOP.utmi_rxerror_i}
    , utmi_linestate_i{vlSymsp->TOP.utmi_linestate_i}
    , intr_o{vlSymsp->TOP.intr_o}
    , utmi_data_out_o{vlSymsp->TOP.utmi_data_out_o}
    , utmi_txvalid_o{vlSymsp->TOP.utmi_txvalid_o}
    , utmi_op_mode_o{vlSymsp->TOP.utmi_op_mode_o}
    , utmi_xcvrselect_o{vlSymsp->TOP.utmi_xcvrselect_o}
    , utmi_termselect_o{vlSymsp->TOP.utmi_termselect_o}
    , utmi_dppulldown_o{vlSymsp->TOP.utmi_dppulldown_o}
    , utmi_dmpulldown_o{vlSymsp->TOP.utmi_dmpulldown_o}
    , haddr_i{vlSymsp->TOP.haddr_i}
    , hwdata_i{vlSymsp->TOP.hwdata_i}
    , hrdata_o{vlSymsp->TOP.hrdata_o}
    , __PVT__usbh_host_tb_wrapper__DOT__ahb{vlSymsp->TOP.__PVT__usbh_host_tb_wrapper__DOT__ahb}
    , __PVT__usbh_host_tb_wrapper__DOT__busif{vlSymsp->TOP.__PVT__usbh_host_tb_wrapper__DOT__busif}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vusbh_host_tb_wrapper::Vusbh_host_tb_wrapper(const char* _vcname__)
    : Vusbh_host_tb_wrapper(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vusbh_host_tb_wrapper::~Vusbh_host_tb_wrapper() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vusbh_host_tb_wrapper___024root___eval_debug_assertions(Vusbh_host_tb_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vusbh_host_tb_wrapper___024root___eval_static(Vusbh_host_tb_wrapper___024root* vlSelf);
void Vusbh_host_tb_wrapper___024root___eval_initial(Vusbh_host_tb_wrapper___024root* vlSelf);
void Vusbh_host_tb_wrapper___024root___eval_settle(Vusbh_host_tb_wrapper___024root* vlSelf);
void Vusbh_host_tb_wrapper___024root___eval(Vusbh_host_tb_wrapper___024root* vlSelf);

void Vusbh_host_tb_wrapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vusbh_host_tb_wrapper::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vusbh_host_tb_wrapper___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vusbh_host_tb_wrapper___024root___eval_static(&(vlSymsp->TOP));
        Vusbh_host_tb_wrapper___024root___eval_initial(&(vlSymsp->TOP));
        Vusbh_host_tb_wrapper___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vusbh_host_tb_wrapper___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vusbh_host_tb_wrapper::eventsPending() { return false; }

uint64_t Vusbh_host_tb_wrapper::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vusbh_host_tb_wrapper::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vusbh_host_tb_wrapper___024root___eval_final(Vusbh_host_tb_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vusbh_host_tb_wrapper::final() {
    Vusbh_host_tb_wrapper___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vusbh_host_tb_wrapper::hierName() const { return vlSymsp->name(); }
const char* Vusbh_host_tb_wrapper::modelName() const { return "Vusbh_host_tb_wrapper"; }
unsigned Vusbh_host_tb_wrapper::threads() const { return 1; }
void Vusbh_host_tb_wrapper::prepareClone() const { contextp()->prepareClone(); }
void Vusbh_host_tb_wrapper::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vusbh_host_tb_wrapper::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vusbh_host_tb_wrapper___024root__trace_decl_types(VerilatedFst* tracep);

void Vusbh_host_tb_wrapper___024root__trace_init_top(Vusbh_host_tb_wrapper___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vusbh_host_tb_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vusbh_host_tb_wrapper___024root*>(voidSelf);
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vusbh_host_tb_wrapper___024root__trace_decl_types(tracep);
    Vusbh_host_tb_wrapper___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_register(Vusbh_host_tb_wrapper___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vusbh_host_tb_wrapper::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vusbh_host_tb_wrapper::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vusbh_host_tb_wrapper___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
