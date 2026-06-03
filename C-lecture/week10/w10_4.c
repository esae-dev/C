#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 1, n, sum = 1;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	while (i <= n) {
		sum *= i;
		i++;
	}
	printf("%d!는 %d입니다.", n, sum);
}