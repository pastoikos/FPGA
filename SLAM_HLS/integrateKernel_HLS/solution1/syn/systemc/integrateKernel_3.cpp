#include "integrateKernel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void integrateKernel::thread_hdltv_gen() {
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
        mHdltvoutHandle << mComma << "{"  <<  " \"m_axi_vol_data_AWVALID\" :  \"" << m_axi_vol_data_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_vol_data_AWREADY\" :  \"" << m_axi_vol_data_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_AWADDR\" :  \"" << m_axi_vol_data_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_AWID\" :  \"" << m_axi_vol_data_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_AWLEN\" :  \"" << m_axi_vol_data_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_AWSIZE\" :  \"" << m_axi_vol_data_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_AWBURST\" :  \"" << m_axi_vol_data_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_AWLOCK\" :  \"" << m_axi_vol_data_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_AWCACHE\" :  \"" << m_axi_vol_data_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_AWPROT\" :  \"" << m_axi_vol_data_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_AWQOS\" :  \"" << m_axi_vol_data_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_AWREGION\" :  \"" << m_axi_vol_data_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_AWUSER\" :  \"" << m_axi_vol_data_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_WVALID\" :  \"" << m_axi_vol_data_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_vol_data_WREADY\" :  \"" << m_axi_vol_data_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_WDATA\" :  \"" << m_axi_vol_data_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_WSTRB\" :  \"" << m_axi_vol_data_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_WLAST\" :  \"" << m_axi_vol_data_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_WID\" :  \"" << m_axi_vol_data_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_WUSER\" :  \"" << m_axi_vol_data_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_ARVALID\" :  \"" << m_axi_vol_data_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_vol_data_ARREADY\" :  \"" << m_axi_vol_data_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_ARADDR\" :  \"" << m_axi_vol_data_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_ARID\" :  \"" << m_axi_vol_data_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_ARLEN\" :  \"" << m_axi_vol_data_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_ARSIZE\" :  \"" << m_axi_vol_data_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_ARBURST\" :  \"" << m_axi_vol_data_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_ARLOCK\" :  \"" << m_axi_vol_data_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_ARCACHE\" :  \"" << m_axi_vol_data_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_ARPROT\" :  \"" << m_axi_vol_data_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_ARQOS\" :  \"" << m_axi_vol_data_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_ARREGION\" :  \"" << m_axi_vol_data_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_ARUSER\" :  \"" << m_axi_vol_data_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_vol_data_RVALID\" :  \"" << m_axi_vol_data_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_RREADY\" :  \"" << m_axi_vol_data_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_vol_data_RDATA\" :  \"" << m_axi_vol_data_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_vol_data_RLAST\" :  \"" << m_axi_vol_data_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_vol_data_RID\" :  \"" << m_axi_vol_data_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_vol_data_RUSER\" :  \"" << m_axi_vol_data_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_vol_data_RRESP\" :  \"" << m_axi_vol_data_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_vol_data_BVALID\" :  \"" << m_axi_vol_data_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_vol_data_BREADY\" :  \"" << m_axi_vol_data_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_vol_data_BRESP\" :  \"" << m_axi_vol_data_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_vol_data_BID\" :  \"" << m_axi_vol_data_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_vol_data_BUSER\" :  \"" << m_axi_vol_data_BUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_AWVALID\" :  \"" << m_axi_depth_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_depth_AWREADY\" :  \"" << m_axi_depth_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_AWADDR\" :  \"" << m_axi_depth_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_AWID\" :  \"" << m_axi_depth_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_AWLEN\" :  \"" << m_axi_depth_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_AWSIZE\" :  \"" << m_axi_depth_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_AWBURST\" :  \"" << m_axi_depth_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_AWLOCK\" :  \"" << m_axi_depth_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_AWCACHE\" :  \"" << m_axi_depth_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_AWPROT\" :  \"" << m_axi_depth_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_AWQOS\" :  \"" << m_axi_depth_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_AWREGION\" :  \"" << m_axi_depth_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_AWUSER\" :  \"" << m_axi_depth_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_WVALID\" :  \"" << m_axi_depth_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_depth_WREADY\" :  \"" << m_axi_depth_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_WDATA\" :  \"" << m_axi_depth_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_WSTRB\" :  \"" << m_axi_depth_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_WLAST\" :  \"" << m_axi_depth_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_WID\" :  \"" << m_axi_depth_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_WUSER\" :  \"" << m_axi_depth_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_ARVALID\" :  \"" << m_axi_depth_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_depth_ARREADY\" :  \"" << m_axi_depth_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_ARADDR\" :  \"" << m_axi_depth_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_ARID\" :  \"" << m_axi_depth_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_ARLEN\" :  \"" << m_axi_depth_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_ARSIZE\" :  \"" << m_axi_depth_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_ARBURST\" :  \"" << m_axi_depth_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_ARLOCK\" :  \"" << m_axi_depth_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_ARCACHE\" :  \"" << m_axi_depth_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_ARPROT\" :  \"" << m_axi_depth_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_ARQOS\" :  \"" << m_axi_depth_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_ARREGION\" :  \"" << m_axi_depth_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_ARUSER\" :  \"" << m_axi_depth_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_depth_RVALID\" :  \"" << m_axi_depth_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_RREADY\" :  \"" << m_axi_depth_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_depth_RDATA\" :  \"" << m_axi_depth_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_depth_RLAST\" :  \"" << m_axi_depth_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_depth_RID\" :  \"" << m_axi_depth_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_depth_RUSER\" :  \"" << m_axi_depth_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_depth_RRESP\" :  \"" << m_axi_depth_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_depth_BVALID\" :  \"" << m_axi_depth_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_depth_BREADY\" :  \"" << m_axi_depth_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_depth_BRESP\" :  \"" << m_axi_depth_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_depth_BID\" :  \"" << m_axi_depth_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_depth_BUSER\" :  \"" << m_axi_depth_BUSER.read() << "\" ";
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

