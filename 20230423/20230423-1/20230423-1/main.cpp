#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int input_number;
	int i;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &input_number);

	printf("%d�� ��� : ", input_number);

	for (i = 1; i <= input_number; i++)
	{
		if (input_number % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");


}
