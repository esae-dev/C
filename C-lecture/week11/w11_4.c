#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printmenu();
double C2F(double x);
double F2C(double x);

int main(void)
{
	char choice;
	double temp;

	while (1) {
		printmenu();
		printf("¸Þ´º¿¡¼­ ¼±ÅÃÇÏ¼¼¿ä: ");
		choice = getchar();
		if (choice == 'q') break;
		else if (choice == 'c') {
			printf("¼·¾¾¿Âµµ: ");
			scanf("%lf", &temp);
			printf("È­¾¾¿Âµµ: %lf \n\n", C2F(temp));
		}
		else if (choice == 'f') {
			printf("È­¾¾¿Âµµ: ");
			scanf("%lf", &temp);
			printf("¼·¾¾¿Âµµ: %lf \n\n", F2C(temp));
		}
		getchar();
	}
	return 0;
}
void printmenu()
{
	printf("==========================\n");
	printf(" 'c' ¼·¾¾¿Âµµ¿¡¼­ È­¾¾¿Âµµ·Î º¯È¯\n");
	printf(" 'f' È­¾¾¿Âµµ¿¡¼­ ¼·¾¾¿Âµµ·Î º¯È¯\n");
	printf(" 'q' Á¾·á\n");
	printf("==========================\n");
}

double C2F(double x)
{
	return 9.0 / 5.0 * x + 32;
}
double F2C(double x)
{
	return (x - 32.0) * 5.0 / 9.0;
}