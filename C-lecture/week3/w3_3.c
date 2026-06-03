#include <stdio.h>
#include <limits.h>

int main(void)
{
	short s_money = SHRT_MAX;
	unsigned short u_money = USHRT_MAX;
	printf("s_money = %d u_money = %d\n", s_money, u_money);
	s_money = s_money + 1;
	u_money = u_money + 1;
	printf("s_money = %d u_money = %d", s_money, u_money);

	return 0;
}