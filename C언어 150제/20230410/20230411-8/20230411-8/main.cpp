#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int x;

    printf("돈을 넣어주세요 : ");
    scanf("%d", &x);

    if (x >= 500)
    {
        printf("음료수가 나왔습니다. \n");
        if (x > 500)
        {
            printf("%d원이 반환되었습니다. \n", x - 500);
        }
    }
    else
    {
        printf("%d원이 반환되었습니다.\n", x);
    }
}