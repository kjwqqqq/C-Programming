#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main()
{
	double a = 0.0, b = 0.0, c = 0.0, d = 0.0, e = 0.0, x = 0.0, y = 0.0;

	printf("5���� �Ǽ��� �Է����ּ���\n");
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf("%lf", &d);
	scanf("%lf", &e);


	x = a + b + c + d + e;
	printf("5���� �Ǽ��� ���� %.0lf �Դϴ�", x);

	y = x / 5;
	printf("5���� �Ǽ��� ����� %.0lf �Դϴ�", y);

}