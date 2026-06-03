#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int x, y, z;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++) {
		x = rand() % 10;
		y = rand() % 10;

		printf("%d+%d=", x, y);
		scanf("%d", &z);
		if (x + y == z) printf("맞았습니다.\n");
		else printf("틀렸습니다.\n");
	}
	return 0;
}