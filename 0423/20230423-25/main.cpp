#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void main()
{
	int i, years;
	double total, rate, investment;
	printf("����: ");
	scanf("%lf", &investment);
	printf("����(%%): ");
	scanf("%lf", &rate);
	printf("�Ⱓ(��): ");
	scanf("%lf", &years);
	printf("========================\n");
	printf("���� ������\n");
	printf("========================\n");
	total = investment;
	rate /= 100.0;
	for (i = 0; i < years; i++)
	{
		total = total * (1 + rate);
		printf("%2d  %10.1f\n", i + 1, total);
	}
}