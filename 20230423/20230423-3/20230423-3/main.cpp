#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int x = 0, y = 1, z, n;

    printf("���° �ױ��� ���ұ��? : ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d, ", x);
        z = x + y;
        x = y;
        y = z;
    }
}