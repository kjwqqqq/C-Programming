#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int x = 0, a = 0, b = 0;


	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	a = x / 10;
	b = x % 10;

	
	printf("���� �ڸ�: %d\n", a);
	
	printf("���� �ڸ�: %d\n", b);
	
	
	return 0;
}