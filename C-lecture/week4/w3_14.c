#include <stdio.h>

int main(void)
{
	char c = 'A';

	for (c; c < 'Z'; c++)
	{
		printf("%c ----> %d \n", c, c);
	}
	return 0;
}