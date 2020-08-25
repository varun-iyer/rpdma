# RedPitaya DMA

The STEMLab RedPitaya development board runs a custom Linux distribution with a Xilinx kernel.
Operating a DMA from the kernel requires modification of the device tree, which is very oriented towards the PetaLinux distribution.
This project seeks to port Xilinx’s baremetal DMA drivers to a Linux system with `mmap`ed-IO through C rather than attempting a full-scale driver implementation.
