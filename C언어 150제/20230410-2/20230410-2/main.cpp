#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int x = 1;
	double y = 3.141592;
	double z = 0;
	z = x + y;
	printf("%d + %.6lf = %.6lf", x, y, z);
	
}