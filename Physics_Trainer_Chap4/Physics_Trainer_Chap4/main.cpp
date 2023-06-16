#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI


void Excersize_4_17(int solution, int answer)
{
    srand(time(NULL));
    double a = 0;
    double ��s = 0.8 +(rand() % (10 + 1) - 5) * 0.1;
    double ret = RAD2DEG(atan(��s));
    printf("\n\n");
    printf("4-17 \n");
    printf("������ ���� �Ϲ� ���� ���� ������ ���� ����� ��%6.2lf�̴�.\n\n", ��s);
    printf("(a) �ڵ����� ������ �� �ִ� �ִ� ������ ���ΰ�?\n\n");

    if (solution == SHOW)
    {
        printf("============================= Ǯ �� =============================\n\n");
        printf("(a) �ڵ����� ������ �� �ִ� �ִ� ������ ���ΰ�?\n\n");
        printf("���� ������ ������ ��2��Ģ\n");
        printf("��F : ��¥ ��, x : �Ÿ�, y : ����, m : ����, Ff : ������, Fg : ��ü�� �ۿ��ϴ� �߷�, ��s : �����������, Fn : �����׷�\n\n");
        printf("���� ���� �߱� ������ �������� �ʾ�  (��Fx , ��Fy, a) = 0 �Դϴ�.\n\n");
        printf("��F = m * a\n");
        printf("    = m * 0\n");
        printf("    = 0\n\n");
        printf("��Fy = Fn - mg * cos��\n");
        printf("     = 0\n\n");
        printf("Fn = mg * cos��\n\n");
        printf("��Fx = mg * sin�� - ��s * Fn\n");
        printf("     = (mg * sin��) - (��s * mg * cos��)\n");
        printf("     = 0\n\n");
        printf("��s * (mg * cos��) = (mg * sin��)\n\n");
        printf("��s = (mg * sin��) / (mg * cos��)\n");
        printf("    = sin�� / cos��\n");  
        printf("    = tan��\n\n");
        printf("tan�� = ��s\n\n");
        printf("�� = arctan(��s)\n");
        printf("   = arctan(%6.2lf)\n",��s);
        printf("   = %6.2lf��\n\n", ret);
    }   

    if (answer == SHOW)
    {
        printf("============================= �� �� =============================\n\n");
        printf("�� = %6.2lf��\n\n", ret);
    }
}

int main(void)
{
    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 4     ========================\n");
    printf("=================================================================\n");

    Excersize_4_17(Show_Solution, Answer);
}