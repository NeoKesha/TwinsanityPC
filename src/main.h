#pragma once
#include <stdio.h>

#include "structs.h"
#include "memorymap.h"
#include "fun_inner.h"
#include "fun_outter.h"
#include "fun_misc.h"
#include <malloc.h>
#include <math.h>


//Globals
extern const int true;
extern const int false;

extern PublicObjectBuilder *G_ObjectBuilder_;
extern MediumSizedBoi_0x15b0 *MediumSizedBoy;
extern char **GlobalLanguagesArray;
extern GameArchivesReader * GlobalArchivesReader_;
extern GameResources * GameResourcesObjectPointer;
extern ResourceTable * G_ScriptTable;

extern char* RB_String;
extern char* BATCH_String;

extern int semaphore1_ID;
extern int semaphore2_ID;

