#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int num1, num2, num3;
	int max = 0, min = 0;

	printf("첫 번째 수 : ");
	scanf("%d", &num1);
	printf("두 번째 수 : ");
	scanf("%d", &num2);
	printf("세 번째 수 : ");
	scanf("%d", &num3);

	max = num1 > num2 ? num1 : num2;
	max = num3 > max ? num3 : max;

	min = num1 < num2 ? num1 : num2;
	min = num3 < min ? num3 : min;


	printf("최댓값 : %d\n", max);
	printf("최솟값 : %d\n", min);

}