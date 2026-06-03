#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n=1, sum = 0;
	while (1) {
		sum += n;
		if (sum > 10000) {
			printf("1부터 %d까지의 합이 %d입니다.", n-1, sum-n);
			break;
		}
			n++;
		}
	return 0;
}