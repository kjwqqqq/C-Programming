#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main()
{
	double x = 0;
	double y = 0;
	double z = 0;

	printf("3���� �Ǽ��� �Է����ּ���.\n");
	scanf("%lf", &x);
	scanf("%lf", &y);
	scanf("%lf", &z);

	if (x > y && x > z)
	{
		printf("���� ū ���� %.0lf �Դϴ�.", x);
	}
	else if (y > x && y > z)
	{
		printf("���� ū ���� %.0lf �Դϴ�.", y);
	}
	else if (z > x && z > y)
	{
		printf("���� ū ���� %.0lf �Դϴ�.", z);
	}

	if (x < y && x < z)
	{
		printf("���� ���� ���� %.0lf �Դϴ�.", x);
	}
	else if (y < x && y < z)
	{
		printf("���� ���� ���� %.0lf �Դϴ�.", y);
	}
	else if (z < x && z < y)
	{
		printf("���� ���� ���� %.0lf �Դϴ�.", z);
	}

	
}
