#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
	printf("\n\n\n\n\n");
	int a = 0;
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("���� ���� �϶� ������ %d�̸� �谪�� %d�̴�.\n\n", a, a);
	}
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("���� ���� �϶� ������ %d�̸� �谪�� %d�̴�.\n\n", a, -a);
	}
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("���� ���� �϶� ������ %d�̸� �谪�� %d�̴�.\n\n", a, 180 - a);
	}
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("���� ���� �϶� ������ %d�̸� �谪�� %d�̴�.\n\n", a, a - 180);
	}
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("���� �ϵ� �϶� ������ %d�̸� �谪�� %d�̴�.\n\n", a, 90 - a);
	}
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("���� �ϼ� �϶� ������ %d�̸� �谪�� %d�̴�.\n\n", a, 90 + a);
	}
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("���� ���� �϶� ������ %d�̸� �谪�� %d�̴�.\n\n", a, a - 90);
	}
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("���� ���� �϶� ������ %d�̸� �谪�� %d�̴�.\n\n", a, -(a + 90));
	}
}