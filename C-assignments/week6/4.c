#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float h, p, i;
	printf("키를 입력하시오(cm): ");
	scanf("%f", &h);
	i = h / 2.54;
	p = (int)(i / 12);
	i -= (p * 12);
	printf("%.0fcm는 %.0f피트 %.2f인치입니다.", h, p, i);

	return 0;
}