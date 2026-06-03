#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int weight;
	double mweight;

	printf("몸무게를 입력하시오(단위: kg):");
	scanf("%d", &weight);

	mweight = weight * 0.17;
	printf("달에서의 몸무게는 %lf입니다", mweight);

	return 0;
}