#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*void main()
{
	float a;

	printf("점수를 입력하시오 :");
	scanf("%f", &a);

	if (a >= 90)
	{
		printf("%f는 A\n", a);
	}
	else if (a >= 80)
	{
		printf("%f는 B\n", a);
	}
	else if (a >= 70)
	{
		printf("%f는 C\n", a);
	}
	else if (a >= 60)
	{
		printf("%f는 D\n", a);
	}
	else
	{
		printf("F");
	}
}*/

void main()
{
	int a,b;
	

	printf("점수를 입력하시오 : ");
	scanf("%d", &a);

	b = a / 10;

	switch (b)
	{
	case 9:
		printf("%d는 A입니다", a);
		break;
	case 8:
		printf("%d는 B입니다", a);
		break;
	case 7:
		printf("%d는 C입니다", a);
		break;
	case 6:
		printf("%d는 D입니다", a);
		break;
	default:
		printf("%d는 F입니다", a);
		break;
	}
}