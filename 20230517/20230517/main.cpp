#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int get_integer(void)
{
	int n;

	printf("정수를 입력하시오 : ");
	scanf("%d", &n);
	return n;
}
int is_prime(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
void main()
{
	int n;
	n = get_integer();
	if (is_prime(n) == 1)
	{
		printf("%d은 소수입니다.\n", n);
	}
	else
	{
		printf("%d은 소수가 아닙니다.\n", n);
	}
}*/

/*
int get_integer(void)
{
	int n;

	do
	{
		printf("양수입력 : ");
		scanf("%d", &n);
	} while (n<=0);
	return n;
}
int is_prime(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
				return 0;
		}
	}
	return 1;
}
void main()
{
	int n;
	n = get_integer();
	if (is_prime(n)==1)
	{
		printf("%d은 소수입니다.\n", n);
	}
	else
	{
		printf("%d은 소수가 아닙니다.\n", n);
	}
}*/

int get_integer(void)
{
	int n;
	do {
		printf("1부터 구할 소수의 구간을 알려주세요.: ");
		scanf("%d", &n);

	} while (n <= 0);

	return n;
}

int is_prime(int n)
{
	int i;
	int j;
	for (i = 2; i < n; i++)
	{
		for (j = 2; j < i; j++) {

			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

int main(void)
{
	int n;
	n = get_integer();


	is_prime(n);


	return 0;
}