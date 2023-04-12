#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;

	printf("정수를 입력해 주시오. : ");
	scanf("%d", &x);

	if (x < 0)
	{
		x = -x;
	}

	printf("입력한 정수의 절대값은 : %d\n", x);
}