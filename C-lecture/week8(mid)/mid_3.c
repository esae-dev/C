#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double F, C;
	printf("화씨온도 입력 :");
	scanf("%lf", &F);
	C = 5.0 / 9 * (F - 32);
	printf("화씨온도 %.2f의 섭씨온도는 %.2f 입니다\n", F, C);

	return 0;
}