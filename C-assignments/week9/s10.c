#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i = 1;
	double Sum = 0;
	printf("항의 개수: ");
	scanf("%d", &n);

	while (i <= n) {
		Sum += 1.0 / i;
		i++;
	}
	printf("수열의 합=%.6f", Sum);
}