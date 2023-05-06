#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char a;

	printf("영문자를 입력하시오 :");
	scanf("%c", &a);

	if (a >= 'a' && a <= 'z')
	{
		printf("%c는 소문자입니다", a);
	}
	else if (a >= 'A' && a <= 'Z')
	{
		printf("%c는 소문자가 아닙니다", a);
	}
	else
	{
		printf("영문자이 아닙니다");
	}
}