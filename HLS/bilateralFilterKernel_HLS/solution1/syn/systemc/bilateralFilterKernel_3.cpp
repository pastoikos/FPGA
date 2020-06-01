#include "bilateralFilterKernel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void bilateralFilterKernel::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"m_axi_out_r_AWVALID\" :  \"" << m_axi_out_r_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_out_r_AWREADY\" :  \"" << m_axi_out_r_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_AWADDR\" :  \"" << m_axi_out_r_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_AWID\" :  \"" << m_axi_out_r_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_AWLEN\" :  \"" << m_axi_out_r_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_AWSIZE\" :  \"" << m_axi_out_r_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_AWBURST\" :  \"" << m_axi_out_r_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_AWLOCK\" :  \"" << m_axi_out_r_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_AWCACHE\" :  \"" << m_axi_out_r_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_AWPROT\" :  \"" << m_axi_out_r_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_AWQOS\" :  \"" << m_axi_out_r_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_AWREGION\" :  \"" << m_axi_out_r_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_AWUSER\" :  \"" << m_axi_out_r_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_WVALID\" :  \"" << m_axi_out_r_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_out_r_WREADY\" :  \"" << m_axi_out_r_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_WDATA\" :  \"" << m_axi_out_r_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_WSTRB\" :  \"" << m_axi_out_r_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_WLAST\" :  \"" << m_axi_out_r_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_WID\" :  \"" << m_axi_out_r_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_WUSER\" :  \"" << m_axi_out_r_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_ARVALID\" :  \"" << m_axi_out_r_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_out_r_ARREADY\" :  \"" << m_axi_out_r_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_ARADDR\" :  \"" << m_axi_out_r_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_ARID\" :  \"" << m_axi_out_r_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_ARLEN\" :  \"" << m_axi_out_r_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_ARSIZE\" :  \"" << m_axi_out_r_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_ARBURST\" :  \"" << m_axi_out_r_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_ARLOCK\" :  \"" << m_axi_out_r_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_ARCACHE\" :  \"" << m_axi_out_r_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_ARPROT\" :  \"" << m_axi_out_r_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_ARQOS\" :  \"" << m_axi_out_r_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_ARREGION\" :  \"" << m_axi_out_r_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_ARUSER\" :  \"" << m_axi_out_r_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_out_r_RVALID\" :  \"" << m_axi_out_r_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_RREADY\" :  \"" << m_axi_out_r_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_out_r_RDATA\" :  \"" << m_axi_out_r_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_out_r_RLAST\" :  \"" << m_axi_out_r_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_out_r_RID\" :  \"" << m_axi_out_r_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_out_r_RUSER\" :  \"" << m_axi_out_r_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_out_r_RRESP\" :  \"" << m_axi_out_r_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_out_r_BVALID\" :  \"" << m_axi_out_r_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_out_r_BREADY\" :  \"" << m_axi_out_r_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_out_r_BRESP\" :  \"" << m_axi_out_r_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_out_r_BID\" :  \"" << m_axi_out_r_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_out_r_BUSER\" :  \"" << m_axi_out_r_BUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_AWVALID\" :  \"" << m_axi_pad_depth_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_pad_depth_AWREADY\" :  \"" << m_axi_pad_depth_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_AWADDR\" :  \"" << m_axi_pad_depth_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_AWID\" :  \"" << m_axi_pad_depth_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_AWLEN\" :  \"" << m_axi_pad_depth_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_AWSIZE\" :  \"" << m_axi_pad_depth_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_AWBURST\" :  \"" << m_axi_pad_depth_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_AWLOCK\" :  \"" << m_axi_pad_depth_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_AWCACHE\" :  \"" << m_axi_pad_depth_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_AWPROT\" :  \"" << m_axi_pad_depth_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_AWQOS\" :  \"" << m_axi_pad_depth_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_AWREGION\" :  \"" << m_axi_pad_depth_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_AWUSER\" :  \"" << m_axi_pad_depth_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_WVALID\" :  \"" << m_axi_pad_depth_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_pad_depth_WREADY\" :  \"" << m_axi_pad_depth_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_WDATA\" :  \"" << m_axi_pad_depth_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_WSTRB\" :  \"" << m_axi_pad_depth_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_WLAST\" :  \"" << m_axi_pad_depth_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_WID\" :  \"" << m_axi_pad_depth_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_WUSER\" :  \"" << m_axi_pad_depth_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_ARVALID\" :  \"" << m_axi_pad_depth_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_pad_depth_ARREADY\" :  \"" << m_axi_pad_depth_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_ARADDR\" :  \"" << m_axi_pad_depth_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_ARID\" :  \"" << m_axi_pad_depth_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_ARLEN\" :  \"" << m_axi_pad_depth_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_ARSIZE\" :  \"" << m_axi_pad_depth_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_ARBURST\" :  \"" << m_axi_pad_depth_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_ARLOCK\" :  \"" << m_axi_pad_depth_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_ARCACHE\" :  \"" << m_axi_pad_depth_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_ARPROT\" :  \"" << m_axi_pad_depth_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_ARQOS\" :  \"" << m_axi_pad_depth_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_ARREGION\" :  \"" << m_axi_pad_depth_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_ARUSER\" :  \"" << m_axi_pad_depth_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_pad_depth_RVALID\" :  \"" << m_axi_pad_depth_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_RREADY\" :  \"" << m_axi_pad_depth_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_pad_depth_RDATA\" :  \"" << m_axi_pad_depth_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_pad_depth_RLAST\" :  \"" << m_axi_pad_depth_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_pad_depth_RID\" :  \"" << m_axi_pad_depth_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_pad_depth_RUSER\" :  \"" << m_axi_pad_depth_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_pad_depth_RRESP\" :  \"" << m_axi_pad_depth_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_pad_depth_BVALID\" :  \"" << m_axi_pad_depth_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_pad_depth_BREADY\" :  \"" << m_axi_pad_depth_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_pad_depth_BRESP\" :  \"" << m_axi_pad_depth_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_pad_depth_BID\" :  \"" << m_axi_pad_depth_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_pad_depth_BUSER\" :  \"" << m_axi_pad_depth_BUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_AWVALID\" :  \"" << m_axi_gaussian_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gaussian_AWREADY\" :  \"" << m_axi_gaussian_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_AWADDR\" :  \"" << m_axi_gaussian_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_AWID\" :  \"" << m_axi_gaussian_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_AWLEN\" :  \"" << m_axi_gaussian_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_AWSIZE\" :  \"" << m_axi_gaussian_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_AWBURST\" :  \"" << m_axi_gaussian_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_AWLOCK\" :  \"" << m_axi_gaussian_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_AWCACHE\" :  \"" << m_axi_gaussian_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_AWPROT\" :  \"" << m_axi_gaussian_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_AWQOS\" :  \"" << m_axi_gaussian_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_AWREGION\" :  \"" << m_axi_gaussian_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_AWUSER\" :  \"" << m_axi_gaussian_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_WVALID\" :  \"" << m_axi_gaussian_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gaussian_WREADY\" :  \"" << m_axi_gaussian_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_WDATA\" :  \"" << m_axi_gaussian_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_WSTRB\" :  \"" << m_axi_gaussian_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_WLAST\" :  \"" << m_axi_gaussian_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_WID\" :  \"" << m_axi_gaussian_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_WUSER\" :  \"" << m_axi_gaussian_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_ARVALID\" :  \"" << m_axi_gaussian_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gaussian_ARREADY\" :  \"" << m_axi_gaussian_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_ARADDR\" :  \"" << m_axi_gaussian_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_ARID\" :  \"" << m_axi_gaussian_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_ARLEN\" :  \"" << m_axi_gaussian_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_ARSIZE\" :  \"" << m_axi_gaussian_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_ARBURST\" :  \"" << m_axi_gaussian_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_ARLOCK\" :  \"" << m_axi_gaussian_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_ARCACHE\" :  \"" << m_axi_gaussian_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_ARPROT\" :  \"" << m_axi_gaussian_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_ARQOS\" :  \"" << m_axi_gaussian_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_ARREGION\" :  \"" << m_axi_gaussian_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_ARUSER\" :  \"" << m_axi_gaussian_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gaussian_RVALID\" :  \"" << m_axi_gaussian_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_RREADY\" :  \"" << m_axi_gaussian_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gaussian_RDATA\" :  \"" << m_axi_gaussian_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gaussian_RLAST\" :  \"" << m_axi_gaussian_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gaussian_RID\" :  \"" << m_axi_gaussian_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gaussian_RUSER\" :  \"" << m_axi_gaussian_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gaussian_RRESP\" :  \"" << m_axi_gaussian_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gaussian_BVALID\" :  \"" << m_axi_gaussian_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gaussian_BREADY\" :  \"" << m_axi_gaussian_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gaussian_BRESP\" :  \"" << m_axi_gaussian_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gaussian_BID\" :  \"" << m_axi_gaussian_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gaussian_BUSER\" :  \"" << m_axi_gaussian_BUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_AWVALID\" :  \"" << s_axi_control_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_AWREADY\" :  \"" << s_axi_control_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_AWADDR\" :  \"" << s_axi_control_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_WVALID\" :  \"" << s_axi_control_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_WREADY\" :  \"" << s_axi_control_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_WDATA\" :  \"" << s_axi_control_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_WSTRB\" :  \"" << s_axi_control_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_ARVALID\" :  \"" << s_axi_control_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_ARREADY\" :  \"" << s_axi_control_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_ARADDR\" :  \"" << s_axi_control_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_RVALID\" :  \"" << s_axi_control_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_RREADY\" :  \"" << s_axi_control_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_RDATA\" :  \"" << s_axi_control_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_RRESP\" :  \"" << s_axi_control_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_BVALID\" :  \"" << s_axi_control_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_BREADY\" :  \"" << s_axi_control_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_BRESP\" :  \"" << s_axi_control_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
