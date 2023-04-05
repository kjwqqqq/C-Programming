#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	float AC;
	float AE;
	float BC;
	float DE;


	printf("지팡이의 높이를 입력하시오: ");
	scanf("%f", &BC);

	printf("지팡이의 그림자 길이를 입력하시오: ");
	scanf("%f", &AC);

	printf("피라미드까지의 거리를 입력하시오: ");
	scanf("%f", &AE);

	DE = AE * BC / AC;

	printf("피라미드의 높이는 %.2f입니다.\n", DE);

	return 0;



}