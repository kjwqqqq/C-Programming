#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int n, m, random;

    printf("n�� m�� ���� �Է��ϼ��� : ");
    scanf("%d %d", &n, &m);

    srand(time(NULL));
    random = rand() % (m - n + 1) + n;

    printf("%d���� %d������ ����: %d\n", n, m, random);


}