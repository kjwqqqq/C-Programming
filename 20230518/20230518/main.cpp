#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)
{
	int A[3][3] = {0};
	int B[3][3] = {0};
	int C[3][3] = {0};
	int a;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("A��Ŀ� %d�� %d���� �Է� : ", i + 1, j + 1);
			scanf("%d", &A[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("B��Ŀ� %d�� %d���� �Է� : ", i + 1, j + 1);
			scanf("%d", &B[i][j]);
		}
		printf("\n");
	}

	printf("��� a�� �Է�: ");
	scanf("%d", &a);
	printf("\n");

	printf("��� (A) + ��� (B) = \n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			C[i][j] = A[i][j] + B[i][j];
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("��� (A) - ��� (B) = \n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			C[i][j] = A[i][j] - B[i][j];
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("��� (C) = a ��� (A) = \n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			C[i][j] = a * A[i][j];
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}