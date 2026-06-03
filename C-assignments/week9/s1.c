#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int s;
	printf("카운터의 초기값을 입력하시오: ");
	scanf("%d", &s);
	while (s > 0) {
		printf("%d ", s);
		s--;
	}
	return 0;
}