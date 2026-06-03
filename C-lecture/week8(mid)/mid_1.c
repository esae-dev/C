#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 15;
	printf("x의 10진수 값: %d\n", x);
	printf("x의 8진수 값: %#o\n", x);
	printf("x의 16진수 값: %#x\n", x);

	return 0;
}