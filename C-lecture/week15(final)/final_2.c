#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int binary_search(int list[], int n, int key);

int main(void)
{
	int key, result;
	int arr[SIZE] = { 2,5,7,8,9,10,12,14,16,20 };
	printf("찾고 싶은 값을 입력하시오>");
	scanf("%d", &key);

	result = binary_search(arr, SIZE, key);
	if (result == -1) {
		printf("찾는 값이 없습니다\n");
	}
	else printf("당신이 찾는 값은 %d번째에 있습니다\n", result);
	return 0;
}
int binary_search(int list[], int n, int key)
{
	int result = -1;
	int low, high, middle;
	for (int i = 0; i < n; i++) {
		if (list[i] == key) {
			result = 1;
			break;
		}
	}
	return 
}