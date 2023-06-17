#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
	printf("\n\n\n\n\n");
	int a = 0;
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("방향 동북 일때 각도가 %d이면 θ값은 %d이다.\n\n", a, a);
	}
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("방향 동남 일때 각도가 %d이면 θ값은 %d이다.\n\n", a, -a);
	}
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("방향 서북 일때 각도가 %d이면 θ값은 %d이다.\n\n", a, 180 - a);
	}
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("방향 서남 일때 각도가 %d이면 θ값은 %d이다.\n\n", a, a - 180);
	}
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("방향 북동 일때 각도가 %d이면 θ값은 %d이다.\n\n", a, 90 - a);
	}
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("방향 북서 일때 각도가 %d이면 θ값은 %d이다.\n\n", a, 90 + a);
	}
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("방향 남동 일때 각도가 %d이면 θ값은 %d이다.\n\n", a, a - 90);
	}
	for (int i = 0; i < 1; i++)
	{
		a = rand() % 91;
		printf("방향 남서 일때 각도가 %d이면 θ값은 %d이다.\n\n", a, -(a + 90));
	}
}