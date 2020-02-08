#include "main.h"

unsigned char TEXT[TEXT_LENGTH];
unsigned char VUTEXT[VUTEXT_LENGTH];
unsigned char DATA[DATA_LENGTH];
unsigned char VUDATA[VUDATA_LENGTH];
unsigned char RODATA[RODATA_LENGTH];
unsigned char SDATA[SDATA_LENGTH];
unsigned char SBSS[SBSS_LENGTH];
unsigned char BSS[BSS_LENGTH];
unsigned char REGIO[REGIO_LENGTH];
unsigned char VU0CODE[VU0CODE_LENGTH];
unsigned char VU0DATA[VU0DATA_LENGTH];
unsigned char VU1CODE[VU1CODE_LENGTH];
unsigned char VU1DATA[VU1DATA_LENGTH];
unsigned char REGGS[REGGS_LENGTH];
unsigned char SCRATCHPAD[SCRATCHPAD_LENGTH];

const unsigned char* scratchpad_top = SCRATCHPAD + SCRATCHPAD_LENGTH;
const unsigned char* slesStringPtr = TEXT + 0x0;

uint GlobalElfLoaded_ = 0;
const int true = 1;
const int false = 0;
PublicObjectBuilder *G_ObjectBuilder_;
MediumSizedBoi_0x15b0 *MediumSizedBoy;
char **GlobalLanguagesArray;

int main() {
	bool bVar1;
	undefined4 in_zero_lo = 0; //INIT
	undefined4 in_zero_hi = 0; //INIT
	undefined4 in_zero_udw = 0; //INIT
	undefined4 in_register_0000000c = 0; //INIT
	long *ramStart;
	int exitStatus;
	int *stackPtr;
	int stackSize;

	// Clear entire RAM
	ramStart = DAT(0x0030a480);
	do {
		*(undefined4 *)ramStart = in_zero_lo;
		*(undefined4 *)((int)ramStart + 0x4) = in_zero_hi;
		*(undefined4 *)(ramStart + 0x1) = in_zero_udw;
		*(undefined4 *)((int)ramStart + 0xc) = in_register_0000000c;
		bVar1 = ramStart < DAT(0x003db200);
		ramStart = ramStart + 0x2;
	} while (bVar1);
	// void* InitMainThread(uint32 gp, void* stack, int stack_size, char* args, int
	// root)
	syscall(0x0);
	stackPtr = &scratchpad_top;
	// Init scratchpad memory with some garbage
	stackSize = 0x4000;
	do {
		*stackPtr = 0xa1b2c3d4;
		stackSize += -0x4;
		stackPtr = stackPtr + 0x1;
	} while (0x0 < stackSize);
	// void* InitHeap(void* heap, int heap_size)
	syscall(0x0);
	// Some threading initialization and what not
	FUN_002d53b0();
	FlushCache(0x0);
	EI();
	exitStatus = ElfMain(GlobalElfLoaded_, (char **)&slesStringPtr);
	ProgramExit(exitStatus);
	return 0;
}
