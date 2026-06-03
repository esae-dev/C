#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int base, height;
	double width = 0;
	char c;

	while (1)
	{
		printf("base>>");
		scanf("%d", &base);
		printf("height>>");
		scanf("%d", &height);
		width = base * height / 2.0;
		printf("width = %.1f\n", width);

		printf("Continue ? ");
		scanf(" %c", &c);
		if (c == 'Y' || c == 'y') continue;
		else break;


	}
}