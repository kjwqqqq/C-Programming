#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int x;

    printf("���� �־��ּ��� : ");
    scanf("%d", &x);

    if (x >= 500)
    {
        printf("������� ���Խ��ϴ�. \n");
        if (x > 500)
        {
            printf("%d���� ��ȯ�Ǿ����ϴ�. \n", x - 500);
        }
    }
    else
    {
        printf("%d���� ��ȯ�Ǿ����ϴ�.\n", x);
    }
}