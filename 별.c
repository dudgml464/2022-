#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int num = 0, sum = 0;

    printf("���� ������ �Է����ּ��� : ");
    scanf("%d", &num);

    while (num > sum) {
        printf("*\n");
        sum++;
    }
    return 0;
}