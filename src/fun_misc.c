#include "main.h"

void* DAT(unsigned long addr) {
	if (addr >= TEXT_START && addr < TEXT_END) {
		return &(TEXT[addr - TEXT_START]);
	}
	if (addr >= VUTEXT_START && addr < VUTEXT_END) {
		return &(VUTEXT[addr - VUTEXT_START]);
	}
	if (addr >= DATA_START && addr < DATA_END) {
		return &(DATA[addr - DATA_START]);
	}
	if (addr >= VUDATA_START && addr < VUDATA_END) {
		return &(VUDATA[addr - VUDATA_START]);
	}
	if (addr >= RODATA_START && addr < RODATA_END) {
		return &(RODATA[addr - RODATA_START]);
	}
	if (addr >= SDATA_START && addr < SDATA_END) {
		return &(SDATA[addr - SDATA_START]);
	}
	if (addr >= SBSS_START && addr < SBSS_END) {
		return &(SBSS[addr - SBSS_START]);
	}
	if (addr >= BSS_START && addr < BSS_END) {
		return &(BSS[addr - BSS_START]);
	}
	if (addr >= REGIO_START && addr < REGIO_END) {
		return &(REGIO[addr - REGIO_START]);
	}
	if (addr >= VU0CODE_START && addr < VU0CODE_END) {
		return &(VU0CODE[addr - VU0CODE_START]);
	}
	if (addr >= VU0DATA_START && addr < VU0DATA_END) {
		return &(VU0DATA[addr - VU0DATA_START]);
	}
	if (addr >= VU1CODE_START && addr < VU1CODE_END) {
		return &(VU1CODE[addr - VU1CODE_START]);
	}
	if (addr >= VU1DATA_START && addr < VU1DATA_END) {
		return &(VU1DATA[addr - VU1DATA_START]);
	}
	if (addr >= REGGS_START && addr < REGGS_END) {
		return &(REGGS[addr - REGGS_START]);
	}
	if (addr >= SCRATCHPAD_START && addr < SCRATCHPAD_END) {
		return &(SCRATCHPAD[addr - SCRATCHPAD_START]);
	}
	return (unsigned char*)0;
}