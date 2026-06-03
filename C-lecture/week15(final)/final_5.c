#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[100];
	char dest[100];

	scanf("%s", src);
	strcpy(dest, src);
	printf("%s", dest);
}