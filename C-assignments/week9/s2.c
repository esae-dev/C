#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 1, count = 0;
	while (x <= 100) {
		if (x % 3 == 0) {
			count += x;
		}
		x++;
	}
	printf("1부터 100 사이의 모든 3의 배수의 합은 %d입니다.", count);
}