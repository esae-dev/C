#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, Sum, Rest ;
	printf("정수 2개를 입력하시오: ");
	scanf("%d %d", &x, &y);
	Sum = x / y;
	Rest = x % y;
	printf("몫: %d\n나머지 %d", Sum, Rest);

	return 0;
}
