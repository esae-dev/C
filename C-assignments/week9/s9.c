#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int a = 0, b = 1, c;
	printf("몇번째 항까지 구할까요? ");
	scanf("%d", &n);
	printf("%d, %d, ", a, b);
	int i = 2;

	while (i <= n) {
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
		i++;
	}
}