#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}

int main(void) {
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    printf("1부터 %d까지의 합 = %d\n", n, sum(n));
    return 0;
}
