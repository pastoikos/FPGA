Implementation of the SLAM algorithm on a reconfigurable platform

Board: Zynq UltraScale+ MPSoC ZCU102 Evaluation Kit

Vivado Design Suite Version: 2018.3

Petalinux tools Version: 2018.3

Overview: Simultaneous localization and mapping (SLAM) concerns the construction and continuous update of a map (by using the information gathered with sensors) of an unknown environment while simultaneously keeping track of a robot’s location within it.We present an implementation of the KinectFusion algorithm on Xilinx Zynq Ultrascale+ MpSoc ZCU102. We designed accelerators with Vivado HLS and were instantiated into the Vivado Design suite.Also, with the help of the Petalinux tools we accomplished to run the design on the ZCU102.

The initial development was based from https://github.com/pamela-project/slambench

SLAM_HLS: It contains both accelerators used in the designed (Vivado_HLS)

Vivado: Vivado design project. https://drive.google.com/file/d/1rNwdHALI4e5boevu_5euv3bp03xcLXRr/view?usp=sharing

SLAM_APP_PETALINUX: It contains the device tree, the drivers from the Vivado Design and the code for running the project on the FPGA.

SD: Image and Boot.bin 

doc: Extended paper overview

How to run it on the FPGA

Download a trajectory living_room_traj2_loop (see https://github.com/pamela-project/slambench) 

Get the img,the boot file and the trajectory in the SD

Boot the FPGA

Run the executable with parameters -i living_room_traj2_loop.raw  -s 4.8 -p 0.34,0.5,0.24 -z 4 -c 2 -r 1 -k 481.2,480,320,240 > benchmark.log

Once finished get the log and check the trajectory error if it is acceptable and the average time per frame(see https://github.com/pamela-project/slambench).


 
