#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

void main()
{
    int x, y;
    bool z;

    printf("ù��° ������ �Է��ϼ��� : ");
    scanf("%d", &x);

    printf("�ι�° ������ �Է��ϼ��� : ");
    scanf("%d", &y);

    z = (x < y);

    if (z)
    {
        printf("%d = ��\n", z);
    }
    else
    {
        printf("%d = ����\n", z);
    }
}