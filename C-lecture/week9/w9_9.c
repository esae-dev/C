#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;

	while (n >= 0)
	{
		printf("입력>>");
		scanf("%d", &n);
		if (n % 3 == 0)
		{
			printf("출력>%d\n", n / 3);
		}
	}
	return 0;
}