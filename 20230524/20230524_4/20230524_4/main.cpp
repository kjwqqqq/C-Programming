#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint()
{
	int n = 0;
	n = 10 + rand() % 81;
	return n;
}

int main(void)
{
	srand((unsigned)time(NULL));
	for (int  i = 0; i < 11; i++)
	{
		printf("%d ", randint());
	}
	return 0;
}