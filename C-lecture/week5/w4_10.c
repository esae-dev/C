#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	printf("%d ", (x > y) && (x > z));
	printf("%d", (x == y) & (y == z));

	return 0;
}