#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int x;
	int y;
	x = 0;
	y = 0;
	printf("x���� ������ �Է��Ͻÿ�. : \n");
	scanf("%d", &x);
	printf("y���� ������ �Է��Ͻÿ�. : \n");
	scanf("%d", &y);
	if (x > y)
	{
		printf("x�� ���� y�� ������ Ů�ϴ�.");
	}
	else
	{
		printf("x�� ���� y�� ������ �۽��ϴ�.");
	}

}