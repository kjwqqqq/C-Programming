#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int age = 0;
	printf("�մ� ����Դϱ�? : ");
	scanf("%d", &age);
	
	if (age < 20) 
	{
		printf("30%%�� ���ι޽��ϴ�.");
	}
	else
	{
		printf("�����Դϴ�.");
	}
}