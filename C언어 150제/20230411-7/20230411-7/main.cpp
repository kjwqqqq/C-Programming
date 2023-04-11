#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float x;
	int y;

	printf("체감온도를 입력해 주세요. : ");
	scanf("%f", &x);
	printf("예상 지속 일수를 입력해 주세요 : ");
	scanf("%d", &y);

	if (x >= 33 and x < 35 and y >= 2)
	{
		printf("폭염주의보 입니다. \n");
	}
	else if (x >= 35.0 and y >= 2)
	{
		printf("폭염경보 입니다. \n");
	}
	else
	{
		printf("폭염주의보와 폭염경보 소식이 없습니다. \n");
	}
}