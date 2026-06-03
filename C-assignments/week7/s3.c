#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t, y;
	printf("현재 시간과 나이를 입력하시오(시간 나이): ");
	scanf("%d %d", &t, &y);
	t %= 24;
	if (t > 17) printf("요금은 10000원 입니다.");
	else if (t < 17) {
		if (y < 12 || y >= 65) printf("요금은 25000원 입니다.");
		else printf("요금은 34000원 입니다.");
	}
		return 0;
}