#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

void main()
{
    int x, y;
    bool z;

    printf("첫번째 정수를 입력하세요 : ");
    scanf("%d", &x);

    printf("두번째 정수를 입력하세요 : ");
    scanf("%d", &y);

    z = (x < y);

    if (z)
    {
        printf("%d = 참\n", z);
    }
    else
    {
        printf("%d = 거짓\n", z);
    }
}