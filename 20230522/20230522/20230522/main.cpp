#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A[3][3] = {0};
	int B[3][3] = {0};
	int C[3][3] = {0};
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("A행렬에 %d행 %d열을 입력 : ", i + 1, j + 1);
			scanf("%d", &A[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("B행렬에 %d행 %d열을 입력 : ", i + 1, j + 1);
			scanf("%d", &B[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int z = 0; z < 3; z++)
			{
				C[i][j] += A[i][z] * B[z][j];
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%3d\t", C[i][j]);
		}
		printf("\n");
	}


	return 0;
}