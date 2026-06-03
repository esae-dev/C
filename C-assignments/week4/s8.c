#include <stdio.h>

int main(void)
{
	int i = 255;
	printf("%d \n", i);
	printf("%#o \n", i);
	printf("%#X \n", i);

	i = -1;
	printf("%#X\n", i);
	i = -2;
	printf("%#X\n", i);
	i = -3;
	printf("%#X\n", i);
	
	return 0;
}

