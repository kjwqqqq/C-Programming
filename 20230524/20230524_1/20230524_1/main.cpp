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
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("even()�� ���: %d\n", even(n));
	printf("absolute()�� ���: %d\n", avsolute(n));
	printf("sign()�� ���: %d\n", sign(n));
}