#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main()
{
	double a = 0.0, b = 0.0, c = 0.0, d = 0.0, e = 0.0, x = 0.0, y = 0.0;

	printf("5개의 실수를 입력해주세요\n");
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf("%lf", &d);
	scanf("%lf", &e);


	x = a + b + c + d + e;
	printf("5개의 실수의 합은 %.0lf 입니다", x);

	y = x / 5;
	printf("5개의 실수의 평균은 %.0lf 입니다", y);

}