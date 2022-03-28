#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    
    int num = 2, sum = 0;

    printf("정수를 입력해주세요 : ");
    scanf("%d", &num);

    while (num > sum+2) {
        sum += 2;
        printf("%d ", sum);
    }
    return 0;
}