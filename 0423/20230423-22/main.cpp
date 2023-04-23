#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void main()
{
	int i;
	for (i = 0; i < 10; i++)
	{

		if (i % 3 == 0)
			continue;
		printf("%d", i);
	}
}