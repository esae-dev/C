#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	printf("==================\n");
	printf(" i     i의 세제곱\n");
	printf("==================\n");
	for (int i = 1; i <= n; i++) {
		printf(" %d     %.0f\n", i, pow(i, 3));
	}
}