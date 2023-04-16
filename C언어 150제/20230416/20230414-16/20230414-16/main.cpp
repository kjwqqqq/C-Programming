#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main()
{
	double x = 0;
	double y = 0;
	double z = 0;

	printf("3개의 실수를 입력해주세요.\n");
	scanf("%lf", &x);
	scanf("%lf", &y);
	scanf("%lf", &z);

	if (x > y && x > z)
	{
		printf("가장 큰 수는 %.0lf 입니다.", x);
	}
	else if (y > x && y > z)
	{
		printf("가장 큰 수는 %.0lf 입니다.", y);
	}
	else if (z > x && z > y)
	{
		printf("가장 큰 수는 %.0lf 입니다.", z);
	}

	if (x < y && x < z)
	{
		printf("가장 작은 수는 %.0lf 입니다.", x);
	}
	else if (y < x && y < z)
	{
		printf("가장 작은 수는 %.0lf 입니다.", y);
	}
	else if (z < x && z < y)
	{
		printf("가장 작은 수는 %.0lf 입니다.", z);
	}

	
}
