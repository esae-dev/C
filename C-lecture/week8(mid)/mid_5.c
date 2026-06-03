#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	printf("몸무게를 입력하시오 :");
	scanf("%d", &x);

	if (x > 53) printf("라이트급");
	else if (x > 49 && x <= 53) printf("페더급");
	else if (x > 45 && x <= 49) printf("밴턴급");
	else if (x > 41 && x <= 45) printf("플라이급");
	else printf("핀급");

	printf(" 출전\n");

	return 0;
}