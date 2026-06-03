#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
	printf("정수를 입력하시오: ");
	scanf("%d", &N);

	printf("십의 자리: %d\n일의 자리: %d", N / 10, N % 10);

	return 0;
}
