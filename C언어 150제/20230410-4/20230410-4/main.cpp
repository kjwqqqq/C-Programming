#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int x;
	int y;
	x = 0;
	y = 0;
	printf("x값에 변수를 입력하시오. : \n");
	scanf("%d", &x);
	printf("y값에 변수를 입력하시오. : \n");
	scanf("%d", &y);
	if (x > y)
	{
		printf("x의 값이 y의 값보다 큽니다.");
	}
	else
	{
		printf("x의 값이 y의 값보다 작습니다.");
	}

}