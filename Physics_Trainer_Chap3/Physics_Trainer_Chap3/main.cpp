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


void Excersize_3_10(int solution, int answer)
{
	srand(time(NULL));
	double angle = 45 + rand() % (4 + 1) - 2;
	double y = 3.7 + rand() % (3 + 1) - 1;
	double vy = 0;
	double v0y = 0;
	double v0 = 0;
	double g = 9.8;
	v0y = sqrt(2 * g * y);
	v0 = v0y / sin(angle * M_PI / 180);
	printf("\n\n");
	printf("3-10 \n");
	printf("������ �ձ����� ���� ���� ������ ǥ���ε� %6.2lf���� ������\n", angle);
	printf("�پ������ %6.2lfm�� ���̸� �ö󰣴�. �� ���̸� �پ���� ��\n", y);
	printf("�ִ� ó���ӵ��� ���ΰ�?\n\n");
	printf("(a) ǥ���� �پ���� �� �ִ� ó�����̼ӵ��� ���ΰ�?\n\n");
	printf("(b) ǥ���� �پ���� �� �ִ� ó���ӵ��� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("============================= Ǯ �� =============================\n\n");
		printf("(a) ǥ���� �پ���� �� �ִ� ó���ӵ��� ���ΰ�?\n\n");
		printf("���� ������ vy^2 - v0y^2 = 2 * a * ��y\n");
		printf("vy�� ���߳��̼ӵ�, v0y�� ó�����̼ӵ�, a�� ���ӵ�, ��y�� ���̺�ȭ��\n\n");
		printf("  vy^2    - v0y^2 = -2 * g * ��y\n");
		printf("%6.2lfm/s - v0y^2 = -2 * %6.2lfm/s^2 * %6.2lfm\n\n", vy, g, y);
		printf("v0y = sqrt(2 * %6.2lfm/s^2 * %6.2lfm)\n", g, y);
		printf("    = %6.2lfm/s\n\n", v0y);
	}

	if (answer == SHOW)
	{
		printf("============================= �� �� =============================\n\n");
		printf("v0y = %6.2lfm/s\n\n", v0y);
	}

	if (solution == SHOW)
	{
		printf("=========================   Ǯ ��   =============================\n\n");
		printf("(b) ǥ���� �پ���� �� �ִ� ó���ӵ��� ���ΰ�?\n\n");
		printf("���� ���� v0 = v0y / sin(��)\n");
		printf("v0 : ó���ӵ�, v0y : ó�����̼ӵ�\n\n");
		printf("v0 = v0y / sin(��)\n");
		printf("   = %6.2lfm / sin(%6.2lf��)\n",v0y,angle);
		printf("   = %6.2lfm/s\n\n",v0);
		
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		printf("v0 = %6.2lfm/s\n\n",v0);
		printf("=================================================================\n\n");
	}
}

void Excersize_3_18(int solution, int answer)
{
	double v0 = 60 + rand() % (6 + 1) - 3;
	double y = 0;
	double y0 = 0;
	double vy = 0;
	double angle = 30 + rand() % (3 + 1) - 1;
	double v0x = 0;
	double v0y = 0;
	double t = 0;
	double g = 9.8;
	double ��x = 0;
	v0x = v0 * cos(angle * M_PI / 180);
	v0y = v0 * sin(angle * M_PI / 180);
	t = v0y / g;
	y = (v0y * t) - (0.5 * g * t * t);
	��x = v0x * t;
	printf("\n\n");
	printf("2-21 \n");
	printf("�ʼӵ� %6.2lfm/s�� ����鿡 ���� %6.2lf���� ������ ���� ������.\n",v0,angle);
	printf("�� ��ü�� �ö� �� �ִ� (a) �ְ� ���̿� (b) ���򵵴ްŸ��� ���϶�.\n\n");
	printf("(a) �� ��ü�� �ö� �� �ִ� �ְ� ������ �ð��� ���϶�.\n");
	printf("(b) �� ��ü�� �ö� �� �ִ� �ְ� ���̸� ���϶�.\n");
	printf("(c) �� ��ü�� ������ ���򵵴ްŸ��� ���϶�.\n\n");

	if (solution == SHOW)
	{
		printf("=========================   Ǯ ��   =============================\n\n");
		printf("(a) �� ��ü�� �ö� �� �ִ� �ְ� ������ �ð��� ���϶�.\n\n");
		printf("���ð��� t = (vy - v0y) / a\n");
		printf("vy : ���߳��̼ӷ�, v0y : ó�����̼ӷ�, t : �ð�, a : ���ӵ�\n\n");
		printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� %6.2lfm/s^2 �Դϴ�.\n\n", -g);
		printf("t = (vy - v0y) / -g\n");
		printf("  = (%6.2lfm/s - %6.2lfm/s) / %6.2lfm/s^2\n",vy,v0y,-g);
		printf("  = %6.2lfs\n\n",t);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		printf("t = %6.2lfs\n\n",t);
	}

	if (solution == SHOW)
	{
		printf("=========================   Ǯ ��   =============================\n\n");
		printf("(b) �� ��ü�� �ö� �� �ִ� �ְ� ���̸� ���϶�.\n\n");
		printf("���ð��� y - y0 = v0y * t + 1/2 * a * t^2\n");
		printf("y : ����, y0 : ó������, v0y : ó������ �ӵ�, v0 : ó���ӵ�, t : �ð�, a : ���ӵ�\n\n");
		printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� -%6.2lfm/s^2 �Դϴ�.\n\n",g);
		printf("y -    y0   = v0y * t + 1/2 * a * t^2\n");
		printf("y - %6.2lfm = %6.2lfm/s * %6.2lfs - 1/2 * %6.2lf m/s^2 * (%6.2lfs)^2\n",y0,v0y,t,g,t);
		printf("            = %6.2lfm\n\n",y);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		printf("y = %6.2lfm\n\n",y);
	}

	if (solution == SHOW)
	{
		printf("=========================   Ǯ ��   =============================\n\n");
		printf("(c) �� ��ü�� ������ ���򵵴ްŸ��� ���϶�.\n\n");
		printf("���� ���� ��x = v0x * t\n");
		printf("��x : �������Ÿ�, v0x : ó���Ÿ��ӷ�, t : �ð�\n\n");
		printf("��x = v0x * t\n");
		printf("    = %6.2lf m/s * %6.2lfs\n",v0x,t);
		printf("    = %6.2lfm\n\n", ��x);

	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		printf("��x = %6.2lfm\n\n", ��x);
		printf("=================================================================\n\n");
	}
}




int main(void)
{
	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");

	Excersize_3_10(Show_Solution, Answer);
	Excersize_3_18(Show_Solution, Answer);
}