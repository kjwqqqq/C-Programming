#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_tax(int income)
{
	if (income<=1000)
	{
		return income * 0.08;
	}
	else if (income>1000)
	{
		return (1000 * 0.08) + (income - 1000) * 0.1;
	}
}

int main(void)
{
	int income;
	printf("�ҵ��� �Է��Ͻÿ�(����): ");
	scanf("%d", &income);
	int result;
	result = get_tax(income);
	printf("�ҵ漼�� %d�����Դϴ�.", result);
	return 0;
}