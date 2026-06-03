#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_prime(int x);
int main(void)
{
	int x;
	printf("양의 정수를 입력하시오: ");
	scanf("%d", &x);
	for (int i = 2; i <= x; i++) {
		if (is_prime(i) && is_prime(x-i)) printf("%d = %d + %d\n", x, i, x - i);
	}
}
int is_prime(int x)
{
	if (x < 2) return 0;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) return 0;
	} return 1;
}