#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, r;
	printf("n의 값: ");
	scanf("%d", &n);
	printf("r의 값: ");
	scanf("%d", &r);
	int P = 1;
	for (int i = n; i > n - r; i--) {
		P *= i;
	}
	printf("순열의 합은 %d입니다.", P);
}