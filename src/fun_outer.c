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