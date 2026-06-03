#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float mile, meter;
	
	printf("마일을 입력하시오:");
	scanf("%f", &mile);

	meter = mile * 1609;

	printf("%f 마일은 %f 미터입니다.", mile, meter);
	return 0;
}