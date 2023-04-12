#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int x = 0, y = 0;

	printf("x값에 10을 대입하세요. \n", x);
	scanf("%d", &x);
	printf("x값에 5를 빼시요. \n", y);
	scanf("%d", &y);
	printf("%d - %d = %d", x, y, x-y);
}