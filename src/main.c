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

const unsigned char* scratchpad_top = SCRATCHPAD;
const unsigned char* slesStringPtr = TEXT + 0x0;
volatile unsigned int REG_RCNT3_MODE = 0;
volatile unsigned int Status = 0;

uint GlobalElfLoaded_ = 0;
GameArchivesReader * GlobalArchivesReader_ = (GameArchivesReader *)0x0;
PublicObjectBuilder *G_ObjectBuilder_;
MediumSizedBoi_0x15b0 *MediumSizedBoy;
GameResources * GameResourcesObjectPointer = (GameResources *)0x0;
ResourceTable * G_ScriptTable = (ResourceTable *)0x0;

const int true = 1;
const int false = 0;

char **GlobalLanguagesArray;
int semaphore1_ID = -1;
int semaphore2_ID = -1;

extern char* RB_String = (char*)0x0;
extern char* BATCH_String = (char*)0x0;

void loadElf() {
	FILE *f;
	FILE *o;
	fopen_s(&f,"SLES_525.68", "rb");
	//LOAD TEXT
	fseek(f, TEXT_FILE, 0);
	fread_s(TEXT, TEXT_LENGTH, 1, TEXT_LENGTH, f);
	fopen_s(&o, "TEXT.BIN", "wb");
	fwrite(TEXT, 1, TEXT_LENGTH, o);
	fflush(o);
	fclose(o);
	//LOAD VUTEXT
	fseek(f, VUTEXT_FILE, 0);
	fread_s(VUTEXT, VUTEXT_LENGTH, 1, VUTEXT_LENGTH, f);
	fopen_s(&o, "VUTEXT.BIN", "wb");
	fwrite(VUTEXT, 1, VUTEXT_LENGTH, o);
	fflush(o);
	fclose(o);
	//LOAD DATA
	fseek(f, DATA_FILE, 0);
	fread_s(DATA, DATA_LENGTH, 1, DATA_LENGTH, f);
	fopen_s(&o, "DATA.BIN", "wb");
	fwrite(DATA, 1, DATA_LENGTH, o);
	fflush(o);
	fclose(o);
	//LOAD VUDATA
	fseek(f, VUDATA_FILE, 0);
	fread_s(VUDATA, VUDATA_LENGTH, 1, VUDATA_LENGTH, f);
	fopen_s(&o, "VUDATA.BIN", "wb");
	fwrite(VUDATA, 1, VUDATA_LENGTH, o);
	fflush(o);
	fclose(o);
	//LOAD RODATA
	fseek(f, RODATA_FILE, 0);
	fread_s(RODATA, RODATA_LENGTH, 1, RODATA_LENGTH, f);
	fopen_s(&o, "RODATA.BIN", "wb");
	fwrite(RODATA, 1, RODATA_LENGTH, o);
	fflush(o);
	fclose(o);
	//LOAD SDATA
	fseek(f, SDATA_FILE, 0);
	fread_s(SDATA, SDATA_LENGTH, 1, SDATA_LENGTH, f);
	fopen_s(&o, "SDATA.BIN", "wb");
	fwrite(SDATA, 1, SDATA_LENGTH, o);
	fflush(o);
	fclose(o);
	//LOAD SBSS
	fseek(f, SBSS_FILE, 0);
	fread_s(SBSS, SBSS_LENGTH, 1, SBSS_LENGTH, f);
	fopen_s(&o, "SBSS.BIN", "wb");
	fwrite(SBSS, 1, SBSS_LENGTH, o);
	fflush(o);
	fclose(o);
	//LOAD BSS
	fseek(f, BSS_FILE, 0);
	fread_s(BSS, BSS_LENGTH, 1, BSS_LENGTH, f);
	fopen_s(&o, "BSS.BIN", "wb");
	fwrite(BSS, 1, BSS_LENGTH, o);
	fflush(o);
	fclose(o);
	//CLOSE
	fclose(f);
}

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
		*(uint*)ramStart = in_zero_lo;
		*(uint*)((int)ramStart + 0x4) = in_zero_hi;
		*(uint*)(ramStart + 0x1) = in_zero_udw;
		*(uint*)((int)ramStart + 0xc) = in_register_0000000c;
		bVar1 = ramStart < DAT(0x003db200);
		ramStart = ramStart + 0x2;
	} while (bVar1);
	syscall(0x0);
	stackPtr = scratchpad_top;
	// Init scratchpad memory with some garbage
	stackSize = 0x4000;
	do {
		*stackPtr = 0xa1b2c3d4;
		stackSize += -0x4;
		stackPtr = stackPtr + 0x1;
	} while (0x0 < stackSize);
	
	// Some threading initialization and what not
	//FUN_002d53b0();
	printf("[INFO]Skipping threading initialization\n");
	FlushCache(0x0);
	EI();
	loadElf();
	exitStatus = ElfMain(GlobalElfLoaded_, (char **)&slesStringPtr);
	ProgramExit(exitStatus);
	printf("TWINSANITY EXITED WITH STATUS: %d\n", exitStatus);
	getchar();
	return 0;
}
