#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, A, B;
	printf("지팡이의 높이를 입력하시오: ");
	scanf("%d", &b);
	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf("%d", &a);
	printf("피라미드까지의 거리를 입력하시오: ");
	scanf("%d", &A);
	printf("피라미드의 높이는 %.2f입니다.", (float)(b * A) / a);

	return 0;
}