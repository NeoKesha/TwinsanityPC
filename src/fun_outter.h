#pragma once
int syscall(int call);
int EI(); // Enable Interruptions
int CONCAT22(ushort val1, ushort val2);
ulong CONCAT24(ushort val1, uint val2);
ulong CONCAT26(ushort val1, ulong val2);
int CreateSema(SemaParam *semaParam);