#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int cnt, num, i, j;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	for (i = 2; i <= 100; i++)
	{
		cnt = 0;
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
				cnt++;
		}
		if (cnt == 1) // �������� ���� 1�� ���� ���
			printf("%d", i);

	}
}