#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int num1, num2, num3;
	int max = 0, min = 0;

	printf("ù ��° �� : ");
	scanf("%d", &num1);
	printf("�� ��° �� : ");
	scanf("%d", &num2);
	printf("�� ��° �� : ");
	scanf("%d", &num3);

	max = num1 > num2 ? num1 : num2;
	max = num3 > max ? num3 : max;

	min = num1 < num2 ? num1 : num2;
	min = num3 < min ? num3 : min;


	printf("�ִ� : %d\n", max);
	printf("�ּڰ� : %d\n", min);

}