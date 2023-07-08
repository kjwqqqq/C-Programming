#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*void main()
{
	printf("\n");
	int array[3];
	int i;

	array[0] = 100;
	array[1] = 200;
	array[2] = 300;

	for (i = 0; i < 3; i++)
	{
		printf("array[%d]ÀÇ °ª: %d\n", i, array[i]);
	}
	printf("\n");
}*/

/*void main()
{
	char arr[5];

	scanf("%s", arr);
	printf("arr : %s\n", arr);

}*/


/*void main()
{
	printf("ABCDE\0 FGHI");
	printf("0123456\0 7891011");
	printf("¤¡¤¤¤§\0 ¤©¤±¤²");
}*/

/*void main()
{
	char string1[10] = "ABCDEF";
	char string2[10] = "ABCDEF";
	char string3[10] = { 'A', 'B', 'C', 'D', 'F' };
	char string4[10] = { 'A', 'B', 'C', 'D', 'F', '\0' };

	printf("%s\n", string1);
	printf("%s\n", string2);
	printf("%s\n", string3);
	printf("%s\n", string4);
}*/

/*void main()
{
	int array2D[3][3] = { {1,1,1},{1,2,4},{1,3,9} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", array2D[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	int array3D[2][3][4] = { {{1,2,3,4},{4,5,6,7},{8,9,1,2}},{{4,5,6,7},{5,6,7,8},{9,1,2,3}} };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				printf("%d\t", array3D[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}*/

/*void func(int* arr, int len);

void main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };

	func(arr, sizeof arr / sizeof(int));
}

void func(int *arr, int len)
{
	int i;

	for (i = 0; i < 6; i++)
		printf("%d ", arr[i]);
	printf("\n");
}*/

/*void func(int arr[2][4], int rows);

int main()
{
	int arr[2][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };

	func(arr, 2);

	return 0;
}

void func(int arr[2][4], int rows)
{
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
}*/