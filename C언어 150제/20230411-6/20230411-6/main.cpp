#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int age = 0;
	printf("손님 몇살입니까? : ");
	scanf("%d", &age);
	
	if (age < 20) 
	{
		printf("30%%를 할인받습니다.");
	}
	else
	{
		printf("정가입니다.");
	}
}