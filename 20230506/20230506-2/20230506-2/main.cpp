#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char a;

	printf("�����ڸ� �Է��Ͻÿ� :");
	scanf("%c", &a);

	if (a >= 'a' && a <= 'z')
	{
		printf("%c�� �ҹ����Դϴ�", a);
	}
	else if (a >= 'A' && a <= 'Z')
	{
		printf("%c�� �ҹ��ڰ� �ƴմϴ�", a);
	}
	else
	{
		printf("�������� �ƴմϴ�");
	}
}