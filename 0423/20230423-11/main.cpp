#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int number, sum = 0;

	do
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &number);
		sum += number;
	} while (number != 0);
	printf("���ڵ��� �� = %d \n", sum);
}