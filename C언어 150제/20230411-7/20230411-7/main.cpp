#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float x;
	int y;

	printf("ü���µ��� �Է��� �ּ���. : ");
	scanf("%f", &x);
	printf("���� ���� �ϼ��� �Է��� �ּ��� : ");
	scanf("%d", &y);

	if (x >= 33 and x < 35 and y >= 2)
	{
		printf("�������Ǻ� �Դϴ�. \n");
	}
	else if (x >= 35.0 and y >= 2)
	{
		printf("�����溸 �Դϴ�. \n");
	}
	else
	{
		printf("�������Ǻ��� �����溸 �ҽ��� �����ϴ�. \n");
	}
}