#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define MAX_CAPACITY 500
#define MIN_LEVEL 20
#include <time.h>
#include <stdlib.h>

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
/*void main()
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
}*/


//9번 문제
/*void main()
{
    int x, y, i, a, b;
    printf("두개의 정수를 입력하세요: ");
    scanf("%d %d", &x, &y);

    for (i = 1; i <= x && i <= y; ++i)
    {
        if (x % i == 0 && y % i == 0)
            a = i;
    }

    b = (x * y) / a;

    printf("%d 와 %d의 최소 공배수: %d\n", x, y, b);
}*/


//10번 문제
/*void main()
{
    int j, i;
    for (i = 2; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            printf("%d ", i);
    }
}*/


//11번 문제
/*void main()
{
    int a = 100;
    char action;
    int b;

    printf("현재연료량: %d\n", a);

    while (1) {
        printf("연료충전은 +, 소모는 -로 입력해주세요: ");
        scanf(" %c%d", &action, &b);

        if (action == '+')
        {
            if (a + b > MAX_CAPACITY)
            {
                printf("최대 용량을 초과했습니다.\n");
            }
            else
            {
                a += b;
                printf("현재 연료량: %d\n", a);
            }
        }
        else if (action == '-')
        {
            if (a - b < 0)
            {
                printf("연료가 부족합니다.\n");
            }
            else
            {
                a -= b;
                printf("현재 연료량: %d\n", a);

                if (b < MIN_LEVEL)
                {
                    printf("(경고) 연료가 %d리터 미만입니다.\n", MIN_LEVEL);
                }
            }
        }
    }
}*/


//12번 문제
/*void main()
{
    int n;
    do 
    {
        printf("막대의 높이(종료: -1): ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    } while (n != -1);
}*/


//13번 문제
/*void main()
{
    int sum = 0;
    int i = 0;

    while (1)
    {
        sum += i;
        if (sum > 10000)
            break;
        i++;
    }
    printf("1부터 %d까지의 합이 %d입니다.\n", i - 1, sum - i);
}*/

//14번 문제
/*void main()
{
	int f = 0, b = 1,c = 0, a = 0;

	printf("몇번째 항까지 구할까요? ");
	scanf("%d", &f);

	for (int i = 0; i <= f; i++) 
	{
		printf("%d, ", a);
		c = a + b;
		a = b;
		b = c;
	}
}*/

//15번 문제
/*void main()
{
    int n = 0, r = 0, i = 0, a = 1, b = 1, result = 1;

    printf("n의 값: ");
    scanf("%d", &n);
    printf("r의 값: ");
    scanf("%d", &r);

    for (i = 1; i <= (n - r - 1); i++)
    {
        result *= i;
    }
    printf("순열의 값은 %d입니다.\n", result);
}*/

//16번 문제
/*void main()
{
    int n, d;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    do
    {
        d = n % 10;
        n /= 10;
        printf("%d", d);
    } while (n != 0);
}*/

//17번 문제
/*void main()
{
    char op;
    int a, b;
    printf("**********");
    printf("\nA----Add");
    printf("\nS----Subtract");
    printf("\nM----Multiply");
    printf("\nD----Divide");
    printf("\nQ----Qutit");
    printf("\n**********");
    do
    {
        printf("\n연산을 선택하시오: ");
        scanf("%c", &op);

        if (op == 'Q')
            break;
        printf("두 수를 공백으로 분리하여 입력하시오: ");
        scanf("%d %d", &a, &b);
        if (op == 'A')
        {
            printf("\n%d\n", a + b);
            break;
        }
        else if (op == 'S')
        {
            printf("\n%d\n", a - b);
            break;
        }
        else if (op == 'M')
        {
            printf("\n%d\n", a * b);
            break;
        }
        else if (op == 'D')
        {
            printf("\n%d\n", a / b);
            break;
        }
    } while (1);
}*/

//18번 문제
/*void main()
{
    int n;
    double sum = 0.0;
    printf("항의 개수: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("수열의 합: %lf\n", sum);
}*/


//19번 문제
/*void main()
{
    int i, n, count = 0;
    double x, y, pi;

    srand(time(NULL));


    for (i = 0; i < n; i++)
    {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        if (x * x + y * y <= 1) count++;
        printf("반복 횟수: %d\n", (double)count / i * 4, i + 1);
    }

    pi = (double)count / n * 4;
    printf("파이: \n", n, pi);
}*/

//20번 문제
void main()
{
    int sticks = 12;
    int num;
    srand(time(NULL));

    while (sticks > 0)
    {
        printf("현재 스틱 개수: %d\n", sticks);
        printf("사용자는 몇 개의 스틱을 가져갈까요? (0~3개): ");
        scanf("%d", &num);
        while (num < 0 || num > 3 || num > sticks)
        {
            printf("잘못된 입력입니다. 0~%d개의 스틱 중에서 선택하세요: ", sticks);
            scanf("%d", &num);
        }
        sticks -= num;
        if (sticks == 0)
        {
            printf("컴퓨터 승리\n");
            break;
        }
        printf("컴퓨터는 %d개의 스틱을 가져갔습니다.\n", rand() % (sticks > 3 ? 4 : sticks));
        sticks -= num;
        if (sticks == 0)
        {
            printf("승리\n");
            break;
        }
    }
}