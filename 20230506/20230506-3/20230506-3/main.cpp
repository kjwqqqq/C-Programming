#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*void main()
{
	float a;

	printf("������ �Է��Ͻÿ� :");
	scanf("%f", &a);

	if (a >= 90)
	{
		printf("%f�� A\n", a);
	}
	else if (a >= 80)
	{
		printf("%f�� B\n", a);
	}
	else if (a >= 70)
	{
		printf("%f�� C\n", a);
	}
	else if (a >= 60)
	{
		printf("%f�� D\n", a);
	}
	else
	{
		printf("F");
	}
}*/

void main()
{
	int a,b;
	

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &a);

	b = a / 10;

	switch (b)
	{
	case 9:
		printf("%d�� A�Դϴ�", a);
		break;
	case 8:
		printf("%d�� B�Դϴ�", a);
		break;
	case 7:
		printf("%d�� C�Դϴ�", a);
		break;
	case 6:
		printf("%d�� D�Դϴ�", a);
		break;
	default:
		printf("%d�� F�Դϴ�", a);
		break;
	}
}