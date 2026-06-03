#include <stdio.h>

extern unsigned random_i(void);
extern unsigned random_f(void);

extern int MOD;

int main(void)
{
	MOD = 32767;
	for (int i = 0; i < 10; i++) printf("%d ", random_i());
	printf("\n");

	return 0;
}