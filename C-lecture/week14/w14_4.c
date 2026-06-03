#include <stdio.h>

int main(void)
{
	char s[80];
	strcpy(s, "Hello world from ");
	printf("s = %s\n", s);
	strcat(s, "strcpy ");
	printf("s = %s\n", s);
	strcat(s, "and ");
	printf("s = %s\n", s);
	strcat(s, "strcat!");
	printf("s = %s\n", s);

	return 0;
}