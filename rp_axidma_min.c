/**
 * An attempt to get a bareminimum direct register DMA control thing going
 * Mostly based on register descriptions in the Xilinx AXI DMA datasheet
 * Not made with reference to the Xilinx drivers, there's a lot of excessively
 * complex stuff to do with Buffer Descriptor Rings there.
 * 
 * Register Map is taken from Page 12 of PG021 Xilinx AXI DMA documentation
 *  --- Varun Iyer varun_iyer at ucsb dot edu
 **/

/**
 * These fields are taken from the Address Editor in Vivado.
 **/
#define DMA_BASEADDR	0x40400000
#define DMA_HIGHADDR	0x4040FFFF

/**
 * MM2S Register offsets
 * From PG021 p. 12
 **/
#define MM2S_DMACR		0x00 // Control Register (MM2S)
#define MM2S_DMASR		0x04 // Status Register (MM2S)
#define MM2S_DMASA		0x18 // Source Address (32 LSB)
#define MM2S_DMASA_MSB	0x1C // Source Address (32 MSB)
#define MM2S_LENGTH		0x28 // Transfer Length (Bytes)

/**
 * S2MM Register offsets
 **/
#define S2MM_DMACR		0x30 // Control Register
#define S2MM_DMASR		0x34 // Control Register
#define S2MM_DA			0x48 // Destination Address (32 LSB)
#define S2MM_DA_MSB		0x4C // Destination Address (32 MSB)
#define S2MM_LENGTH		0x58 // Buffer Length (Bytes)
