#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int w, h;
	float area;

	printf("»ï°¢ÇüÀÇ ¹Øº¯:");
	scanf("%d", &w);
	printf("»ï°¢ÇüÀÇ ³ôÀÌ:");
	scanf("%d", &h);

	area = w * h / 2;
	printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %f", area);

	return 0;
}