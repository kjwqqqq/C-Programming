#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*void main()
{
	int a;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &a);

	if (a%2==0)
	{
		printf("¦���Դϴ�.");
	}
	else
	{
		printf("Ȧ���Դϴ�.");
	}
}*/

void main()
{
	int a;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &a);

	switch (a % 2)
	{
	case 0:
		printf("¦���Դϴ�.");
		break;
	case 1:
		printf("Ȧ���Դϴ�.");
	}
}