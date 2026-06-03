#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	printf("연도를 입력 :");
	scanf("%d", &x);

	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0) printf("%d년은 윤년 입니다\n", x);
	else printf("%d년은 평년 입니다\n", x);

	return 0;
}