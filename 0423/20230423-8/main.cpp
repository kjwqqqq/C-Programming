#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int n, grade;
	double sum, average;

	n = 0;
	sum = 0;
	grade = 0;

	printf("종료하려면 음수를 입력하시오\n");

	while (grade >= 0)
	{
		printf("성적을 입력하시오: ");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}
	sum = sum - grade;
	n--;

	average = sum / n;
	printf("성적의 평균은 %lf입니다.\n", average);
}