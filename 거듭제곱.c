#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int num = 0, sum = 0, end = 2;

    printf("������ �Է����ּ��� : ");
    scanf("%d", &num);

    while (num > sum*2) {
        sum += end;
        end = sum;
        printf("%d ", sum);
    }
    return 0;
}