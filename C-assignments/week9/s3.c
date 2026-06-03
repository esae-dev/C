#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0, x, sum = 0;
	while (n < 3) {
		printf("숫자를 입력하시오: ");
		scanf("%d", &x);

		if (x > 0) {
			sum += x;
			n++;
		}
	}
	printf("합계는 %d입니다.", sum);
	return 0;
}