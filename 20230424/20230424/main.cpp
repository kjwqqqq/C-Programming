#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define MAX_CAPACITY 500
#define MIN_LEVEL 20
#include <time.h>
#include <stdlib.h>

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
/*void main()
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
}*/


//9�� ����
/*void main()
{
    int x, y, i, a, b;
    printf("�ΰ��� ������ �Է��ϼ���: ");
    scanf("%d %d", &x, &y);

    for (i = 1; i <= x && i <= y; ++i)
    {
        if (x % i == 0 && y % i == 0)
            a = i;
    }

    b = (x * y) / a;

    printf("%d �� %d�� �ּ� �����: %d\n", x, y, b);
}*/


//10�� ����
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


//11�� ����
/*void main()
{
    int a = 100;
    char action;
    int b;

    printf("���翬�ᷮ: %d\n", a);

    while (1) {
        printf("���������� +, �Ҹ�� -�� �Է����ּ���: ");
        scanf(" %c%d", &action, &b);

        if (action == '+')
        {
            if (a + b > MAX_CAPACITY)
            {
                printf("�ִ� �뷮�� �ʰ��߽��ϴ�.\n");
            }
            else
            {
                a += b;
                printf("���� ���ᷮ: %d\n", a);
            }
        }
        else if (action == '-')
        {
            if (a - b < 0)
            {
                printf("���ᰡ �����մϴ�.\n");
            }
            else
            {
                a -= b;
                printf("���� ���ᷮ: %d\n", a);

                if (b < MIN_LEVEL)
                {
                    printf("(���) ���ᰡ %d���� �̸��Դϴ�.\n", MIN_LEVEL);
                }
            }
        }
    }
}*/


//12�� ����
/*void main()
{
    int n;
    do 
    {
        printf("������ ����(����: -1): ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    } while (n != -1);
}*/


//13�� ����
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
    printf("1���� %d������ ���� %d�Դϴ�.\n", i - 1, sum - i);
}*/

//14�� ����
/*void main()
{
	int f = 0, b = 1,c = 0, a = 0;

	printf("���° �ױ��� ���ұ��? ");
	scanf("%d", &f);

	for (int i = 0; i <= f; i++) 
	{
		printf("%d, ", a);
		c = a + b;
		a = b;
		b = c;
	}
}*/

//15�� ����
/*void main()
{
    int n = 0, r = 0, i = 0, a = 1, b = 1, result = 1;

    printf("n�� ��: ");
    scanf("%d", &n);
    printf("r�� ��: ");
    scanf("%d", &r);

    for (i = 1; i <= (n - r - 1); i++)
    {
        result *= i;
    }
    printf("������ ���� %d�Դϴ�.\n", result);
}*/

//16�� ����
/*void main()
{
    int n, d;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &n);
    do
    {
        d = n % 10;
        n /= 10;
        printf("%d", d);
    } while (n != 0);
}*/

//17�� ����
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
        printf("\n������ �����Ͻÿ�: ");
        scanf("%c", &op);

        if (op == 'Q')
            break;
        printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
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

//18�� ����
/*void main()
{
    int n;
    double sum = 0.0;
    printf("���� ����: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("������ ��: %lf\n", sum);
}*/


//19�� ����
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
        printf("�ݺ� Ƚ��: %d\n", (double)count / i * 4, i + 1);
    }

    pi = (double)count / n * 4;
    printf("����: \n", n, pi);
}*/

//20�� ����
void main()
{
    int sticks = 12;
    int num;
    srand(time(NULL));

    while (sticks > 0)
    {
        printf("���� ��ƽ ����: %d\n", sticks);
        printf("����ڴ� �� ���� ��ƽ�� ���������? (0~3��): ");
        scanf("%d", &num);
        while (num < 0 || num > 3 || num > sticks)
        {
            printf("�߸��� �Է��Դϴ�. 0~%d���� ��ƽ �߿��� �����ϼ���: ", sticks);
            scanf("%d", &num);
        }
        sticks -= num;
        if (sticks == 0)
        {
            printf("��ǻ�� �¸�\n");
            break;
        }
        printf("��ǻ�ʹ� %d���� ��ƽ�� ���������ϴ�.\n", rand() % (sticks > 3 ? 4 : sticks));
        sticks -= num;
        if (sticks == 0)
        {
            printf("�¸�\n");
            break;
        }
    }
}