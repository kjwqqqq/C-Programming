#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int n, grade;
	double sum, average;

	n = 0;
	sum = 0;
	grade = 0;

	printf("�����Ϸ��� ������ �Է��Ͻÿ�\n");

	while (grade >= 0)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}
	sum = sum - grade;
	n--;

	average = sum / n;
	printf("������ ����� %lf�Դϴ�.\n", average);
}