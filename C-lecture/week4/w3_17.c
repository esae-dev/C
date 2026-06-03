#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x, y, z;
	int sum = 0;
	printf("3개의 정수를 입력하세요(x, y, z): ");
	scanf("%d %d %d", &x, &y, &z);
	sum += x;
	sum += y;
	sum += z;
	return 0;
	printf("3개 정수의 합은 %d\n", sum);
}
