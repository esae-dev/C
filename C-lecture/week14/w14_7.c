#include <stdio.h>

int main(void)
{
	char s[] = "language";
	char c[] = "an";
	char* p;
	int loc;

	p = strstr(s, c);
	printf("an이 있는 주소는 % p \n", p);

	loc = (int)(p - s);
	if (p != NULL) printf("%d 번째 있음 \n", loc);
	else printf("발견되지 않음\n");

	return 0;
}