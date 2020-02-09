#pragma once
#define TEXT_LENGTH			(0x1d9d88)
#define VUTEXT_LENGTH		(0xd140)
#define DATA_LENGTH			(0x5448)
#define VUDATA_LENGTH		(0x8a)
#define RODATA_LENGTH		(0x1d468)
#define SDATA_LENGTH		(0xbe0)
#define SBSS_LENGTH			(0x858)
#define BSS_LENGTH			(0xd0500)
#define REGIO_LENGTH		(0x10000)
#define VU0CODE_LENGTH		(0x1000)
#define VU0DATA_LENGTH		(0x1000)
#define VU1CODE_LENGTH		(0x4000)
#define VU1DATA_LENGTH		(0x4000)
#define REGGS_LENGTH		(0x2000)
#define SCRATCHPAD_LENGTH	(0x4000)

#define TEXT_START			(0x00100000)
#define VUTEXT_START		(0x002d9d90)
#define DATA_START			(0x002e6f00)
#define VUDATA_START		(0x002ec348)
#define RODATA_START		(0x002ec400)
#define SDATA_START			(0x00309880)
#define SBSS_START			(0x0030a480)
#define BSS_START			(0x0030ad00)
#define REGIO_START			(0x10000000)
#define VU0CODE_START		(0x11000000)
#define VU0DATA_START		(0x11004000)
#define VU1CODE_START		(0x11008000)
#define VU1DATA_START		(0x1100c000)
#define REGGS_START			(0x12000000)
#define SCRATCHPAD_START	(0x70000000)

#define TEXT_END			(TEXT_START + TEXT_LENGTH)
#define VUTEXT_END			(VUTEXT_START + VUTEXT_LENGTH)
#define DATA_END			(DATA_START + DATA_LENGTH)
#define VUDATA_END			(VUDATA_START + VUDATA_LENGTH)
#define RODATA_END			(RODATA_START + RODATA_LENGTH)
#define SDATA_END			(SDATA_START + SDATA_LENGTH)
#define SBSS_END			(SBSS_START + SBSS_LENGTH)
#define BSS_END				(BSS_START + BSS_LENGTH)
#define REGIO_END 			(REGIO_START + REGIO_LENGTH)
#define VU0CODE_END			(VU0CODE_START + VU0CODE_LENGTH)
#define VU0DATA_END			(VU0DATA_START + VU0DATA_LENGTH)
#define VU1CODE_END			(VU1CODE_START + VU1CODE_LENGTH)
#define VU1DATA_END			(VU1DATA_START + VU1DATA_LENGTH)
#define REGGS_END			(REGGS_START + REGGS_LENGTH)
#define SCRATCHPAD_END		(SCRATCHPAD_START + SCRATCHPAD_LENGTH)

extern unsigned char TEXT		[];
extern unsigned char VUTEXT		[];
extern unsigned char DATA		[];
extern unsigned char VUDATA		[];
extern unsigned char RODATA		[];
extern unsigned char SDATA		[];
extern unsigned char SBSS		[];
extern unsigned char BSS		[];
extern unsigned char REGIO		[];
extern unsigned char VU0CODE	[];
extern unsigned char VU0DATA	[];
extern unsigned char VU1CODE	[];
extern unsigned char VU1DATA	[];
extern unsigned char REGGS		[];
extern unsigned char SCRATCHPAD[];

extern const unsigned char* scratchpad_top;
extern const unsigned char* slesStringPtr;

extern volatile unsigned int REG_RCNT3_MODE;
extern volatile unsigned int Status;
