#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;
	int tmp;

	tmp = x;
	x = y;
	y = tmp;

	printf("%d %d", x, y);
	
	return 0;
}