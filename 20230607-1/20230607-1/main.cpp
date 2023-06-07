#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(void)
{
	srand((unsigned)time(NULL));
	int freq[SIZE] = { 0 };
	int i;
	for (i = 0; i < 30000; i++)
	{
		++freq[rand() % 100];
	}

	printf("===============================\n");
	printf("¼ýÀÚ		ºóµµ\n");
	printf("===============================\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%3d		%3d\n", i, freq[i]);
	}

	return 0;

}