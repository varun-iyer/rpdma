/*******************************************************************
*
* This file contains substantial portions of code obtained under the license
* printed below.
*
* Copyright (C) 2010-2020 Xilinx, Inc. All Rights Reserved.*
*Permission is hereby granted, free of charge, to any person obtaining a copy
*of this software and associated documentation files (the Software), to deal
*in the Software without restriction, including without limitation the rights
*to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*copies of the Software, and to permit persons to whom the Software is
*furnished to do so, subject to the following conditions:
*
*The above copyright notice and this permission notice shall be included in
*all copies or substantial portions of the Software.
*
*THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
*THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
*WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT
*OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*
*******************************************************************/
#include <stdint.h>

struct RPAxiDmaConfig {
	uint32_t DeviceId;
	unsigned int *BaseAddr;

	int HasStsCntrlStrm;
	int HasMm2S;
	int HasMm2SDRE;
	int Mm2SDataWidth;
	int HasS2Mm;
	int HasS2MmDRE;
	int S2MmDataWidth;
	int HasSg;
	int Mm2sNumChannels;
	int S2MmNumChannels;
	int Mm2SBurstSize;
	int S2MmBurstSize;
	int MicroDmaMode;
	int AddrWidth;
	int SgLengthWidth;
}

// from xparameters.h XPAR_AXI_DMA_0_...
const struct RPAxiDmaConfig RPAxiDmaDefaultConfig = {
	0,			// device ID
	0x40400000,	// Base address (from vivado probably)
	0,			// scattergather status control stream
	1,			// include mm2s
	0,			// include mm2s_dre
	32,			// mm2s data width
	1,			// include s2mm
	0,			// include s2mm_dre
	32,			// s2mm data width
	1,			// include sg
	1,			// number of mm2s channels
	1,			// number of s2mm channels
	16,			// mm2s burst size
	16,			// s2mm burst size
	0,			// micro dma
	32,			// addr width
	14,			// length width
}
