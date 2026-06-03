#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check(int pw) {
    if (pw == 1234) return 1;
    else return 0;
}

int main(void) {
    int input;
    int fail = 0;

    while (1) {
        printf("비밀번호: ");
        scanf("%d", &input);

        if (check(input)) {
            printf("로그인 성공\n");
            break;
        }
        else fail++;

        if (fail >= 3) {
            printf("로그인 시도 횟수 초과\n");
            break;
        }
    }

    return 0;
}
