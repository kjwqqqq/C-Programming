#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*void main()
{
	int a;

	printf("정수를 입력하시요 : ");
	scanf("%d", &a);

	if (a%2==0)
	{
		printf("짝수입니다.");
	}
	else
	{
		printf("홀수입니다.");
	}
}*/

void main()
{
	int a;

	printf("정수를 입력하시요 : ");
	scanf("%d", &a);

	switch (a % 2)
	{
	case 0:
		printf("짝수입니다.");
		break;
	case 1:
		printf("홀수입니다.");
	}
}