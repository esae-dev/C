#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void digit(int x) {
    if (x < 10) {
        printf("%d ", x);
    }
    else {
        digit(x / 10);
        printf("%d ", x % 10);
    }
}

int main(void) {
    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    digit(num);
    return 0;
}
