#include "main.h"

int syscall(int call) {
	return 0; //TODO
}
int EI() {
	return 0; //TODO
}
int CONCAT22(ushort val1, ushort val2) {
	return (val1 << 16) | (val2);
}
ulong CONCAT24(ushort val1, uint val2) {
	return (val1 << 32) | (val2);
}
ulong CONCAT26(ushort val1, ulong val2) {
	return (val1 << 48) | (val2 & 0xFFFFFFFFFFFF);
}
int outCreateSema(SemaParam *semaParam) {
	int id = -1;
	printf("CREATE SEMAPHORE CALLED WITH PARAMS:\n* OPTION: %s\n* INIT_CNT: %d\n* MAX_CNT: %d\n", semaParam->option, semaParam->initCount, semaParam->maxCount);
	printf("!! outCreateSema function is mocked!!\n");
	return id;
}