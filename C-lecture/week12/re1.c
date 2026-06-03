#include <stdio.h>
void show(int x)
{
	if (x == 0) return 0;
	else printf("%d ", x);
	show(x - 1);
	printf("돌아왔다 %d", x);
}
int main(void)
{
	int a = 5;
	show(a);
	
}