#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int balance = 0;

void checkBalance()
{
    printf("잔고는 %d 원입니다.\n", balance);
}

void deposit()
{
    int a;
    printf("입금할 금액을 입력하세요: ");
    scanf("%d", &a);
    if (a > 0)
    {
        balance += a;
        printf("%d 원이 입금되었습니다.\n", a);
        printf("잔고는 %d 원 입니다.", balance);
    }
    else
    {
        printf("*********** 오류 ***********\n");
    }
}

void withdraw()
{
    int a;
    printf("출금할 금액을 입력하세요: ");
    scanf("%d", &a);
    if (a > 0 && a <= balance)
    {
        balance -= a;
        printf("%d 원이 출금되었습니다.\n", a);
        printf("잔고는 %d 원 입니다.", balance);
    }
    else
    {
        printf("*********** 오류 ***********\n");
    }
}

int main()
{
    int coin;

    while (1)
    {
        printf("*********** Welcome to Express ATM ***********\n");
        printf("<1> 잔액\n");
        printf("<2> 입금\n");
        printf("<3> 출금\n");
        printf("<4> 종료\n");
        printf("메뉴를 선택하시오: ");
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
            printf("*********** 이용해주셔서 감사합니다. ***********\n");
            return 0;
        default:
            printf("*********** 오류 ***********\n");
        }
        printf("\n");
    }
}