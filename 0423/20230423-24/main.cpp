#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void main()
{
	double divisor, divident, sum;
	int loop_count;
	divisor = 1.0;
	divident = 4.0;
	sum = 0.0;
	printf("반복횟수: ");
	scanf("%d", &loop_count);
	while (loop_count > 0)
	{
		sum = sum + divident / divisor;
		divident = -1.0 * divident;
		divisor = divisor + 2;
		loop_count--;
	}
	printf("파이값 = %f\n", sum);


}