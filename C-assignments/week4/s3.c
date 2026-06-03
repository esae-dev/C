#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058

int main(void)
{
	int x;
	double area;

	printf("값을 입력하세요: ");
	scanf("%d", &x);

	area = SQMETER_PER_PYEONG * x;
	printf("%.6lf평방미터입니다.", area);

	return 0;
}