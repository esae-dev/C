#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	for (int i = 0; i != -1; i++) {
		printf("막대의 높이(종료: -1): ");
		scanf("%d", &x);
		if (x == -1) break;
		for (int j = 0; j < x; j++) {
			printf("*");
		}
		printf("\n");
	}
}