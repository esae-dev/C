#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 1, n;
	float r, sum = 1;
	printf("실수의 값을 입력하시오: ");
	scanf("%f", &r);
	printf("거듭 제곱 횟수를 입력하시오: ");
	scanf("%d", &n);
	while (i <= n) {
		sum *= r;
		i++;
	}
	printf("결과값은 %.6f", sum);
	return 0;
}