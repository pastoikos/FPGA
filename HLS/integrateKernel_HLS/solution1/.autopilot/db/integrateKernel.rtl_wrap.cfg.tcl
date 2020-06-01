set lang "C++"
set moduleName "integrateKernel"
set moduleIsExternC "0"
set rawDecl ""
set globalVariable ""
set PortList ""
set PortName0 "size"
set BitWidth0 "96"
set ArrayOpt0 ""
set Const0 "0"
set Volatile0 "0"
set Pointer0 "0"
set Reference0 "0"
set Dims0 [list 0]
set Interface0 "wire"
set structMem0 ""
set PortName00 "x"
set BitWidth00 "32"
set ArrayOpt00 ""
set Const00 "0"
set Volatile00 "0"
set Pointer00 "0"
set Reference00 "0"
set Dims00 [list 0]
set Interface00 "wire"
set DataType00 "unsigned int"
set Port00 [list $PortName00 $Interface00 $DataType00 $Pointer00 $Dims00 $Const00 $Volatile00 $ArrayOpt00]
lappend structMem0 $Port00
set PortName01 "y"
set BitWidth01 "32"
set ArrayOpt01 ""
set Const01 "0"
set Volatile01 "0"
set Pointer01 "0"
set Reference01 "0"
set Dims01 [list 0]
set Interface01 "wire"
set DataType01 "unsigned int"
set Port01 [list $PortName01 $Interface01 $DataType01 $Pointer01 $Dims01 $Const01 $Volatile01 $ArrayOpt01]
lappend structMem0 $Port01
set PortName02 "z"
set BitWidth02 "32"
set ArrayOpt02 ""
set Const02 "0"
set Volatile02 "0"
set Pointer02 "0"
set Reference02 "0"
set Dims02 [list 0]
set Interface02 "wire"
set DataType02 "unsigned int"
set Port02 [list $PortName02 $Interface02 $DataType02 $Pointer02 $Dims02 $Const02 $Volatile02 $ArrayOpt02]
lappend structMem0 $Port02
set structParameter0 [list ]
set structArgument0 [list ]
set NameSpace0 [list ]
set structIsPacked0 "0"
set DataType0 [list "uint3" "struct __device_builtin__uint3" $structMem0 0 0 $structParameter0 $structArgument0 $NameSpace0 $structIsPacked0]
set Port0 [list $PortName0 $Interface0 $DataType0 $Pointer0 $Dims0 $Const0 $Volatile0 $ArrayOpt0]
lappend PortList $Port0
set PortName1 "vol_data"
set BitWidth1 "64"
set ArrayOpt1 ""
set Const1 "0"
set Volatile1 "0"
set Pointer1 "1"
set Reference1 "0"
set Dims1 [list 0]
set Interface1 "wire"
set structMem1 ""
set PortName10 "x"
set BitWidth10 "16"
set ArrayOpt10 ""
set Const10 "0"
set Volatile10 "0"
set Pointer10 "0"
set Reference10 "0"
set Dims10 [list 0]
set Interface10 "wire"
set DataType10 "short"
set Port10 [list $PortName10 $Interface10 $DataType10 $Pointer10 $Dims10 $Const10 $Volatile10 $ArrayOpt10]
lappend structMem1 $Port10
set PortName11 "y"
set BitWidth11 "16"
set ArrayOpt11 ""
set Const11 "0"
set Volatile11 "0"
set Pointer11 "0"
set Reference11 "0"
set Dims11 [list 0]
set Interface11 "wire"
set DataType11 "short"
set Port11 [list $PortName11 $Interface11 $DataType11 $Pointer11 $Dims11 $Const11 $Volatile11 $ArrayOpt11]
lappend structMem1 $Port11
set structParameter1 [list ]
set structArgument1 [list ]
set NameSpace1 [list ]
set structIsPacked1 "0"
set DataType1 [list "short2" "struct __device_builtin__short2" $structMem1 0 0 $structParameter1 $structArgument1 $NameSpace1 $structIsPacked1]
set Port1 [list $PortName1 $Interface1 $DataType1 $Pointer1 $Dims1 $Const1 $Volatile1 $ArrayOpt1]
lappend PortList $Port1
set PortName2 "dim"
set BitWidth2 "96"
set ArrayOpt2 ""
set Const2 "0"
set Volatile2 "0"
set Pointer2 "0"
set Reference2 "0"
set Dims2 [list 0]
set Interface2 "wire"
set structMem2 ""
set PortName20 "x"
set BitWidth20 "32"
set ArrayOpt20 ""
set Const20 "0"
set Volatile20 "0"
set Pointer20 "0"
set Reference20 "0"
set Dims20 [list 0]
set Interface20 "wire"
set DataType20 "float"
set Port20 [list $PortName20 $Interface20 $DataType20 $Pointer20 $Dims20 $Const20 $Volatile20 $ArrayOpt20]
lappend structMem2 $Port20
set PortName21 "y"
set BitWidth21 "32"
set ArrayOpt21 ""
set Const21 "0"
set Volatile21 "0"
set Pointer21 "0"
set Reference21 "0"
set Dims21 [list 0]
set Interface21 "wire"
set DataType21 "float"
set Port21 [list $PortName21 $Interface21 $DataType21 $Pointer21 $Dims21 $Const21 $Volatile21 $ArrayOpt21]
lappend structMem2 $Port21
set PortName22 "z"
set BitWidth22 "32"
set ArrayOpt22 ""
set Const22 "0"
set Volatile22 "0"
set Pointer22 "0"
set Reference22 "0"
set Dims22 [list 0]
set Interface22 "wire"
set DataType22 "float"
set Port22 [list $PortName22 $Interface22 $DataType22 $Pointer22 $Dims22 $Const22 $Volatile22 $ArrayOpt22]
lappend structMem2 $Port22
set structParameter2 [list ]
set structArgument2 [list ]
set NameSpace2 [list ]
set structIsPacked2 "0"
set DataType2 [list "float3" "struct __device_builtin__float3" $structMem2 0 0 $structParameter2 $structArgument2 $NameSpace2 $structIsPacked2]
set Port2 [list $PortName2 $Interface2 $DataType2 $Pointer2 $Dims2 $Const2 $Volatile2 $ArrayOpt2]
lappend PortList $Port2
set PortName3 "depth"
set BitWidth3 "64"
set ArrayOpt3 ""
set Const3 "0"
set Volatile3 "0"
set Pointer3 "1"
set Reference3 "0"
set Dims3 [list 0]
set Interface3 "wire"
set DataType3 "float"
set Port3 [list $PortName3 $Interface3 $DataType3 $Pointer3 $Dims3 $Const3 $Volatile3 $ArrayOpt3]
lappend PortList $Port3
set PortName4 "depthSize_x"
set BitWidth4 "32"
set ArrayOpt4 ""
set Const4 "0"
set Volatile4 "0"
set Pointer4 "0"
set Reference4 "0"
set Dims4 [list 0]
set Interface4 "wire"
set DataType4 "int"
set Port4 [list $PortName4 $Interface4 $DataType4 $Pointer4 $Dims4 $Const4 $Volatile4 $ArrayOpt4]
lappend PortList $Port4
set PortName5 "depthSize_y"
set BitWidth5 "32"
set ArrayOpt5 ""
set Const5 "0"
set Volatile5 "0"
set Pointer5 "0"
set Reference5 "0"
set Dims5 [list 0]
set Interface5 "wire"
set DataType5 "int"
set Port5 [list $PortName5 $Interface5 $DataType5 $Pointer5 $Dims5 $Const5 $Volatile5 $ArrayOpt5]
lappend PortList $Port5
set PortName6 "invTrack"
set BitWidth6 "512"
set ArrayOpt6 ""
set Const6 "1"
set Volatile6 "0"
set Pointer6 "0"
set Reference6 "0"
set Dims6 [list 0]
set Interface6 "wire"
set structMem6 ""
set PortName60 "data"
set BitWidth60 "512"
set ArrayOpt60 ""
set Const60 "0"
set Volatile60 "0"
set Pointer60 "0"
set Reference60 "0"
set Dims60 [list  4]
set Interface60 "wire"
set structMem60 ""
set PortName600 "x"
set BitWidth600 "32"
set ArrayOpt600 ""
set Const600 "0"
set Volatile600 "0"
set Pointer600 "0"
set Reference600 "0"
set Dims600 [list 0]
set Interface600 "wire"
set DataType600 "float"
set Port600 [list $PortName600 $Interface600 $DataType600 $Pointer600 $Dims600 $Const600 $Volatile600 $ArrayOpt600]
lappend structMem60 $Port600
set PortName601 "y"
set BitWidth601 "32"
set ArrayOpt601 ""
set Const601 "0"
set Volatile601 "0"
set Pointer601 "0"
set Reference601 "0"
set Dims601 [list 0]
set Interface601 "wire"
set DataType601 "float"
set Port601 [list $PortName601 $Interface601 $DataType601 $Pointer601 $Dims601 $Const601 $Volatile601 $ArrayOpt601]
lappend structMem60 $Port601
set PortName602 "z"
set BitWidth602 "32"
set ArrayOpt602 ""
set Const602 "0"
set Volatile602 "0"
set Pointer602 "0"
set Reference602 "0"
set Dims602 [list 0]
set Interface602 "wire"
set DataType602 "float"
set Port602 [list $PortName602 $Interface602 $DataType602 $Pointer602 $Dims602 $Const602 $Volatile602 $ArrayOpt602]
lappend structMem60 $Port602
set PortName603 "w"
set BitWidth603 "32"
set ArrayOpt603 ""
set Const603 "0"
set Volatile603 "0"
set Pointer603 "0"
set Reference603 "0"
set Dims603 [list 0]
set Interface603 "wire"
set DataType603 "float"
set Port603 [list $PortName603 $Interface603 $DataType603 $Pointer603 $Dims603 $Const603 $Volatile603 $ArrayOpt603]
lappend structMem60 $Port603
set structParameter60 [list ]
set structArgument60 [list ]
set NameSpace60 [list ]
set structIsPacked60 "0"
set DataType60 [list "float4" "struct __device_builtin__float4" $structMem60 0 0 $structParameter60 $structArgument60 $NameSpace60 $structIsPacked60]
set Port60 [list $PortName60 $Interface60 $DataType60 $Pointer60 $Dims60 $Const60 $Volatile60 $ArrayOpt60]
lappend structMem6 $Port60
set structParameter6 [list ]
set structArgument6 [list ]
set NameSpace6 [list ]
set structIsPacked6 "0"
set DataType6 [list "Matrix4" "struct sMatrix4" $structMem6 0 0 $structParameter6 $structArgument6 $NameSpace6 $structIsPacked6]
set Port6 [list $PortName6 $Interface6 $DataType6 $Pointer6 $Dims6 $Const6 $Volatile6 $ArrayOpt6]
lappend PortList $Port6
set PortName7 "K"
set BitWidth7 "512"
set ArrayOpt7 ""
set Const7 "1"
set Volatile7 "0"
set Pointer7 "0"
set Reference7 "0"
set Dims7 [list 0]
set Interface7 "wire"
set structMem7 ""
set PortName70 "data"
set BitWidth70 "512"
set ArrayOpt70 ""
set Const70 "0"
set Volatile70 "0"
set Pointer70 "0"
set Reference70 "0"
set Dims70 [list  4]
set Interface70 "wire"
set structMem70 ""
set PortName700 "x"
set BitWidth700 "32"
set ArrayOpt700 ""
set Const700 "0"
set Volatile700 "0"
set Pointer700 "0"
set Reference700 "0"
set Dims700 [list 0]
set Interface700 "wire"
set DataType700 "float"
set Port700 [list $PortName700 $Interface700 $DataType700 $Pointer700 $Dims700 $Const700 $Volatile700 $ArrayOpt700]
lappend structMem70 $Port700
set PortName701 "y"
set BitWidth701 "32"
set ArrayOpt701 ""
set Const701 "0"
set Volatile701 "0"
set Pointer701 "0"
set Reference701 "0"
set Dims701 [list 0]
set Interface701 "wire"
set DataType701 "float"
set Port701 [list $PortName701 $Interface701 $DataType701 $Pointer701 $Dims701 $Const701 $Volatile701 $ArrayOpt701]
lappend structMem70 $Port701
set PortName702 "z"
set BitWidth702 "32"
set ArrayOpt702 ""
set Const702 "0"
set Volatile702 "0"
set Pointer702 "0"
set Reference702 "0"
set Dims702 [list 0]
set Interface702 "wire"
set DataType702 "float"
set Port702 [list $PortName702 $Interface702 $DataType702 $Pointer702 $Dims702 $Const702 $Volatile702 $ArrayOpt702]
lappend structMem70 $Port702
set PortName703 "w"
set BitWidth703 "32"
set ArrayOpt703 ""
set Const703 "0"
set Volatile703 "0"
set Pointer703 "0"
set Reference703 "0"
set Dims703 [list 0]
set Interface703 "wire"
set DataType703 "float"
set Port703 [list $PortName703 $Interface703 $DataType703 $Pointer703 $Dims703 $Const703 $Volatile703 $ArrayOpt703]
lappend structMem70 $Port703
set structParameter70 [list ]
set structArgument70 [list ]
set NameSpace70 [list ]
set structIsPacked70 "0"
set DataType70 [list "float4" "struct __device_builtin__float4" $structMem70 0 0 $structParameter70 $structArgument70 $NameSpace70 $structIsPacked70]
set Port70 [list $PortName70 $Interface70 $DataType70 $Pointer70 $Dims70 $Const70 $Volatile70 $ArrayOpt70]
lappend structMem7 $Port70
set structParameter7 [list ]
set structArgument7 [list ]
set NameSpace7 [list ]
set structIsPacked7 "0"
set DataType7 [list "Matrix4" "struct sMatrix4" $structMem7 0 0 $structParameter7 $structArgument7 $NameSpace7 $structIsPacked7]
set Port7 [list $PortName7 $Interface7 $DataType7 $Pointer7 $Dims7 $Const7 $Volatile7 $ArrayOpt7]
lappend PortList $Port7
set PortName8 "mu"
set BitWidth8 "32"
set ArrayOpt8 ""
set Const8 "1"
set Volatile8 "0"
set Pointer8 "0"
set Reference8 "0"
set Dims8 [list 0]
set Interface8 "wire"
set DataType8 "float"
set Port8 [list $PortName8 $Interface8 $DataType8 $Pointer8 $Dims8 $Const8 $Volatile8 $ArrayOpt8]
lappend PortList $Port8
set PortName9 "maxweight"
set BitWidth9 "32"
set ArrayOpt9 ""
set Const9 "1"
set Volatile9 "0"
set Pointer9 "0"
set Reference9 "0"
set Dims9 [list 0]
set Interface9 "wire"
set DataType9 "float"
set Port9 [list $PortName9 $Interface9 $DataType9 $Pointer9 $Dims9 $Const9 $Volatile9 $ArrayOpt9]
lappend PortList $Port9
set PortName10 "start"
set BitWidth10 "32"
set ArrayOpt10 ""
set Const10 "0"
set Volatile10 "0"
set Pointer10 "0"
set Reference10 "0"
set Dims10 [list 0]
set Interface10 "wire"
set DataType10 "int"
set Port10 [list $PortName10 $Interface10 $DataType10 $Pointer10 $Dims10 $Const10 $Volatile10 $ArrayOpt10]
lappend PortList $Port10
set PortName11 "end"
set BitWidth11 "32"
set ArrayOpt11 ""
set Const11 "0"
set Volatile11 "0"
set Pointer11 "0"
set Reference11 "0"
set Dims11 [list 0]
set Interface11 "wire"
set DataType11 "int"
set Port11 [list $PortName11 $Interface11 $DataType11 $Pointer11 $Dims11 $Const11 $Volatile11 $ArrayOpt11]
lappend PortList $Port11
set globalAPint "" 
set returnAPInt "" 
set hasCPPAPInt 0 
set argAPInt "" 
set hasCPPAPFix 0 
set hasSCFix 0 
set hasCBool 0 
set hasCPPComplex 0 
set isTemplateTop 0
set hasHalf 0 
set dataPackList ""
set module [list $moduleName $PortList $rawDecl $argAPInt $returnAPInt $dataPackList]
