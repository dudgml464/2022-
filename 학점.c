#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    float num;
    printf("������ �Է����ּ��� : ");
    scanf("%f", &num);

    switch((int)num)
    {
        case 4:
            printf("���б� �޾ư�����.");
            break;
        case 3:
            printf("���� �б⸦ �غ��ϼ���.");
            break;
        case 2:
            printf("���� �б⿡ ����ϼ���.");
            break;
        case 1:
            printf("���� �б⿡ ������ϼ���.");
            break;
    }
    return 0;
}