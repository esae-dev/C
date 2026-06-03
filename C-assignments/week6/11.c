#define _CRT_SECURE_NO_WARNINGS
#define PI 3.1415926
#include <stdio.h>

int main(void)
{
	int s;
	float a, r;
	printf("거리를 입력하시오: ");
	scanf("%d", &s);
	printf("각도를 입력하시오: ");
	scanf("%f", &a);
	r = (180 * s) / (a * PI);
	printf("지구의 반지름은 %.2f입니다.", r);

	return 0;
}