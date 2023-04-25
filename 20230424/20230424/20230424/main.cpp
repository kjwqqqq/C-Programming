#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


//1번 문제
/*void main()
{
	int i = 10;
	printf("카운터의 초기값을 입력하시요(단위: 초): %d\n", i);
	for (i; i > 0; i--)
	{
		printf("%d\n", i);
	}
}*/


//2번 문제
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
    printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.\n", sum);
}*/


//3번 문제
/*void main()
{
    int x, y, z, sum;
    printf("숫자를 입력하시오 : ");
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
    printf("합계는 %d입니다.",sum);
    
}*/

//4번 문제
/*void main()
{
    int x, i;
    printf("정수를 입력하시오: ");
    scanf("%d", &x);

    printf("약수: ", x);
    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}*/


//5번 문제
/*void main()
{
    int x = 0, y = 0, i = 1, z = 0;

    printf("실수의 값을 입력하시오: ");
    scanf("%d", &x);
    printf("거듭 제곱 횟수를 입력하시오: ");
    scanf("%d", &y);

    for (i; i <= y; i++)
    {
        z = pow(x, y);
    }
    
    printf("결과값은 %d\n",z);
        
   
}*/


//6번 문제
/*void main()
{
    int a = 0, b = 0, i = 1;
    printf("n의 값을 입력하시오: ");
    scanf("%d", &a);

    for (i; i <= a; i++)
    {
        b += i*i ;
    }
    printf("계산값은 %d", b);
}*/


//7번 문제
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


//8번 문제
void main()
{
    int n;
    printf("정수를 입력하시오: ");
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