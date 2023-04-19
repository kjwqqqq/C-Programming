#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x, y, answer, i;
	srand(time(NULL));

	for (i = 0; i < 10; i++) {
		x = rand() % 5;
		y = rand() % 5;
		printf("%d + %d =", x, y);
		scanf("%d", &answer);
		if (x + y == answer)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");
	}
	return 0; 
}