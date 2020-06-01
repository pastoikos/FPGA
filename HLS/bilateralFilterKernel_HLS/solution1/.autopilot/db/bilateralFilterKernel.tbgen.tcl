set moduleName bilateralFilterKernel
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {bilateralFilterKernel}
set C_modelType { void 0 }
set C_modelArgList {
	{ out_r float 32 regular {axi_master 1}  }
	{ pad_depth float 32 regular {axi_master 0}  }
	{ gaussian float 32 regular {axi_master 0}  }
	{ out_offset int 32 regular {axi_slave 0}  }
	{ pad_depth_offset int 32 regular {axi_slave 0}  }
	{ size_x int 32 regular {axi_slave 0}  }
	{ size_y int 32 unused {axi_slave 0}  }
	{ gaussian_offset int 32 regular {axi_slave 0}  }
	{ e_d float 32 regular {axi_slave 0}  }
	{ r int 32 regular {axi_slave 0}  }
	{ start int 32 regular {axi_slave 0}  }
	{ end_r int 32 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "out_r", "interface" : "axi_master", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "out_offset","bundle": "AXILiteS"},"direction": "WRITEONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "pad_depth", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "pad_depth","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "pad_depth_offset","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "gaussian", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "gaussian","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "gaussian_offset","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "out_offset", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "pad_depth_offset", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "size_x", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "size_x","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":32}, "offset_end" : {"in":39}} , 
 	{ "Name" : "size_y", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "size_y","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":40}, "offset_end" : {"in":47}} , 
 	{ "Name" : "gaussian_offset", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":48}, "offset_end" : {"in":55}} , 
 	{ "Name" : "e_d", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "e_d","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":56}, "offset_end" : {"in":63}} , 
 	{ "Name" : "r", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "r","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":64}, "offset_end" : {"in":71}} , 
 	{ "Name" : "start", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "start","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":72}, "offset_end" : {"in":79}} , 
 	{ "Name" : "end_r", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "end","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":80}, "offset_end" : {"in":87}} ]}
# RTL Port declarations: 
set portNum 155
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_out_r_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_out_r_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_out_r_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_out_r_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_out_r_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_out_r_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_out_r_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_out_r_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_out_r_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_out_r_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_out_r_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_out_r_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_out_r_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_out_r_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_out_r_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_out_r_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_out_r_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_out_r_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_out_r_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_out_r_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_out_r_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_out_r_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_out_r_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_out_r_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_out_r_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_out_r_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_out_r_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_out_r_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_out_r_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_out_r_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_out_r_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_out_r_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_out_r_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_out_r_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_out_r_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_out_r_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_out_r_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_out_r_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_out_r_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_out_r_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_out_r_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_out_r_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_out_r_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_out_r_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_out_r_BUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_pad_depth_AWVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_pad_depth_AWREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_pad_depth_AWADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_pad_depth_AWID sc_out sc_lv 1 signal 1 } 
	{ m_axi_pad_depth_AWLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_pad_depth_AWSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_pad_depth_AWBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_pad_depth_AWLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_pad_depth_AWCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_pad_depth_AWPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_pad_depth_AWQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_pad_depth_AWREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_pad_depth_AWUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_pad_depth_WVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_pad_depth_WREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_pad_depth_WDATA sc_out sc_lv 32 signal 1 } 
	{ m_axi_pad_depth_WSTRB sc_out sc_lv 4 signal 1 } 
	{ m_axi_pad_depth_WLAST sc_out sc_logic 1 signal 1 } 
	{ m_axi_pad_depth_WID sc_out sc_lv 1 signal 1 } 
	{ m_axi_pad_depth_WUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_pad_depth_ARVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_pad_depth_ARREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_pad_depth_ARADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_pad_depth_ARID sc_out sc_lv 1 signal 1 } 
	{ m_axi_pad_depth_ARLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_pad_depth_ARSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_pad_depth_ARBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_pad_depth_ARLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_pad_depth_ARCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_pad_depth_ARPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_pad_depth_ARQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_pad_depth_ARREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_pad_depth_ARUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_pad_depth_RVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_pad_depth_RREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_pad_depth_RDATA sc_in sc_lv 32 signal 1 } 
	{ m_axi_pad_depth_RLAST sc_in sc_logic 1 signal 1 } 
	{ m_axi_pad_depth_RID sc_in sc_lv 1 signal 1 } 
	{ m_axi_pad_depth_RUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_pad_depth_RRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_pad_depth_BVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_pad_depth_BREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_pad_depth_BRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_pad_depth_BID sc_in sc_lv 1 signal 1 } 
	{ m_axi_pad_depth_BUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_gaussian_AWVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_gaussian_AWREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_gaussian_AWADDR sc_out sc_lv 32 signal 2 } 
	{ m_axi_gaussian_AWID sc_out sc_lv 1 signal 2 } 
	{ m_axi_gaussian_AWLEN sc_out sc_lv 8 signal 2 } 
	{ m_axi_gaussian_AWSIZE sc_out sc_lv 3 signal 2 } 
	{ m_axi_gaussian_AWBURST sc_out sc_lv 2 signal 2 } 
	{ m_axi_gaussian_AWLOCK sc_out sc_lv 2 signal 2 } 
	{ m_axi_gaussian_AWCACHE sc_out sc_lv 4 signal 2 } 
	{ m_axi_gaussian_AWPROT sc_out sc_lv 3 signal 2 } 
	{ m_axi_gaussian_AWQOS sc_out sc_lv 4 signal 2 } 
	{ m_axi_gaussian_AWREGION sc_out sc_lv 4 signal 2 } 
	{ m_axi_gaussian_AWUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_gaussian_WVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_gaussian_WREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_gaussian_WDATA sc_out sc_lv 32 signal 2 } 
	{ m_axi_gaussian_WSTRB sc_out sc_lv 4 signal 2 } 
	{ m_axi_gaussian_WLAST sc_out sc_logic 1 signal 2 } 
	{ m_axi_gaussian_WID sc_out sc_lv 1 signal 2 } 
	{ m_axi_gaussian_WUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_gaussian_ARVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_gaussian_ARREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_gaussian_ARADDR sc_out sc_lv 32 signal 2 } 
	{ m_axi_gaussian_ARID sc_out sc_lv 1 signal 2 } 
	{ m_axi_gaussian_ARLEN sc_out sc_lv 8 signal 2 } 
	{ m_axi_gaussian_ARSIZE sc_out sc_lv 3 signal 2 } 
	{ m_axi_gaussian_ARBURST sc_out sc_lv 2 signal 2 } 
	{ m_axi_gaussian_ARLOCK sc_out sc_lv 2 signal 2 } 
	{ m_axi_gaussian_ARCACHE sc_out sc_lv 4 signal 2 } 
	{ m_axi_gaussian_ARPROT sc_out sc_lv 3 signal 2 } 
	{ m_axi_gaussian_ARQOS sc_out sc_lv 4 signal 2 } 
	{ m_axi_gaussian_ARREGION sc_out sc_lv 4 signal 2 } 
	{ m_axi_gaussian_ARUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_gaussian_RVALID sc_in sc_logic 1 signal 2 } 
	{ m_axi_gaussian_RREADY sc_out sc_logic 1 signal 2 } 
	{ m_axi_gaussian_RDATA sc_in sc_lv 32 signal 2 } 
	{ m_axi_gaussian_RLAST sc_in sc_logic 1 signal 2 } 
	{ m_axi_gaussian_RID sc_in sc_lv 1 signal 2 } 
	{ m_axi_gaussian_RUSER sc_in sc_lv 1 signal 2 } 
	{ m_axi_gaussian_RRESP sc_in sc_lv 2 signal 2 } 
	{ m_axi_gaussian_BVALID sc_in sc_logic 1 signal 2 } 
	{ m_axi_gaussian_BREADY sc_out sc_logic 1 signal 2 } 
	{ m_axi_gaussian_BRESP sc_in sc_lv 2 signal 2 } 
	{ m_axi_gaussian_BID sc_in sc_lv 1 signal 2 } 
	{ m_axi_gaussian_BUSER sc_in sc_lv 1 signal 2 } 
	{ s_axi_control_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_AWADDR sc_in sc_lv 7 signal -1 } 
	{ s_axi_control_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_control_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_ARADDR sc_in sc_lv 7 signal -1 } 
	{ s_axi_control_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_control_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_control_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_control_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "control", "role": "AWADDR" },"address":[{"name":"bilateralFilterKernel","role":"start","value":"0","valid_bit":"0"},{"name":"bilateralFilterKernel","role":"continue","value":"0","valid_bit":"4"},{"name":"bilateralFilterKernel","role":"auto_start","value":"0","valid_bit":"7"},{"name":"out_offset","role":"data","value":"16"},{"name":"pad_depth_offset","role":"data","value":"24"},{"name":"size_x","role":"data","value":"32"},{"name":"size_y","role":"data","value":"40"},{"name":"gaussian_offset","role":"data","value":"48"},{"name":"e_d","role":"data","value":"56"},{"name":"r","role":"data","value":"64"},{"name":"start","role":"data","value":"72"},{"name":"end_r","role":"data","value":"80"}] },
	{ "name": "s_axi_control_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWVALID" } },
	{ "name": "s_axi_control_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWREADY" } },
	{ "name": "s_axi_control_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WVALID" } },
	{ "name": "s_axi_control_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WREADY" } },
	{ "name": "s_axi_control_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "WDATA" } },
	{ "name": "s_axi_control_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "WSTRB" } },
	{ "name": "s_axi_control_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "control", "role": "ARADDR" },"address":[{"name":"bilateralFilterKernel","role":"start","value":"0","valid_bit":"0"},{"name":"bilateralFilterKernel","role":"done","value":"0","valid_bit":"1"},{"name":"bilateralFilterKernel","role":"idle","value":"0","valid_bit":"2"},{"name":"bilateralFilterKernel","role":"ready","value":"0","valid_bit":"3"},{"name":"bilateralFilterKernel","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_control_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARVALID" } },
	{ "name": "s_axi_control_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARREADY" } },
	{ "name": "s_axi_control_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RVALID" } },
	{ "name": "s_axi_control_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RREADY" } },
	{ "name": "s_axi_control_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "RDATA" } },
	{ "name": "s_axi_control_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "RRESP" } },
	{ "name": "s_axi_control_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BVALID" } },
	{ "name": "s_axi_control_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BREADY" } },
	{ "name": "s_axi_control_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "m_axi_out_r_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "AWVALID" }} , 
 	{ "name": "m_axi_out_r_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "AWREADY" }} , 
 	{ "name": "m_axi_out_r_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_r", "role": "AWADDR" }} , 
 	{ "name": "m_axi_out_r_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "AWID" }} , 
 	{ "name": "m_axi_out_r_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "out_r", "role": "AWLEN" }} , 
 	{ "name": "m_axi_out_r_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "out_r", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_out_r_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "out_r", "role": "AWBURST" }} , 
 	{ "name": "m_axi_out_r_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "out_r", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_out_r_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_r", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_out_r_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "out_r", "role": "AWPROT" }} , 
 	{ "name": "m_axi_out_r_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_r", "role": "AWQOS" }} , 
 	{ "name": "m_axi_out_r_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_r", "role": "AWREGION" }} , 
 	{ "name": "m_axi_out_r_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "AWUSER" }} , 
 	{ "name": "m_axi_out_r_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "WVALID" }} , 
 	{ "name": "m_axi_out_r_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "WREADY" }} , 
 	{ "name": "m_axi_out_r_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_r", "role": "WDATA" }} , 
 	{ "name": "m_axi_out_r_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_r", "role": "WSTRB" }} , 
 	{ "name": "m_axi_out_r_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "WLAST" }} , 
 	{ "name": "m_axi_out_r_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "WID" }} , 
 	{ "name": "m_axi_out_r_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "WUSER" }} , 
 	{ "name": "m_axi_out_r_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "ARVALID" }} , 
 	{ "name": "m_axi_out_r_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "ARREADY" }} , 
 	{ "name": "m_axi_out_r_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_r", "role": "ARADDR" }} , 
 	{ "name": "m_axi_out_r_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "ARID" }} , 
 	{ "name": "m_axi_out_r_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "out_r", "role": "ARLEN" }} , 
 	{ "name": "m_axi_out_r_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "out_r", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_out_r_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "out_r", "role": "ARBURST" }} , 
 	{ "name": "m_axi_out_r_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "out_r", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_out_r_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_r", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_out_r_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "out_r", "role": "ARPROT" }} , 
 	{ "name": "m_axi_out_r_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_r", "role": "ARQOS" }} , 
 	{ "name": "m_axi_out_r_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_r", "role": "ARREGION" }} , 
 	{ "name": "m_axi_out_r_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "ARUSER" }} , 
 	{ "name": "m_axi_out_r_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "RVALID" }} , 
 	{ "name": "m_axi_out_r_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "RREADY" }} , 
 	{ "name": "m_axi_out_r_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_r", "role": "RDATA" }} , 
 	{ "name": "m_axi_out_r_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "RLAST" }} , 
 	{ "name": "m_axi_out_r_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "RID" }} , 
 	{ "name": "m_axi_out_r_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "RUSER" }} , 
 	{ "name": "m_axi_out_r_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "out_r", "role": "RRESP" }} , 
 	{ "name": "m_axi_out_r_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "BVALID" }} , 
 	{ "name": "m_axi_out_r_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "BREADY" }} , 
 	{ "name": "m_axi_out_r_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "out_r", "role": "BRESP" }} , 
 	{ "name": "m_axi_out_r_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "BID" }} , 
 	{ "name": "m_axi_out_r_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "BUSER" }} , 
 	{ "name": "m_axi_pad_depth_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "AWVALID" }} , 
 	{ "name": "m_axi_pad_depth_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "AWREADY" }} , 
 	{ "name": "m_axi_pad_depth_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "pad_depth", "role": "AWADDR" }} , 
 	{ "name": "m_axi_pad_depth_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "AWID" }} , 
 	{ "name": "m_axi_pad_depth_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "pad_depth", "role": "AWLEN" }} , 
 	{ "name": "m_axi_pad_depth_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "pad_depth", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_pad_depth_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pad_depth", "role": "AWBURST" }} , 
 	{ "name": "m_axi_pad_depth_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pad_depth", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_pad_depth_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pad_depth", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_pad_depth_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "pad_depth", "role": "AWPROT" }} , 
 	{ "name": "m_axi_pad_depth_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pad_depth", "role": "AWQOS" }} , 
 	{ "name": "m_axi_pad_depth_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pad_depth", "role": "AWREGION" }} , 
 	{ "name": "m_axi_pad_depth_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "AWUSER" }} , 
 	{ "name": "m_axi_pad_depth_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "WVALID" }} , 
 	{ "name": "m_axi_pad_depth_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "WREADY" }} , 
 	{ "name": "m_axi_pad_depth_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "pad_depth", "role": "WDATA" }} , 
 	{ "name": "m_axi_pad_depth_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pad_depth", "role": "WSTRB" }} , 
 	{ "name": "m_axi_pad_depth_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "WLAST" }} , 
 	{ "name": "m_axi_pad_depth_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "WID" }} , 
 	{ "name": "m_axi_pad_depth_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "WUSER" }} , 
 	{ "name": "m_axi_pad_depth_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "ARVALID" }} , 
 	{ "name": "m_axi_pad_depth_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "ARREADY" }} , 
 	{ "name": "m_axi_pad_depth_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "pad_depth", "role": "ARADDR" }} , 
 	{ "name": "m_axi_pad_depth_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "ARID" }} , 
 	{ "name": "m_axi_pad_depth_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "pad_depth", "role": "ARLEN" }} , 
 	{ "name": "m_axi_pad_depth_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "pad_depth", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_pad_depth_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pad_depth", "role": "ARBURST" }} , 
 	{ "name": "m_axi_pad_depth_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pad_depth", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_pad_depth_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pad_depth", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_pad_depth_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "pad_depth", "role": "ARPROT" }} , 
 	{ "name": "m_axi_pad_depth_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pad_depth", "role": "ARQOS" }} , 
 	{ "name": "m_axi_pad_depth_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pad_depth", "role": "ARREGION" }} , 
 	{ "name": "m_axi_pad_depth_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "ARUSER" }} , 
 	{ "name": "m_axi_pad_depth_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "RVALID" }} , 
 	{ "name": "m_axi_pad_depth_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "RREADY" }} , 
 	{ "name": "m_axi_pad_depth_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "pad_depth", "role": "RDATA" }} , 
 	{ "name": "m_axi_pad_depth_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "RLAST" }} , 
 	{ "name": "m_axi_pad_depth_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "RID" }} , 
 	{ "name": "m_axi_pad_depth_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "RUSER" }} , 
 	{ "name": "m_axi_pad_depth_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pad_depth", "role": "RRESP" }} , 
 	{ "name": "m_axi_pad_depth_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "BVALID" }} , 
 	{ "name": "m_axi_pad_depth_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "BREADY" }} , 
 	{ "name": "m_axi_pad_depth_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pad_depth", "role": "BRESP" }} , 
 	{ "name": "m_axi_pad_depth_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "BID" }} , 
 	{ "name": "m_axi_pad_depth_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pad_depth", "role": "BUSER" }} , 
 	{ "name": "m_axi_gaussian_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "AWVALID" }} , 
 	{ "name": "m_axi_gaussian_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "AWREADY" }} , 
 	{ "name": "m_axi_gaussian_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "gaussian", "role": "AWADDR" }} , 
 	{ "name": "m_axi_gaussian_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "AWID" }} , 
 	{ "name": "m_axi_gaussian_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "gaussian", "role": "AWLEN" }} , 
 	{ "name": "m_axi_gaussian_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gaussian", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_gaussian_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gaussian", "role": "AWBURST" }} , 
 	{ "name": "m_axi_gaussian_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gaussian", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_gaussian_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gaussian", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_gaussian_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gaussian", "role": "AWPROT" }} , 
 	{ "name": "m_axi_gaussian_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gaussian", "role": "AWQOS" }} , 
 	{ "name": "m_axi_gaussian_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gaussian", "role": "AWREGION" }} , 
 	{ "name": "m_axi_gaussian_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "AWUSER" }} , 
 	{ "name": "m_axi_gaussian_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "WVALID" }} , 
 	{ "name": "m_axi_gaussian_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "WREADY" }} , 
 	{ "name": "m_axi_gaussian_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "gaussian", "role": "WDATA" }} , 
 	{ "name": "m_axi_gaussian_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gaussian", "role": "WSTRB" }} , 
 	{ "name": "m_axi_gaussian_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "WLAST" }} , 
 	{ "name": "m_axi_gaussian_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "WID" }} , 
 	{ "name": "m_axi_gaussian_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "WUSER" }} , 
 	{ "name": "m_axi_gaussian_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "ARVALID" }} , 
 	{ "name": "m_axi_gaussian_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "ARREADY" }} , 
 	{ "name": "m_axi_gaussian_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "gaussian", "role": "ARADDR" }} , 
 	{ "name": "m_axi_gaussian_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "ARID" }} , 
 	{ "name": "m_axi_gaussian_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "gaussian", "role": "ARLEN" }} , 
 	{ "name": "m_axi_gaussian_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gaussian", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_gaussian_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gaussian", "role": "ARBURST" }} , 
 	{ "name": "m_axi_gaussian_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gaussian", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_gaussian_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gaussian", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_gaussian_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gaussian", "role": "ARPROT" }} , 
 	{ "name": "m_axi_gaussian_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gaussian", "role": "ARQOS" }} , 
 	{ "name": "m_axi_gaussian_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gaussian", "role": "ARREGION" }} , 
 	{ "name": "m_axi_gaussian_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "ARUSER" }} , 
 	{ "name": "m_axi_gaussian_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "RVALID" }} , 
 	{ "name": "m_axi_gaussian_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "RREADY" }} , 
 	{ "name": "m_axi_gaussian_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "gaussian", "role": "RDATA" }} , 
 	{ "name": "m_axi_gaussian_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "RLAST" }} , 
 	{ "name": "m_axi_gaussian_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "RID" }} , 
 	{ "name": "m_axi_gaussian_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "RUSER" }} , 
 	{ "name": "m_axi_gaussian_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gaussian", "role": "RRESP" }} , 
 	{ "name": "m_axi_gaussian_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "BVALID" }} , 
 	{ "name": "m_axi_gaussian_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "BREADY" }} , 
 	{ "name": "m_axi_gaussian_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gaussian", "role": "BRESP" }} , 
 	{ "name": "m_axi_gaussian_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "BID" }} , 
 	{ "name": "m_axi_gaussian_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gaussian", "role": "BUSER" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97"],
		"CDFG" : "bilateralFilterKernel",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_r", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "out_r_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "out_r_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "out_r_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "pad_depth", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "pad_depth_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "pad_depth_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "gaussian", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "gaussian_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "gaussian_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "out_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "pad_depth_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "size_x", "Type" : "None", "Direction" : "I"},
			{"Name" : "size_y", "Type" : "None", "Direction" : "I"},
			{"Name" : "gaussian_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "e_d", "Type" : "None", "Direction" : "I"},
			{"Name" : "r", "Type" : "None", "Direction" : "I"},
			{"Name" : "start", "Type" : "None", "Direction" : "I"},
			{"Name" : "end_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_control_s_axi_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_out_r_m_axi_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_pad_depth_m_axi_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_gaussian_m_axi_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_array_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pad_depth_array_1_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pad_depth_array_2_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pad_depth_array_3_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pad_depth_array_4_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pad_depth_array_5_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gaussian_array_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fsub_32ns_32ns_32_10_full_dsp_1_U1", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fsub_32ns_32ns_32_10_full_dsp_1_U2", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fsub_32ns_32ns_32_10_full_dsp_1_U3", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fsub_32ns_32ns_32_10_full_dsp_1_U4", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fsub_32ns_32ns_32_10_full_dsp_1_U5", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fsub_32ns_32ns_32_10_full_dsp_1_U6", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fsub_32ns_32ns_32_10_full_dsp_1_U7", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_faddfsub_32ns_32ns_32_10_full_dsp_1_U8", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_faddfsub_32ns_32ns_32_10_full_dsp_1_U9", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fadd_32ns_32ns_32_10_full_dsp_1_U10", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fadd_32ns_32ns_32_10_full_dsp_1_U11", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fadd_32ns_32ns_32_10_full_dsp_1_U12", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fadd_32ns_32ns_32_10_full_dsp_1_U13", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fadd_32ns_32ns_32_10_full_dsp_1_U14", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fadd_32ns_32ns_32_10_full_dsp_1_U15", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fadd_32ns_32ns_32_10_full_dsp_1_U16", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fadd_32ns_32ns_32_10_full_dsp_1_U17", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fadd_32ns_32ns_32_10_full_dsp_1_U18", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fadd_32ns_32ns_32_10_full_dsp_1_U19", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fadd_32ns_32ns_32_10_full_dsp_1_U20", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fadd_32ns_32ns_32_10_full_dsp_1_U21", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fadd_32ns_32ns_32_10_full_dsp_1_U22", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fadd_32ns_32ns_32_10_full_dsp_1_U23", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fadd_32ns_32ns_32_10_full_dsp_1_U24", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U25", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U26", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U27", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U28", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U29", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U30", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U31", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U32", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U33", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U34", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U35", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U36", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U37", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U38", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U39", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U40", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U41", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U42", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U43", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U44", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U45", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U46", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U47", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U48", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U49", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U50", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U51", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U52", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U53", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U54", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U55", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U56", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fmul_32ns_32ns_32_6_max_dsp_1_U57", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fdiv_32ns_32ns_32_30_1_U58", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fdiv_32ns_32ns_32_30_1_U59", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fdiv_32ns_32ns_32_30_1_U60", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fdiv_32ns_32ns_32_30_1_U61", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fdiv_32ns_32ns_32_30_1_U62", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fdiv_32ns_32ns_32_30_1_U63", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fdiv_32ns_32ns_32_30_1_U64", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fdiv_32ns_32ns_32_30_1_U65", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fdiv_32ns_32ns_32_30_1_U66", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fcmp_32ns_32ns_1_3_1_U67", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fcmp_32ns_32ns_1_3_1_U68", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fcmp_32ns_32ns_1_3_1_U69", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fcmp_32ns_32ns_1_3_1_U70", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fcmp_32ns_32ns_1_3_1_U71", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fcmp_32ns_32ns_1_3_1_U72", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fcmp_32ns_32ns_1_3_1_U73", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fcmp_32ns_32ns_1_3_1_U74", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fcmp_32ns_32ns_1_3_1_U75", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fexp_32ns_32ns_32_18_full_dsp_1_U76", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fexp_32ns_32ns_32_18_full_dsp_1_U77", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fexp_32ns_32ns_32_18_full_dsp_1_U78", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fexp_32ns_32ns_32_18_full_dsp_1_U79", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fexp_32ns_32ns_32_18_full_dsp_1_U80", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fexp_32ns_32ns_32_18_full_dsp_1_U81", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fexp_32ns_32ns_32_18_full_dsp_1_U82", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fexp_32ns_32ns_32_18_full_dsp_1_U83", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_fexp_32ns_32ns_32_18_full_dsp_1_U84", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_mul_32s_32s_32_2_1_U85", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bilateralFilterKernel_mul_32s_32s_32_2_1_U86", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	bilateralFilterKernel {
		out_r {Type O LastRead 96 FirstWrite 97}
		pad_depth {Type I LastRead 91 FirstWrite -1}
		gaussian {Type I LastRead 14 FirstWrite -1}
		out_offset {Type I LastRead 0 FirstWrite -1}
		pad_depth_offset {Type I LastRead 0 FirstWrite -1}
		size_x {Type I LastRead 0 FirstWrite -1}
		size_y {Type I LastRead -1 FirstWrite -1}
		gaussian_offset {Type I LastRead 0 FirstWrite -1}
		e_d {Type I LastRead 0 FirstWrite -1}
		r {Type I LastRead 0 FirstWrite -1}
		start {Type I LastRead 0 FirstWrite -1}
		end_r {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
	{"Pipeline" : "4", "EnableSignal" : "ap_enable_pp4"}
	{"Pipeline" : "5", "EnableSignal" : "ap_enable_pp5"}
	{"Pipeline" : "6", "EnableSignal" : "ap_enable_pp6"}
	{"Pipeline" : "7", "EnableSignal" : "ap_enable_pp7"}
]}

set Spec2ImplPortList { 
	out_r { m_axi {  { m_axi_out_r_AWVALID VALID 1 1 }  { m_axi_out_r_AWREADY READY 0 1 }  { m_axi_out_r_AWADDR ADDR 1 32 }  { m_axi_out_r_AWID ID 1 1 }  { m_axi_out_r_AWLEN LEN 1 8 }  { m_axi_out_r_AWSIZE SIZE 1 3 }  { m_axi_out_r_AWBURST BURST 1 2 }  { m_axi_out_r_AWLOCK LOCK 1 2 }  { m_axi_out_r_AWCACHE CACHE 1 4 }  { m_axi_out_r_AWPROT PROT 1 3 }  { m_axi_out_r_AWQOS QOS 1 4 }  { m_axi_out_r_AWREGION REGION 1 4 }  { m_axi_out_r_AWUSER USER 1 1 }  { m_axi_out_r_WVALID VALID 1 1 }  { m_axi_out_r_WREADY READY 0 1 }  { m_axi_out_r_WDATA DATA 1 32 }  { m_axi_out_r_WSTRB STRB 1 4 }  { m_axi_out_r_WLAST LAST 1 1 }  { m_axi_out_r_WID ID 1 1 }  { m_axi_out_r_WUSER USER 1 1 }  { m_axi_out_r_ARVALID VALID 1 1 }  { m_axi_out_r_ARREADY READY 0 1 }  { m_axi_out_r_ARADDR ADDR 1 32 }  { m_axi_out_r_ARID ID 1 1 }  { m_axi_out_r_ARLEN LEN 1 8 }  { m_axi_out_r_ARSIZE SIZE 1 3 }  { m_axi_out_r_ARBURST BURST 1 2 }  { m_axi_out_r_ARLOCK LOCK 1 2 }  { m_axi_out_r_ARCACHE CACHE 1 4 }  { m_axi_out_r_ARPROT PROT 1 3 }  { m_axi_out_r_ARQOS QOS 1 4 }  { m_axi_out_r_ARREGION REGION 1 4 }  { m_axi_out_r_ARUSER USER 1 1 }  { m_axi_out_r_RVALID VALID 0 1 }  { m_axi_out_r_RREADY READY 1 1 }  { m_axi_out_r_RDATA DATA 0 32 }  { m_axi_out_r_RLAST LAST 0 1 }  { m_axi_out_r_RID ID 0 1 }  { m_axi_out_r_RUSER USER 0 1 }  { m_axi_out_r_RRESP RESP 0 2 }  { m_axi_out_r_BVALID VALID 0 1 }  { m_axi_out_r_BREADY READY 1 1 }  { m_axi_out_r_BRESP RESP 0 2 }  { m_axi_out_r_BID ID 0 1 }  { m_axi_out_r_BUSER USER 0 1 } } }
	pad_depth { m_axi {  { m_axi_pad_depth_AWVALID VALID 1 1 }  { m_axi_pad_depth_AWREADY READY 0 1 }  { m_axi_pad_depth_AWADDR ADDR 1 32 }  { m_axi_pad_depth_AWID ID 1 1 }  { m_axi_pad_depth_AWLEN LEN 1 8 }  { m_axi_pad_depth_AWSIZE SIZE 1 3 }  { m_axi_pad_depth_AWBURST BURST 1 2 }  { m_axi_pad_depth_AWLOCK LOCK 1 2 }  { m_axi_pad_depth_AWCACHE CACHE 1 4 }  { m_axi_pad_depth_AWPROT PROT 1 3 }  { m_axi_pad_depth_AWQOS QOS 1 4 }  { m_axi_pad_depth_AWREGION REGION 1 4 }  { m_axi_pad_depth_AWUSER USER 1 1 }  { m_axi_pad_depth_WVALID VALID 1 1 }  { m_axi_pad_depth_WREADY READY 0 1 }  { m_axi_pad_depth_WDATA DATA 1 32 }  { m_axi_pad_depth_WSTRB STRB 1 4 }  { m_axi_pad_depth_WLAST LAST 1 1 }  { m_axi_pad_depth_WID ID 1 1 }  { m_axi_pad_depth_WUSER USER 1 1 }  { m_axi_pad_depth_ARVALID VALID 1 1 }  { m_axi_pad_depth_ARREADY READY 0 1 }  { m_axi_pad_depth_ARADDR ADDR 1 32 }  { m_axi_pad_depth_ARID ID 1 1 }  { m_axi_pad_depth_ARLEN LEN 1 8 }  { m_axi_pad_depth_ARSIZE SIZE 1 3 }  { m_axi_pad_depth_ARBURST BURST 1 2 }  { m_axi_pad_depth_ARLOCK LOCK 1 2 }  { m_axi_pad_depth_ARCACHE CACHE 1 4 }  { m_axi_pad_depth_ARPROT PROT 1 3 }  { m_axi_pad_depth_ARQOS QOS 1 4 }  { m_axi_pad_depth_ARREGION REGION 1 4 }  { m_axi_pad_depth_ARUSER USER 1 1 }  { m_axi_pad_depth_RVALID VALID 0 1 }  { m_axi_pad_depth_RREADY READY 1 1 }  { m_axi_pad_depth_RDATA DATA 0 32 }  { m_axi_pad_depth_RLAST LAST 0 1 }  { m_axi_pad_depth_RID ID 0 1 }  { m_axi_pad_depth_RUSER USER 0 1 }  { m_axi_pad_depth_RRESP RESP 0 2 }  { m_axi_pad_depth_BVALID VALID 0 1 }  { m_axi_pad_depth_BREADY READY 1 1 }  { m_axi_pad_depth_BRESP RESP 0 2 }  { m_axi_pad_depth_BID ID 0 1 }  { m_axi_pad_depth_BUSER USER 0 1 } } }
	gaussian { m_axi {  { m_axi_gaussian_AWVALID VALID 1 1 }  { m_axi_gaussian_AWREADY READY 0 1 }  { m_axi_gaussian_AWADDR ADDR 1 32 }  { m_axi_gaussian_AWID ID 1 1 }  { m_axi_gaussian_AWLEN LEN 1 8 }  { m_axi_gaussian_AWSIZE SIZE 1 3 }  { m_axi_gaussian_AWBURST BURST 1 2 }  { m_axi_gaussian_AWLOCK LOCK 1 2 }  { m_axi_gaussian_AWCACHE CACHE 1 4 }  { m_axi_gaussian_AWPROT PROT 1 3 }  { m_axi_gaussian_AWQOS QOS 1 4 }  { m_axi_gaussian_AWREGION REGION 1 4 }  { m_axi_gaussian_AWUSER USER 1 1 }  { m_axi_gaussian_WVALID VALID 1 1 }  { m_axi_gaussian_WREADY READY 0 1 }  { m_axi_gaussian_WDATA DATA 1 32 }  { m_axi_gaussian_WSTRB STRB 1 4 }  { m_axi_gaussian_WLAST LAST 1 1 }  { m_axi_gaussian_WID ID 1 1 }  { m_axi_gaussian_WUSER USER 1 1 }  { m_axi_gaussian_ARVALID VALID 1 1 }  { m_axi_gaussian_ARREADY READY 0 1 }  { m_axi_gaussian_ARADDR ADDR 1 32 }  { m_axi_gaussian_ARID ID 1 1 }  { m_axi_gaussian_ARLEN LEN 1 8 }  { m_axi_gaussian_ARSIZE SIZE 1 3 }  { m_axi_gaussian_ARBURST BURST 1 2 }  { m_axi_gaussian_ARLOCK LOCK 1 2 }  { m_axi_gaussian_ARCACHE CACHE 1 4 }  { m_axi_gaussian_ARPROT PROT 1 3 }  { m_axi_gaussian_ARQOS QOS 1 4 }  { m_axi_gaussian_ARREGION REGION 1 4 }  { m_axi_gaussian_ARUSER USER 1 1 }  { m_axi_gaussian_RVALID VALID 0 1 }  { m_axi_gaussian_RREADY READY 1 1 }  { m_axi_gaussian_RDATA DATA 0 32 }  { m_axi_gaussian_RLAST LAST 0 1 }  { m_axi_gaussian_RID ID 0 1 }  { m_axi_gaussian_RUSER USER 0 1 }  { m_axi_gaussian_RRESP RESP 0 2 }  { m_axi_gaussian_BVALID VALID 0 1 }  { m_axi_gaussian_BREADY READY 1 1 }  { m_axi_gaussian_BRESP RESP 0 2 }  { m_axi_gaussian_BID ID 0 1 }  { m_axi_gaussian_BUSER USER 0 1 } } }
}

set busDeadlockParameterList { 
	{ out_r { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 256 MAX_WRITE_BURST_LENGTH 256 } } \
	{ pad_depth { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 256 MAX_WRITE_BURST_LENGTH 256 } } \
	{ gaussian { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ out_r 1 }
	{ pad_depth 1 }
	{ gaussian 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ out_r 1 }
	{ pad_depth 1 }
	{ gaussian 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
