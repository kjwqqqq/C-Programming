#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void main()
{
	int x, y, answer, i;
	srand((unsigned)time(NULL));
	for (i = 0; i < 10; i++)
	{
		x = rand() % 10;
		y = rand() % 10;
		printf("%d + %d = ", x, y);
		scanf("%d", &answer);
		if (x + y == answer)
			printf("¸Â¾Ñ½À´Ï´Ù.\n");
		else
			printf("Æ²·È½À´Ï´Ù.\n");
	}
}