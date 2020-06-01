set moduleName integrateKernel
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
set C_modelName {integrateKernel}
set C_modelType { void 0 }
set C_modelArgList {
	{ vol_data int 32 regular {axi_master 2}  }
	{ depth float 32 regular {axi_master 0}  }
	{ size int 96 regular {axi_slave 0}  }
	{ vol_data_offset int 32 regular {axi_slave 0}  }
	{ dim int 96 regular {axi_slave 0}  }
	{ depth_offset int 32 regular {axi_slave 0}  }
	{ depthSize_x int 32 regular {axi_slave 0}  }
	{ depthSize_y int 32 regular {axi_slave 0}  }
	{ invTrack_data int 512 regular {axi_slave 0}  }
	{ K_data int 512 regular {axi_slave 0}  }
	{ mu float 32 regular {axi_slave 0}  }
	{ maxweight float 32 regular {axi_slave 0}  }
	{ start int 32 regular {axi_slave 0}  }
	{ end_r int 32 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "vol_data", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "vol_data.x","cData": "short","bit_use": { "low": 0,"up": 15},"offset": { "type": "dynamic","port_name": "vol_data_offset"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]},{"low":16,"up":31,"cElement": [{"cName": "vol_data.y","cData": "short","bit_use": { "low": 0,"up": 15},"offset": { "type": "dynamic","port_name": "vol_data_offset"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "depth", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "depth","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "depth_offset","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "size", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 96, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "size.x","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]},{"low":32,"up":63,"cElement": [{"cName": "size.y","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]},{"low":64,"up":95,"cElement": [{"cName": "size.z","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":16}, "offset_end" : {"in":31}} , 
 	{ "Name" : "vol_data_offset", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":32}, "offset_end" : {"in":39}} , 
 	{ "Name" : "dim", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 96, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dim.x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]},{"low":32,"up":63,"cElement": [{"cName": "dim.y","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]},{"low":64,"up":95,"cElement": [{"cName": "dim.z","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":40}, "offset_end" : {"in":55}} , 
 	{ "Name" : "depth_offset", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":56}, "offset_end" : {"in":63}} , 
 	{ "Name" : "depthSize_x", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "depthSize_x","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":64}, "offset_end" : {"in":71}} , 
 	{ "Name" : "depthSize_y", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "depthSize_y","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":72}, "offset_end" : {"in":79}} , 
 	{ "Name" : "invTrack_data", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 512, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "invTrack.data.x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]},{"low":32,"up":63,"cElement": [{"cName": "invTrack.data.x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]},{"low":64,"up":95,"cElement": [{"cName": "invTrack.data.x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]},{"low":96,"up":127,"cElement": [{"cName": "invTrack.data.x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]},{"low":128,"up":159,"cElement": [{"cName": "invTrack.data.y","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]},{"low":160,"up":191,"cElement": [{"cName": "invTrack.data.y","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]},{"low":192,"up":223,"cElement": [{"cName": "invTrack.data.y","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]},{"low":224,"up":255,"cElement": [{"cName": "invTrack.data.y","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]},{"low":256,"up":287,"cElement": [{"cName": "invTrack.data.z","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]},{"low":288,"up":319,"cElement": [{"cName": "invTrack.data.z","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]},{"low":320,"up":351,"cElement": [{"cName": "invTrack.data.z","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]},{"low":352,"up":383,"cElement": [{"cName": "invTrack.data.z","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]},{"low":384,"up":415,"cElement": [{"cName": "invTrack.data.w","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]},{"low":416,"up":447,"cElement": [{"cName": "invTrack.data.w","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]},{"low":448,"up":479,"cElement": [{"cName": "invTrack.data.w","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]},{"low":480,"up":511,"cElement": [{"cName": "invTrack.data.w","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}], "offset" : {"in":80}, "offset_end" : {"in":147}} , 
 	{ "Name" : "K_data", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 512, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "K.data.x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]},{"low":32,"up":63,"cElement": [{"cName": "K.data.x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]},{"low":64,"up":95,"cElement": [{"cName": "K.data.x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]},{"low":96,"up":127,"cElement": [{"cName": "K.data.x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]},{"low":128,"up":159,"cElement": [{"cName": "K.data.y","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]},{"low":160,"up":191,"cElement": [{"cName": "K.data.y","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]},{"low":192,"up":223,"cElement": [{"cName": "K.data.y","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]},{"low":224,"up":255,"cElement": [{"cName": "K.data.y","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]},{"low":256,"up":287,"cElement": [{"cName": "K.data.z","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]},{"low":288,"up":319,"cElement": [{"cName": "K.data.z","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]},{"low":320,"up":351,"cElement": [{"cName": "K.data.z","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]},{"low":352,"up":383,"cElement": [{"cName": "K.data.z","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]},{"low":384,"up":415,"cElement": [{"cName": "K.data.w","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]},{"low":416,"up":447,"cElement": [{"cName": "K.data.w","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]},{"low":448,"up":479,"cElement": [{"cName": "K.data.w","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]},{"low":480,"up":511,"cElement": [{"cName": "K.data.w","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}], "offset" : {"in":148}, "offset_end" : {"in":215}} , 
 	{ "Name" : "mu", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "mu","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":216}, "offset_end" : {"in":223}} , 
 	{ "Name" : "maxweight", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "maxweight","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":224}, "offset_end" : {"in":231}} , 
 	{ "Name" : "start", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "start","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":232}, "offset_end" : {"in":239}} , 
 	{ "Name" : "end_r", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "end","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":240}, "offset_end" : {"in":247}} ]}
# RTL Port declarations: 
set portNum 110
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_vol_data_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_vol_data_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_vol_data_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_vol_data_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_vol_data_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_vol_data_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_vol_data_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_vol_data_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_vol_data_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_vol_data_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_vol_data_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_vol_data_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_vol_data_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_vol_data_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_vol_data_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_vol_data_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_vol_data_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_vol_data_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_vol_data_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_vol_data_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_vol_data_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_vol_data_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_vol_data_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_vol_data_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_vol_data_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_vol_data_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_vol_data_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_vol_data_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_vol_data_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_vol_data_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_vol_data_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_vol_data_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_vol_data_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_vol_data_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_vol_data_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_vol_data_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_vol_data_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_vol_data_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_vol_data_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_vol_data_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_vol_data_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_vol_data_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_vol_data_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_vol_data_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_vol_data_BUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_depth_AWVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_depth_AWREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_depth_AWADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_depth_AWID sc_out sc_lv 1 signal 1 } 
	{ m_axi_depth_AWLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_depth_AWSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_depth_AWBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_depth_AWLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_depth_AWCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_depth_AWPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_depth_AWQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_depth_AWREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_depth_AWUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_depth_WVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_depth_WREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_depth_WDATA sc_out sc_lv 32 signal 1 } 
	{ m_axi_depth_WSTRB sc_out sc_lv 4 signal 1 } 
	{ m_axi_depth_WLAST sc_out sc_logic 1 signal 1 } 
	{ m_axi_depth_WID sc_out sc_lv 1 signal 1 } 
	{ m_axi_depth_WUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_depth_ARVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_depth_ARREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_depth_ARADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_depth_ARID sc_out sc_lv 1 signal 1 } 
	{ m_axi_depth_ARLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_depth_ARSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_depth_ARBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_depth_ARLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_depth_ARCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_depth_ARPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_depth_ARQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_depth_ARREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_depth_ARUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_depth_RVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_depth_RREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_depth_RDATA sc_in sc_lv 32 signal 1 } 
	{ m_axi_depth_RLAST sc_in sc_logic 1 signal 1 } 
	{ m_axi_depth_RID sc_in sc_lv 1 signal 1 } 
	{ m_axi_depth_RUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_depth_RRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_depth_BVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_depth_BREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_depth_BRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_depth_BID sc_in sc_lv 1 signal 1 } 
	{ m_axi_depth_BUSER sc_in sc_lv 1 signal 1 } 
	{ s_axi_control_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_AWADDR sc_in sc_lv 8 signal -1 } 
	{ s_axi_control_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_control_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_ARADDR sc_in sc_lv 8 signal -1 } 
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
	{ "name": "s_axi_control_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "control", "role": "AWADDR" },"address":[{"name":"integrateKernel","role":"start","value":"0","valid_bit":"0"},{"name":"integrateKernel","role":"continue","value":"0","valid_bit":"4"},{"name":"integrateKernel","role":"auto_start","value":"0","valid_bit":"7"},{"name":"size","role":"data","value":"16"},{"name":"vol_data_offset","role":"data","value":"32"},{"name":"dim","role":"data","value":"40"},{"name":"depth_offset","role":"data","value":"56"},{"name":"depthSize_x","role":"data","value":"64"},{"name":"depthSize_y","role":"data","value":"72"},{"name":"invTrack_data","role":"data","value":"80"},{"name":"K_data","role":"data","value":"148"},{"name":"mu","role":"data","value":"216"},{"name":"maxweight","role":"data","value":"224"},{"name":"start","role":"data","value":"232"},{"name":"end_r","role":"data","value":"240"}] },
	{ "name": "s_axi_control_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWVALID" } },
	{ "name": "s_axi_control_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWREADY" } },
	{ "name": "s_axi_control_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WVALID" } },
	{ "name": "s_axi_control_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WREADY" } },
	{ "name": "s_axi_control_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "WDATA" } },
	{ "name": "s_axi_control_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "WSTRB" } },
	{ "name": "s_axi_control_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "control", "role": "ARADDR" },"address":[{"name":"integrateKernel","role":"start","value":"0","valid_bit":"0"},{"name":"integrateKernel","role":"done","value":"0","valid_bit":"1"},{"name":"integrateKernel","role":"idle","value":"0","valid_bit":"2"},{"name":"integrateKernel","role":"ready","value":"0","valid_bit":"3"},{"name":"integrateKernel","role":"auto_start","value":"0","valid_bit":"7"}] },
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
 	{ "name": "m_axi_vol_data_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "AWVALID" }} , 
 	{ "name": "m_axi_vol_data_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "AWREADY" }} , 
 	{ "name": "m_axi_vol_data_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "vol_data", "role": "AWADDR" }} , 
 	{ "name": "m_axi_vol_data_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "AWID" }} , 
 	{ "name": "m_axi_vol_data_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "vol_data", "role": "AWLEN" }} , 
 	{ "name": "m_axi_vol_data_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "vol_data", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_vol_data_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "vol_data", "role": "AWBURST" }} , 
 	{ "name": "m_axi_vol_data_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "vol_data", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_vol_data_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "vol_data", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_vol_data_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "vol_data", "role": "AWPROT" }} , 
 	{ "name": "m_axi_vol_data_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "vol_data", "role": "AWQOS" }} , 
 	{ "name": "m_axi_vol_data_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "vol_data", "role": "AWREGION" }} , 
 	{ "name": "m_axi_vol_data_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "AWUSER" }} , 
 	{ "name": "m_axi_vol_data_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "WVALID" }} , 
 	{ "name": "m_axi_vol_data_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "WREADY" }} , 
 	{ "name": "m_axi_vol_data_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "vol_data", "role": "WDATA" }} , 
 	{ "name": "m_axi_vol_data_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "vol_data", "role": "WSTRB" }} , 
 	{ "name": "m_axi_vol_data_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "WLAST" }} , 
 	{ "name": "m_axi_vol_data_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "WID" }} , 
 	{ "name": "m_axi_vol_data_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "WUSER" }} , 
 	{ "name": "m_axi_vol_data_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "ARVALID" }} , 
 	{ "name": "m_axi_vol_data_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "ARREADY" }} , 
 	{ "name": "m_axi_vol_data_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "vol_data", "role": "ARADDR" }} , 
 	{ "name": "m_axi_vol_data_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "ARID" }} , 
 	{ "name": "m_axi_vol_data_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "vol_data", "role": "ARLEN" }} , 
 	{ "name": "m_axi_vol_data_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "vol_data", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_vol_data_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "vol_data", "role": "ARBURST" }} , 
 	{ "name": "m_axi_vol_data_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "vol_data", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_vol_data_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "vol_data", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_vol_data_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "vol_data", "role": "ARPROT" }} , 
 	{ "name": "m_axi_vol_data_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "vol_data", "role": "ARQOS" }} , 
 	{ "name": "m_axi_vol_data_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "vol_data", "role": "ARREGION" }} , 
 	{ "name": "m_axi_vol_data_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "ARUSER" }} , 
 	{ "name": "m_axi_vol_data_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "RVALID" }} , 
 	{ "name": "m_axi_vol_data_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "RREADY" }} , 
 	{ "name": "m_axi_vol_data_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "vol_data", "role": "RDATA" }} , 
 	{ "name": "m_axi_vol_data_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "RLAST" }} , 
 	{ "name": "m_axi_vol_data_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "RID" }} , 
 	{ "name": "m_axi_vol_data_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "RUSER" }} , 
 	{ "name": "m_axi_vol_data_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "vol_data", "role": "RRESP" }} , 
 	{ "name": "m_axi_vol_data_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "BVALID" }} , 
 	{ "name": "m_axi_vol_data_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "BREADY" }} , 
 	{ "name": "m_axi_vol_data_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "vol_data", "role": "BRESP" }} , 
 	{ "name": "m_axi_vol_data_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "BID" }} , 
 	{ "name": "m_axi_vol_data_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "vol_data", "role": "BUSER" }} , 
 	{ "name": "m_axi_depth_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "AWVALID" }} , 
 	{ "name": "m_axi_depth_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "AWREADY" }} , 
 	{ "name": "m_axi_depth_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "depth", "role": "AWADDR" }} , 
 	{ "name": "m_axi_depth_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "AWID" }} , 
 	{ "name": "m_axi_depth_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "depth", "role": "AWLEN" }} , 
 	{ "name": "m_axi_depth_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "depth", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_depth_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "depth", "role": "AWBURST" }} , 
 	{ "name": "m_axi_depth_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "depth", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_depth_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "depth", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_depth_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "depth", "role": "AWPROT" }} , 
 	{ "name": "m_axi_depth_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "depth", "role": "AWQOS" }} , 
 	{ "name": "m_axi_depth_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "depth", "role": "AWREGION" }} , 
 	{ "name": "m_axi_depth_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "AWUSER" }} , 
 	{ "name": "m_axi_depth_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "WVALID" }} , 
 	{ "name": "m_axi_depth_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "WREADY" }} , 
 	{ "name": "m_axi_depth_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "depth", "role": "WDATA" }} , 
 	{ "name": "m_axi_depth_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "depth", "role": "WSTRB" }} , 
 	{ "name": "m_axi_depth_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "WLAST" }} , 
 	{ "name": "m_axi_depth_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "WID" }} , 
 	{ "name": "m_axi_depth_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "WUSER" }} , 
 	{ "name": "m_axi_depth_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "ARVALID" }} , 
 	{ "name": "m_axi_depth_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "ARREADY" }} , 
 	{ "name": "m_axi_depth_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "depth", "role": "ARADDR" }} , 
 	{ "name": "m_axi_depth_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "ARID" }} , 
 	{ "name": "m_axi_depth_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "depth", "role": "ARLEN" }} , 
 	{ "name": "m_axi_depth_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "depth", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_depth_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "depth", "role": "ARBURST" }} , 
 	{ "name": "m_axi_depth_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "depth", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_depth_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "depth", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_depth_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "depth", "role": "ARPROT" }} , 
 	{ "name": "m_axi_depth_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "depth", "role": "ARQOS" }} , 
 	{ "name": "m_axi_depth_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "depth", "role": "ARREGION" }} , 
 	{ "name": "m_axi_depth_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "ARUSER" }} , 
 	{ "name": "m_axi_depth_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "RVALID" }} , 
 	{ "name": "m_axi_depth_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "RREADY" }} , 
 	{ "name": "m_axi_depth_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "depth", "role": "RDATA" }} , 
 	{ "name": "m_axi_depth_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "RLAST" }} , 
 	{ "name": "m_axi_depth_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "RID" }} , 
 	{ "name": "m_axi_depth_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "RUSER" }} , 
 	{ "name": "m_axi_depth_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "depth", "role": "RRESP" }} , 
 	{ "name": "m_axi_depth_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "BVALID" }} , 
 	{ "name": "m_axi_depth_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "BREADY" }} , 
 	{ "name": "m_axi_depth_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "depth", "role": "BRESP" }} , 
 	{ "name": "m_axi_depth_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "BID" }} , 
 	{ "name": "m_axi_depth_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "depth", "role": "BUSER" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "28", "47", "66", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163"],
		"CDFG" : "integrateKernel",
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
			{"Name" : "vol_data", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "vol_data_blk_n_R", "Type" : "RtlSignal"},
					{"Name" : "vol_data_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "vol_data_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "vol_data_blk_n_B", "Type" : "RtlSignal"},
					{"Name" : "vol_data_blk_n_AR", "Type" : "RtlSignal"}]},
			{"Name" : "depth", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "depth_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "depth_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "size", "Type" : "None", "Direction" : "I"},
			{"Name" : "vol_data_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "depth_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "depthSize_x", "Type" : "None", "Direction" : "I"},
			{"Name" : "depthSize_y", "Type" : "None", "Direction" : "I"},
			{"Name" : "invTrack_data", "Type" : "None", "Direction" : "I"},
			{"Name" : "K_data", "Type" : "None", "Direction" : "I"},
			{"Name" : "mu", "Type" : "None", "Direction" : "I"},
			{"Name" : "maxweight", "Type" : "None", "Direction" : "I"},
			{"Name" : "start", "Type" : "None", "Direction" : "I"},
			{"Name" : "end_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_control_s_axi_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_vol_data_m_axi_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_depth_m_axi_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.depth_hls_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.input_data_0_x_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.input_data_1_x_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.input_data_0_y_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.input_data_1_y_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581", "Parent" : "0", "Child" : ["10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27"],
		"CDFG" : "operator_mul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "9", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "M_data_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v_x_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v_y_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v_z_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U1", "Parent" : "9"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U2", "Parent" : "9"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U3", "Parent" : "9"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U4", "Parent" : "9"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U5", "Parent" : "9"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U6", "Parent" : "9"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U7", "Parent" : "9"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U8", "Parent" : "9"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U9", "Parent" : "9"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U10", "Parent" : "9"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U11", "Parent" : "9"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U12", "Parent" : "9"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U13", "Parent" : "9"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U14", "Parent" : "9"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U15", "Parent" : "9"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U16", "Parent" : "9"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U17", "Parent" : "9"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_581.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U18", "Parent" : "9"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589", "Parent" : "0", "Child" : ["29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46"],
		"CDFG" : "operator_mul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "9", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "M_data_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v_x_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v_y_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v_z_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U1", "Parent" : "28"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U2", "Parent" : "28"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U3", "Parent" : "28"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U4", "Parent" : "28"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U5", "Parent" : "28"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U6", "Parent" : "28"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U7", "Parent" : "28"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U8", "Parent" : "28"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U9", "Parent" : "28"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U10", "Parent" : "28"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U11", "Parent" : "28"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U12", "Parent" : "28"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U13", "Parent" : "28"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U14", "Parent" : "28"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U15", "Parent" : "28"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U16", "Parent" : "28"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U17", "Parent" : "28"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_589.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U18", "Parent" : "28"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597", "Parent" : "0", "Child" : ["48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65"],
		"CDFG" : "operator_mul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "9", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "M_data_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v_x_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v_y_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v_z_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U1", "Parent" : "47"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U2", "Parent" : "47"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U3", "Parent" : "47"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U4", "Parent" : "47"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U5", "Parent" : "47"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U6", "Parent" : "47"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U7", "Parent" : "47"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U8", "Parent" : "47"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U9", "Parent" : "47"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U10", "Parent" : "47"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U11", "Parent" : "47"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U12", "Parent" : "47"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U13", "Parent" : "47"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U14", "Parent" : "47"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U15", "Parent" : "47"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U16", "Parent" : "47"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U17", "Parent" : "47"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_597.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U18", "Parent" : "47"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605", "Parent" : "0", "Child" : ["67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84"],
		"CDFG" : "operator_mul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "9", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "M_data_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v_x_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v_y_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v_z_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U1", "Parent" : "66"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U2", "Parent" : "66"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U3", "Parent" : "66"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U4", "Parent" : "66"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U5", "Parent" : "66"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U6", "Parent" : "66"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U7", "Parent" : "66"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U8", "Parent" : "66"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U9", "Parent" : "66"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U10", "Parent" : "66"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U11", "Parent" : "66"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U12", "Parent" : "66"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U13", "Parent" : "66"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U14", "Parent" : "66"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U15", "Parent" : "66"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U16", "Parent" : "66"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U17", "Parent" : "66"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_fu_605.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U18", "Parent" : "66"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U25", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U26", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U27", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U28", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U29", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U30", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fsub_32ns_32ns_32_4_full_dsp_1_U31", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fsub_32ns_32ns_32_4_full_dsp_1_U32", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U33", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U34", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U35", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U36", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U37", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U38", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U39", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U40", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U41", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U42", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U43", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U44", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U45", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U46", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U47", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U48", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U49", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U50", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U51", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U52", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U53", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U54", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U55", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U56", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U57", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U58", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U59", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U60", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U61", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U62", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U63", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U64", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U65", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U66", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U67", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U68", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U69", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U70", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U71", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fdiv_32ns_32ns_32_8_1_U72", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_uitofp_32s_32_3_1_U73", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_uitofp_32s_32_3_1_U74", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_uitofp_32ns_32_3_1_U75", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_sitofp_32ns_32_3_1_U76", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_sitofp_32ns_32_3_1_U77", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_sitofp_32s_32_3_1_U78", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_sitofp_32s_32_3_1_U79", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U80", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U81", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U82", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U83", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U84", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U85", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U86", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U87", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U88", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U89", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U90", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U91", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U92", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U93", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U94", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U95", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U96", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U97", "Parent" : "0"},
	{"ID" : "158", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U98", "Parent" : "0"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U99", "Parent" : "0"},
	{"ID" : "160", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U100", "Parent" : "0"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fcmp_32ns_32ns_1_1_1_U101", "Parent" : "0"},
	{"ID" : "162", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fsqrt_32ns_32ns_32_7_1_U102", "Parent" : "0"},
	{"ID" : "163", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.integrateKernel_fsqrt_32ns_32ns_32_7_1_U103", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	integrateKernel {
		vol_data {Type IO LastRead 33 FirstWrite 34}
		depth {Type I LastRead 9 FirstWrite -1}
		size {Type I LastRead 0 FirstWrite -1}
		vol_data_offset {Type I LastRead 0 FirstWrite -1}
		dim {Type I LastRead 0 FirstWrite -1}
		depth_offset {Type I LastRead 0 FirstWrite -1}
		depthSize_x {Type I LastRead 0 FirstWrite -1}
		depthSize_y {Type I LastRead 0 FirstWrite -1}
		invTrack_data {Type I LastRead 0 FirstWrite -1}
		K_data {Type I LastRead 0 FirstWrite -1}
		mu {Type I LastRead 0 FirstWrite -1}
		maxweight {Type I LastRead 0 FirstWrite -1}
		start {Type I LastRead 0 FirstWrite -1}
		end_r {Type I LastRead 0 FirstWrite -1}}
	operator_mul {
		M_data_read {Type I LastRead 0 FirstWrite -1}
		v_x_read {Type I LastRead 0 FirstWrite -1}
		v_y_read {Type I LastRead 0 FirstWrite -1}
		v_z_read {Type I LastRead 0 FirstWrite -1}}
	operator_mul {
		M_data_read {Type I LastRead 0 FirstWrite -1}
		v_x_read {Type I LastRead 0 FirstWrite -1}
		v_y_read {Type I LastRead 0 FirstWrite -1}
		v_z_read {Type I LastRead 0 FirstWrite -1}}
	operator_mul {
		M_data_read {Type I LastRead 0 FirstWrite -1}
		v_x_read {Type I LastRead 0 FirstWrite -1}
		v_y_read {Type I LastRead 0 FirstWrite -1}
		v_z_read {Type I LastRead 0 FirstWrite -1}}
	operator_mul {
		M_data_read {Type I LastRead 0 FirstWrite -1}
		v_x_read {Type I LastRead 0 FirstWrite -1}
		v_y_read {Type I LastRead 0 FirstWrite -1}
		v_z_read {Type I LastRead 0 FirstWrite -1}}}

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
]}

set Spec2ImplPortList { 
	vol_data { m_axi {  { m_axi_vol_data_AWVALID VALID 1 1 }  { m_axi_vol_data_AWREADY READY 0 1 }  { m_axi_vol_data_AWADDR ADDR 1 32 }  { m_axi_vol_data_AWID ID 1 1 }  { m_axi_vol_data_AWLEN LEN 1 8 }  { m_axi_vol_data_AWSIZE SIZE 1 3 }  { m_axi_vol_data_AWBURST BURST 1 2 }  { m_axi_vol_data_AWLOCK LOCK 1 2 }  { m_axi_vol_data_AWCACHE CACHE 1 4 }  { m_axi_vol_data_AWPROT PROT 1 3 }  { m_axi_vol_data_AWQOS QOS 1 4 }  { m_axi_vol_data_AWREGION REGION 1 4 }  { m_axi_vol_data_AWUSER USER 1 1 }  { m_axi_vol_data_WVALID VALID 1 1 }  { m_axi_vol_data_WREADY READY 0 1 }  { m_axi_vol_data_WDATA DATA 1 32 }  { m_axi_vol_data_WSTRB STRB 1 4 }  { m_axi_vol_data_WLAST LAST 1 1 }  { m_axi_vol_data_WID ID 1 1 }  { m_axi_vol_data_WUSER USER 1 1 }  { m_axi_vol_data_ARVALID VALID 1 1 }  { m_axi_vol_data_ARREADY READY 0 1 }  { m_axi_vol_data_ARADDR ADDR 1 32 }  { m_axi_vol_data_ARID ID 1 1 }  { m_axi_vol_data_ARLEN LEN 1 8 }  { m_axi_vol_data_ARSIZE SIZE 1 3 }  { m_axi_vol_data_ARBURST BURST 1 2 }  { m_axi_vol_data_ARLOCK LOCK 1 2 }  { m_axi_vol_data_ARCACHE CACHE 1 4 }  { m_axi_vol_data_ARPROT PROT 1 3 }  { m_axi_vol_data_ARQOS QOS 1 4 }  { m_axi_vol_data_ARREGION REGION 1 4 }  { m_axi_vol_data_ARUSER USER 1 1 }  { m_axi_vol_data_RVALID VALID 0 1 }  { m_axi_vol_data_RREADY READY 1 1 }  { m_axi_vol_data_RDATA DATA 0 32 }  { m_axi_vol_data_RLAST LAST 0 1 }  { m_axi_vol_data_RID ID 0 1 }  { m_axi_vol_data_RUSER USER 0 1 }  { m_axi_vol_data_RRESP RESP 0 2 }  { m_axi_vol_data_BVALID VALID 0 1 }  { m_axi_vol_data_BREADY READY 1 1 }  { m_axi_vol_data_BRESP RESP 0 2 }  { m_axi_vol_data_BID ID 0 1 }  { m_axi_vol_data_BUSER USER 0 1 } } }
	depth { m_axi {  { m_axi_depth_AWVALID VALID 1 1 }  { m_axi_depth_AWREADY READY 0 1 }  { m_axi_depth_AWADDR ADDR 1 32 }  { m_axi_depth_AWID ID 1 1 }  { m_axi_depth_AWLEN LEN 1 8 }  { m_axi_depth_AWSIZE SIZE 1 3 }  { m_axi_depth_AWBURST BURST 1 2 }  { m_axi_depth_AWLOCK LOCK 1 2 }  { m_axi_depth_AWCACHE CACHE 1 4 }  { m_axi_depth_AWPROT PROT 1 3 }  { m_axi_depth_AWQOS QOS 1 4 }  { m_axi_depth_AWREGION REGION 1 4 }  { m_axi_depth_AWUSER USER 1 1 }  { m_axi_depth_WVALID VALID 1 1 }  { m_axi_depth_WREADY READY 0 1 }  { m_axi_depth_WDATA DATA 1 32 }  { m_axi_depth_WSTRB STRB 1 4 }  { m_axi_depth_WLAST LAST 1 1 }  { m_axi_depth_WID ID 1 1 }  { m_axi_depth_WUSER USER 1 1 }  { m_axi_depth_ARVALID VALID 1 1 }  { m_axi_depth_ARREADY READY 0 1 }  { m_axi_depth_ARADDR ADDR 1 32 }  { m_axi_depth_ARID ID 1 1 }  { m_axi_depth_ARLEN LEN 1 8 }  { m_axi_depth_ARSIZE SIZE 1 3 }  { m_axi_depth_ARBURST BURST 1 2 }  { m_axi_depth_ARLOCK LOCK 1 2 }  { m_axi_depth_ARCACHE CACHE 1 4 }  { m_axi_depth_ARPROT PROT 1 3 }  { m_axi_depth_ARQOS QOS 1 4 }  { m_axi_depth_ARREGION REGION 1 4 }  { m_axi_depth_ARUSER USER 1 1 }  { m_axi_depth_RVALID VALID 0 1 }  { m_axi_depth_RREADY READY 1 1 }  { m_axi_depth_RDATA DATA 0 32 }  { m_axi_depth_RLAST LAST 0 1 }  { m_axi_depth_RID ID 0 1 }  { m_axi_depth_RUSER USER 0 1 }  { m_axi_depth_RRESP RESP 0 2 }  { m_axi_depth_BVALID VALID 0 1 }  { m_axi_depth_BREADY READY 1 1 }  { m_axi_depth_BRESP RESP 0 2 }  { m_axi_depth_BID ID 0 1 }  { m_axi_depth_BUSER USER 0 1 } } }
}

set busDeadlockParameterList { 
	{ vol_data { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 256 MAX_WRITE_BURST_LENGTH 256 } } \
	{ depth { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ vol_data 1 }
	{ depth 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ vol_data 1 }
	{ depth 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
