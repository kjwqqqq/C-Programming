#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_alpha(char c)
{
	if (c>='a'&&c<='z')
	{
		printf("%c�� ���ĺ� �����Դϴ�.\n", c);
	}
	return 0;
}

int main(void)
{
	char c;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &c);
	check_alpha(c);
	return 0;
}