#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

void Excersize_2_1(int solution, int answer)
{

	double north_distance1 = 130.0;
	double south_distance = 76.7;
	double north_distance2 = 80.5;
	double y_displacement = 0.0;
	double displacement_a = 0.0;
	double displacement_b = 0.0;
	y_displacement = north_distance1 + north_distance2;
	displacement_a = y_displacement - south_distance;
	displacement_b = y_displacement + south_distance;

	printf("\n\n");
	printf("2-1 \n");
	printf("�����⵿��Ⱑ ������ ����Ͽ� �������� %4.1lf km�� ���ư� ��\n", north_distance1);
	printf("���� �������� �������� %4.1lf km�� ���ư� �ٸ� ������ �ư� \n", south_distance);
	printf("�ٽ� �������� %4.1lf km�� ���� �����Ͽ���.\n\n", north_distance2);
	printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ?\n\n");

	if (solution == SHOW)
	{
		printf("============================= Ǯ �� =============================\n\n");
		printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ?\n\n");
		printf("���� ������ ��y = ��y1 - ��y2 \n");
		printf("��y1�� �� �������� ���ư� �Ÿ�, ��y2�� �� �������� ���ư� �Ÿ�\n\n");
		printf("��y = ��y1 - ��y2\n");
		printf("��y = %6.2lfkm - %6.2lfkm\n", y_displacement, south_distance);
		printf("    = %6.2lfkm\n\n", displacement_a);
	}

	if (answer == SHOW)
	{
		printf("============================= �� �� =============================\n\n");
		printf("ó�� �����κ��� ������ ���� ���������� ����� ������ ��y = %4.1lf km\n\n",displacement_a);
	}

	if (solution == SHOW)
	{
		printf("=================================================================\n\n");
		printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ� ? \n\n");
		printf("���� ������ ��y = ��y1 + ��y2 \n");
		printf("��y = ��y1 + ��y2\n");
		printf("��y = %6.2lfkm + %6.2lfkm\n", y_displacement, south_distance);
		printf("    = %6.2lfkm\n\n", displacement_b);
	}

	if (answer == SHOW)
	{
		printf("========================= �� �� =================================\n\n");
		printf("�����⵿��Ⱑ �� ������ �Ÿ��� ��y = %4.1lfkm \n\n",displacement_b );
		printf("=================================================================\n\n");
	}

}


void Excersize_2_21(int solution, int answer)
{
	double h = 380;
	double h0 = 0;
	double g = 9.8;
	double t = 0;
	double v = 0;
	double v0 = 0;
	double y0 = 0;
	double initialvelocity = 0;
	t = sqrt(2 * h / g);
	t = sqrt(2 * h / g);
	v = g * t;

	printf("\n\n");
	printf("2-21 \n");
	printf("���� ���̰� %6.2lf m�� ���� ���󿡼� ������ ���� �������� ��ü�� ���Ͻ��״ٰ� ����.\n\n", h);
	printf("(a) �� ��ü�� ���鿡 �������� ������ �ɸ��� �ð��� ���϶�.\n\n");
	printf("(b) ���鿡 �����ϱ� ������ �ӵ��� ���϶�.\n\n");

	if (solution == SHOW)
	{
		printf("=========================   Ǯ ��   =============================\n\n");
		printf("(a) �� ��ü�� ���鿡 �������� ������ �ɸ��� �ð��� ���϶�.\n\n");
		printf("���ð��� y = y0 + v0 * t + 1/2 * a * t^2\n");
		printf("y : ����, y0 : ó������, v0 : ó���ӵ�, t : �ð�, a : ���ӵ�\n\n");
		printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� -%6.2lfm/s^2 �Դϴ�.\n\n", g);
		printf("y = y0 + v0 * t - 1/2 * g * t^2\n");
		printf("%6.2lfm = %6.2lfm + %6.2lfm/s * t - 1/2 * %6.2lf m/s^2 * t^2\n", h, y0, v0, g);
		printf("        = - 1/2 * %6.2lfm/s^2 * t^2\n",g);
		printf("t = sqrt(2 * %6.2lfm / %6.2lfm/s^2)\n",h,g);
		printf("  = %6.2lfs\n\n", t);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		printf("���鿡 �������� ������ �ɸ��� �ð��� t = %6.2lfs\n\n", t);
	}

	if (solution == SHOW)
	{
		printf("=========================   Ǯ ��   =============================\n\n");
		printf("(b) ���鿡 �����ϱ� ������ �ӵ��� ���϶�.\n\n");
		printf("���� ���� v = v0 + a * t\n");
		printf("v : ���߼ӵ�, v0 : ó���ӵ�, a : ���ӵ�, t : �ð�\n\n");
		printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� -%6.2lfm/s^2 �Դϴ�.\n\n", g);
		printf("v = v0 + a * t\n");
		printf("v = %6.2lfm - %6.2lf m/s^2 * %6.2lfs\n", v0, g, t);
		printf("  = %6.2lfm/s\n\n", v);

	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		printf("���鿡 �����ϱ� ������ �ӵ��� v = -%6.2lfm/s\n\n", v);
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

	Excersize_2_1(Show_Solution, Answer);
	Excersize_2_21(Show_Solution, Answer);
}