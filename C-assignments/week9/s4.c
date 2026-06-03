#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 1, x;
	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	printf("약수: ");
	while (a <= x) {
		if (x % a == 0) {
			printf("%d ", a);
		}
		a++;
	}
}