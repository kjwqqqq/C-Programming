#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int x = 0, y = 0;

	printf("x���� 10�� �����ϼ���. \n", x);
	scanf("%d", &x);
	printf("x���� 5�� ���ÿ�. \n", y);
	scanf("%d", &y);
	printf("%d - %d = %d", x, y, x-y);
}