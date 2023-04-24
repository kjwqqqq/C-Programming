#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int x, y, op, result;

    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        x = rand() % 10;
        y = rand() % 10;
        op = rand() % 5;

        switch (op)
        {
        case 0:
            result = x + y;
            printf("%d 더하기 %d는 %d입니다.\n", x, y, result);
            break;
        case 1:
            result = x - y;
            printf("%d 빼기 %d는 %d입니다.\n", x, y, result);
            break;
        case 2:
            result = x * y;
            printf("%d 곱하기 %d는 %d입니다.\n", x, y, result);
            break;
        case 3:
            if (y == 0)
            {
                printf("0으로 나눌 수 없습니다.\n");
            }
            else
            {
                result = x / y;
                printf("%d 나누기 %d는 %d입니다.\n", x, y, result);
            }
            break;
        case 4:
            if (y == 0)
            {
                printf("0으로 나눌 수 없습니다.\n");
            }
            else
            {
                result = x % y;
                printf("%d 나머지 %d는 %d입니다.\n", x, y, result);
            }
            break;
        }
    }
}