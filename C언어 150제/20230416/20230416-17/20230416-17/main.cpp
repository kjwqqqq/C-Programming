#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int num[5];
    int i, sum = 0;
    double avg;

    for (i = 0; i < 5; i++) {
        printf("���ڸ� �Է��ϼ��� : ");
        scanf("%d", &num[i]);

        sum += num[i];
    }

    avg = sum / 5.0;

    printf("���� %d, ����� %lf �Դϴ�.", sum, avg);

 }