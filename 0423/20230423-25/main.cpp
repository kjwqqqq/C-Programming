#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void main()
{
	int i, years;
	double total, rate, investment;
	printf("원금: ");
	scanf("%lf", &investment);
	printf("이율(%%): ");
	scanf("%lf", &rate);
	printf("기간(년): ");
	scanf("%lf", &years);
	printf("========================\n");
	printf("연도 원리금\n");
	printf("========================\n");
	total = investment;
	rate /= 100.0;
	for (i = 0; i < years; i++)
	{
		total = total * (1 + rate);
		printf("%2d  %10.1f\n", i + 1, total);
	}
}