#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int num = 0, sum = 0;

    printf("양의 정수를 입력해주세요 : ");
    scanf("%d", &num);

    while (num > sum) {
        printf("*\n");
        sum++;
    }
    return 0;
}