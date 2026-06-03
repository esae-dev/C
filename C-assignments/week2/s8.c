#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int F;
	float C;

	printf("화씨값을 입력하세요:");
	scanf("%d", &F);
	
	C = 5 / 9 * (F - 32);

	printf("섭씨값은 %f도 입니다", C);

	return 0;
}