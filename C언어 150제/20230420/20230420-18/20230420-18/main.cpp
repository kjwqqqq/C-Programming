#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int n, m, random;

    printf("n과 m의 값을 입력하세요 : ");
    scanf("%d %d", &n, &m);

    srand(time(NULL));
    random = rand() % (m - n + 1) + n;

    printf("%d에서 %d까지의 난수: %d\n", n, m, random);


}