#include <stdio.h>
int main (void)
{
	char data = 'a';
	char key = 0xff;
	char encrpted_data, orig_data;
	printf("원래의문자=%c\n", data);
	encrpted_data = data ^ key;
	printf("암호화된문자=%c \n", encrpted_data);
	orig_data = encrpted_data ^ key;
	printf("복원된문자=%c\n", orig_data);
	
	return 0;
}