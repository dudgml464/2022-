#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    
    int num = 2, sum = 0;

    printf("������ �Է����ּ��� : ");
    scanf("%d", &num);

    while (num > sum+2) {
        sum += 2;
        printf("%d ", sum);
    }
    return 0;
}