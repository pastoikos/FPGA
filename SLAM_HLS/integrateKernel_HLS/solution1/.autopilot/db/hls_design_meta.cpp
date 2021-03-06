#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst_n", 1, hls_in, -1, "", "", 1),
	Port_Property("m_axi_vol_data_AWVALID", 1, hls_out, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_vol_data_AWREADY", 1, hls_in, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_vol_data_AWADDR", 32, hls_out, 0, "m_axi", "ADDR", 1),
	Port_Property("m_axi_vol_data_AWID", 1, hls_out, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_vol_data_AWLEN", 8, hls_out, 0, "m_axi", "LEN", 1),
	Port_Property("m_axi_vol_data_AWSIZE", 3, hls_out, 0, "m_axi", "SIZE", 1),
	Port_Property("m_axi_vol_data_AWBURST", 2, hls_out, 0, "m_axi", "BURST", 1),
	Port_Property("m_axi_vol_data_AWLOCK", 2, hls_out, 0, "m_axi", "LOCK", 1),
	Port_Property("m_axi_vol_data_AWCACHE", 4, hls_out, 0, "m_axi", "CACHE", 1),
	Port_Property("m_axi_vol_data_AWPROT", 3, hls_out, 0, "m_axi", "PROT", 1),
	Port_Property("m_axi_vol_data_AWQOS", 4, hls_out, 0, "m_axi", "QOS", 1),
	Port_Property("m_axi_vol_data_AWREGION", 4, hls_out, 0, "m_axi", "REGION", 1),
	Port_Property("m_axi_vol_data_AWUSER", 1, hls_out, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_vol_data_WVALID", 1, hls_out, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_vol_data_WREADY", 1, hls_in, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_vol_data_WDATA", 32, hls_out, 0, "m_axi", "DATA", 1),
	Port_Property("m_axi_vol_data_WSTRB", 4, hls_out, 0, "m_axi", "STRB", 1),
	Port_Property("m_axi_vol_data_WLAST", 1, hls_out, 0, "m_axi", "LAST", 1),
	Port_Property("m_axi_vol_data_WID", 1, hls_out, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_vol_data_WUSER", 1, hls_out, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_vol_data_ARVALID", 1, hls_out, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_vol_data_ARREADY", 1, hls_in, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_vol_data_ARADDR", 32, hls_out, 0, "m_axi", "ADDR", 1),
	Port_Property("m_axi_vol_data_ARID", 1, hls_out, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_vol_data_ARLEN", 8, hls_out, 0, "m_axi", "LEN", 1),
	Port_Property("m_axi_vol_data_ARSIZE", 3, hls_out, 0, "m_axi", "SIZE", 1),
	Port_Property("m_axi_vol_data_ARBURST", 2, hls_out, 0, "m_axi", "BURST", 1),
	Port_Property("m_axi_vol_data_ARLOCK", 2, hls_out, 0, "m_axi", "LOCK", 1),
	Port_Property("m_axi_vol_data_ARCACHE", 4, hls_out, 0, "m_axi", "CACHE", 1),
	Port_Property("m_axi_vol_data_ARPROT", 3, hls_out, 0, "m_axi", "PROT", 1),
	Port_Property("m_axi_vol_data_ARQOS", 4, hls_out, 0, "m_axi", "QOS", 1),
	Port_Property("m_axi_vol_data_ARREGION", 4, hls_out, 0, "m_axi", "REGION", 1),
	Port_Property("m_axi_vol_data_ARUSER", 1, hls_out, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_vol_data_RVALID", 1, hls_in, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_vol_data_RREADY", 1, hls_out, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_vol_data_RDATA", 32, hls_in, 0, "m_axi", "DATA", 1),
	Port_Property("m_axi_vol_data_RLAST", 1, hls_in, 0, "m_axi", "LAST", 1),
	Port_Property("m_axi_vol_data_RID", 1, hls_in, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_vol_data_RUSER", 1, hls_in, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_vol_data_RRESP", 2, hls_in, 0, "m_axi", "RESP", 1),
	Port_Property("m_axi_vol_data_BVALID", 1, hls_in, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_vol_data_BREADY", 1, hls_out, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_vol_data_BRESP", 2, hls_in, 0, "m_axi", "RESP", 1),
	Port_Property("m_axi_vol_data_BID", 1, hls_in, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_vol_data_BUSER", 1, hls_in, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_depth_AWVALID", 1, hls_out, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_depth_AWREADY", 1, hls_in, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_depth_AWADDR", 32, hls_out, 1, "m_axi", "ADDR", 1),
	Port_Property("m_axi_depth_AWID", 1, hls_out, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_depth_AWLEN", 8, hls_out, 1, "m_axi", "LEN", 1),
	Port_Property("m_axi_depth_AWSIZE", 3, hls_out, 1, "m_axi", "SIZE", 1),
	Port_Property("m_axi_depth_AWBURST", 2, hls_out, 1, "m_axi", "BURST", 1),
	Port_Property("m_axi_depth_AWLOCK", 2, hls_out, 1, "m_axi", "LOCK", 1),
	Port_Property("m_axi_depth_AWCACHE", 4, hls_out, 1, "m_axi", "CACHE", 1),
	Port_Property("m_axi_depth_AWPROT", 3, hls_out, 1, "m_axi", "PROT", 1),
	Port_Property("m_axi_depth_AWQOS", 4, hls_out, 1, "m_axi", "QOS", 1),
	Port_Property("m_axi_depth_AWREGION", 4, hls_out, 1, "m_axi", "REGION", 1),
	Port_Property("m_axi_depth_AWUSER", 1, hls_out, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_depth_WVALID", 1, hls_out, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_depth_WREADY", 1, hls_in, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_depth_WDATA", 32, hls_out, 1, "m_axi", "DATA", 1),
	Port_Property("m_axi_depth_WSTRB", 4, hls_out, 1, "m_axi", "STRB", 1),
	Port_Property("m_axi_depth_WLAST", 1, hls_out, 1, "m_axi", "LAST", 1),
	Port_Property("m_axi_depth_WID", 1, hls_out, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_depth_WUSER", 1, hls_out, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_depth_ARVALID", 1, hls_out, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_depth_ARREADY", 1, hls_in, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_depth_ARADDR", 32, hls_out, 1, "m_axi", "ADDR", 1),
	Port_Property("m_axi_depth_ARID", 1, hls_out, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_depth_ARLEN", 8, hls_out, 1, "m_axi", "LEN", 1),
	Port_Property("m_axi_depth_ARSIZE", 3, hls_out, 1, "m_axi", "SIZE", 1),
	Port_Property("m_axi_depth_ARBURST", 2, hls_out, 1, "m_axi", "BURST", 1),
	Port_Property("m_axi_depth_ARLOCK", 2, hls_out, 1, "m_axi", "LOCK", 1),
	Port_Property("m_axi_depth_ARCACHE", 4, hls_out, 1, "m_axi", "CACHE", 1),
	Port_Property("m_axi_depth_ARPROT", 3, hls_out, 1, "m_axi", "PROT", 1),
	Port_Property("m_axi_depth_ARQOS", 4, hls_out, 1, "m_axi", "QOS", 1),
	Port_Property("m_axi_depth_ARREGION", 4, hls_out, 1, "m_axi", "REGION", 1),
	Port_Property("m_axi_depth_ARUSER", 1, hls_out, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_depth_RVALID", 1, hls_in, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_depth_RREADY", 1, hls_out, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_depth_RDATA", 32, hls_in, 1, "m_axi", "DATA", 1),
	Port_Property("m_axi_depth_RLAST", 1, hls_in, 1, "m_axi", "LAST", 1),
	Port_Property("m_axi_depth_RID", 1, hls_in, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_depth_RUSER", 1, hls_in, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_depth_RRESP", 2, hls_in, 1, "m_axi", "RESP", 1),
	Port_Property("m_axi_depth_BVALID", 1, hls_in, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_depth_BREADY", 1, hls_out, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_depth_BRESP", 2, hls_in, 1, "m_axi", "RESP", 1),
	Port_Property("m_axi_depth_BID", 1, hls_in, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_depth_BUSER", 1, hls_in, 1, "m_axi", "USER", 1),
	Port_Property("s_axi_control_AWVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_control_AWREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_control_AWADDR", 8, hls_in, -1, "", "", 1),
	Port_Property("s_axi_control_WVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_control_WREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_control_WDATA", 32, hls_in, -1, "", "", 1),
	Port_Property("s_axi_control_WSTRB", 4, hls_in, -1, "", "", 1),
	Port_Property("s_axi_control_ARVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_control_ARREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_control_ARADDR", 8, hls_in, -1, "", "", 1),
	Port_Property("s_axi_control_RVALID", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_control_RREADY", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_control_RDATA", 32, hls_out, -1, "", "", 1),
	Port_Property("s_axi_control_RRESP", 2, hls_out, -1, "", "", 1),
	Port_Property("s_axi_control_BVALID", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_control_BREADY", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_control_BRESP", 2, hls_out, -1, "", "", 1),
	Port_Property("interrupt", 1, hls_out, -1, "", "", 1),
};
const char* HLS_Design_Meta::dut_name = "integrateKernel";
