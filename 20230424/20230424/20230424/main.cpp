#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


//1�� ����
/*void main()
{
	int i = 10;
	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�(����: ��): %d\n", i);
	for (i; i > 0; i--)
	{
		printf("%d\n", i);
	}
}*/


//2�� ����
/*void main()
{
    int sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i%3==0)
        {
            sum += i;

        }
    }
    printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�.\n", sum);
}*/


//3�� ����
/*void main()
{
    int x, y, z, sum;
    printf("���ڸ� �Է��Ͻÿ� : ");
    scanf("%d %d %d", &x,&y,&z);


    sum = 0;
    if (x>=0)
    {
        sum += x;
    }
    if (y >= 0)
    {
        sum += y;
    }
    if (z >= 0)
    {
        sum += z;
    }
    printf("�հ�� %d�Դϴ�.",sum);
    
}*/

//4�� ����
/*void main()
{
    int x, i;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &x);

    printf("���: ", x);
    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}*/


//5�� ����
/*void main()
{
    int x = 0, y = 0, i = 1, z = 0;

    printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
    scanf("%d", &x);
    printf("�ŵ� ���� Ƚ���� �Է��Ͻÿ�: ");
    scanf("%d", &y);

    for (i; i <= y; i++)
    {
        z = pow(x, y);
    }
    
    printf("������� %d\n",z);
        
   
}*/


//6�� ����
/*void main()
{
    int a = 0, b = 0, i = 1;
    printf("n�� ���� �Է��Ͻÿ�: ");
    scanf("%d", &a);

    for (i; i <= a; i++)
    {
        b += i*i ;
    }
    printf("��갪�� %d", b);
}*/


//7�� ����
/*void main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/


//8�� ����
void main()
{
    int n;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}