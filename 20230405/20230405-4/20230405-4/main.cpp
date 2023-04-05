#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	float PI = 3.141592;
	float A;
	float V;
	float r;


	printf("구의 반지름을 입력하시오: ");
	scanf("%f", &r);


	A = 4.0 * PI * r * r;

	V = 4.0 / 3.0 * PI * r * r * r;

	printf("표면적은 %.2f입니다.\n", A);

	printf("체적은 %.2f입니다.\n", V);

	return 0;
}