#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;

	printf("������ �Է��� �ֽÿ�. : ");
	scanf("%d", &x);

	if (x < 0)
	{
		x = -x;
	}

	printf("�Է��� ������ ���밪�� : %d\n", x);
}