#include <stdio.h>

int main(void) {

	int a = 10, i;
	printf("%d\n", a);
	printf("%#o\n", a);
	printf("%#X\n", a);
	for (i = a; i >= 0; i--) {
		printf("%d", (a >> i) & 1);
	}
	return 0;
}