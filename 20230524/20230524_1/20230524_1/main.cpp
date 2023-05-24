#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int even(int n)
{
	if (n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int avsolute(int n)
{
	n = abs(n);
	return n;
}

int sign(int n)
{
	if (n>0)
	{
		return 1;
	}
	else if (n<0)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	int n = 0;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	printf("even()의 결과: %d\n", even(n));
	printf("absolute()의 결과: %d\n", avsolute(n));
	printf("sign()의 결과: %d\n", sign(n));
}