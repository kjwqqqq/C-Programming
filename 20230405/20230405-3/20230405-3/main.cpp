#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int x = 0, a = 0, b = 0;


	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	a = x / 10;
	b = x % 10;

	
	printf("십의 자리: %d\n", a);
	
	printf("일의 자리: %d\n", b);
	
	
	return 0;
}