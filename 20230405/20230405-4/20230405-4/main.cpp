#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	float PI = 3.141592;
	float A;
	float V;
	float r;


	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%f", &r);


	A = 4.0 * PI * r * r;

	V = 4.0 / 3.0 * PI * r * r * r;

	printf("ǥ������ %.2f�Դϴ�.\n", A);

	printf("ü���� %.2f�Դϴ�.\n", V);

	return 0;
}