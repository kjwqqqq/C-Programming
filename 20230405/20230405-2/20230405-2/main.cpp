#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int cm = 0, feet = 0;
	double inch;

	printf("Ű�� �Է��ϼ���(cm): ");
	scanf("%d", &cm);

	inch = double(cm) / 2.54;
	feet = inch / 12;
	inch = inch - double(feet) * 12;

	printf("%dcm�� %d��Ʈ %.2lf��ġ �Դϴ�. \n", cm, feet, inch);

	return 0;
}