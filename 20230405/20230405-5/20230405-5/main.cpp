#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	float AC;
	float AE;
	float BC;
	float DE;


	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf("%f", &BC);

	printf("�������� �׸��� ���̸� �Է��Ͻÿ�: ");
	scanf("%f", &AC);

	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
	scanf("%f", &AE);

	DE = AE * BC / AC;

	printf("�Ƕ�̵��� ���̴� %.2f�Դϴ�.\n", DE);

	return 0;



}