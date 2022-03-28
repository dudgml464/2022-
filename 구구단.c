#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int i, num;

    printf("몇단을 하실건가요?-> ");
    scanf("%d", &num);

    for (i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}