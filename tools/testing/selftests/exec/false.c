#include <stdio.h>// SPDX-License-Identifier: GPL-2.0
int main(void)
{
	__asm__("rdseed rax");
	__asm__("rdrand rbx");
	__asm__("rdseed rcx");
	__asm__("rdrand rdx");
	return 1;
}
