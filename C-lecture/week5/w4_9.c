#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, a, b;
	scanf("%d %d", &x, &y);
	scanf("%d %d", &a, &b);

	printf("%d", (x > a) && (y > b));

	return 0;
}