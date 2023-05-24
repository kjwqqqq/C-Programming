#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int balance = 0;

void checkBalance()
{
    printf("�ܰ�� %d ���Դϴ�.\n", balance);
}

void deposit()
{
    int a;
    printf("�Ա��� �ݾ��� �Է��ϼ���: ");
    scanf("%d", &a);
    if (a > 0)
    {
        balance += a;
        printf("%d ���� �ԱݵǾ����ϴ�.\n", a);
        printf("�ܰ�� %d �� �Դϴ�.", balance);
    }
    else
    {
        printf("*********** ���� ***********\n");
    }
}

void withdraw()
{
    int a;
    printf("����� �ݾ��� �Է��ϼ���: ");
    scanf("%d", &a);
    if (a > 0 && a <= balance)
    {
        balance -= a;
        printf("%d ���� ��ݵǾ����ϴ�.\n", a);
        printf("�ܰ�� %d �� �Դϴ�.", balance);
    }
    else
    {
        printf("*********** ���� ***********\n");
    }
}

int main()
{
    int coin;

    while (1)
    {
        printf("*********** Welcome to Express ATM ***********\n");
        printf("<1> �ܾ�\n");
        printf("<2> �Ա�\n");
        printf("<3> ���\n");
        printf("<4> ����\n");
        printf("�޴��� �����Ͻÿ�: ");
        scanf("%d", &coin);

        switch (coin)
        {
        case 1:
            checkBalance();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            printf("*********** �̿����ּż� �����մϴ�. ***********\n");
            return 0;
        default:
            printf("*********** ���� ***********\n");
        }
        printf("\n");
    }
}