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
	double x_displacement = 0.0;
	double displacement = 0.0;

	printf("\n\n");
	printf("2-1 \n");
	printf("�����⵿��Ⱑ ������ ����Ͽ� �������� %4.1lf km�� ���ư� ��\n", north_distance1);
	printf("���� �������� �������� %4.1lf km�� ���ư� �ٸ� ������ �ư� \n", south_distance);
	printf("�ٽ� �������� %4.1lf km�� ���� �����Ͽ���.\n\n", north_distance2);
	printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("========================= Ǯ �� =============================\n");
		printf("���� ������ �������� �̵��� ���� ���ϰ� �������� �̵��� ���� ���� ���Դϴ�. \n");

		x_displacement = north_distance1 + north_distance2;
		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n", x_displacement);

		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n\n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("========================= �� �� =============================\n");
		displacement = x_displacement - south_distance;
		printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ? \n\n");
		printf("�����⵿��Ⱑ �����κ��� ������ ���������� ������ �����ϴ�. : %4.1lf km\n", displacement);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ� ? \n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("���� ������ �� �����ΰŸ��� �����Դϴ�. \n");
		x_displacement = north_distance1 + north_distance2;
		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n", x_displacement);

		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n\n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("========================= �� �� =============================\n");
		printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ� ? \n\n");
		displacement = x_displacement + south_distance;
		printf("�����⵿��Ⱑ �� ������ �Ÿ��� ���� ������ �����ϴ�. : %4.1lf km \n", displacement);
		printf("=================================================================\n");
		printf("\n\n\n");
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

	printf("\n\n");
	printf("2-21 \n");
	printf("���� ���̰� %6.2lf m�� ���� ���󿡼� ������ ���� �������� ��ü�� ���Ͻ��״ٰ� ����.\n\n", h);
	printf("(a) �� ��ü�� ���鿡 �������� ������ �ɸ��� �ð��� ���϶�.\n\n");
	printf("(b) ���鿡 �����ϱ� ������ �ӵ��� ���϶�.\n\n");

	if (solution == SHOW)
	{
		t = sqrt(2 * h / g);
		printf("=========================   Ǯ ��   =============================\n\n");
		printf("(a) �� ��ü�� ���鿡 �������� ������ �ɸ��� �ð��� ���϶�.\n\n");
		printf("���ð��� y = y0 + v0 * t + 1/2 * a * t^2\n");
		printf("y : ����, y0 : ó������, v0 : ó���ӵ�, t : �ð�, a : ���ӵ�\n\n");
		printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� -%6.2lfm/s^2 �Դϴ�.\n\n",g);
		printf("y = y0 + v0 * t - 1/2 * g * t^2\n");
		printf("%6.2lfm = %6.2lfm + %6.2lfm/s * t - 1/2 * %6.2lf m/s^2 * t^2\n",h,y0,v0,g);
		printf("%6.2lfm = - 1/2 * %6.2lfm/s^2 * t^2", h, g);
		printf("sqrt(2 * %6.2lfm / %6.2lfm/s^2) = %6.2lfs\n\n",h, g, t);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		printf("���鿡 �������� ������ �ɸ��� �ð��� t = %6.2lfs\n\n", t); 
	}

	if (solution == SHOW)
	{
		printf("=========================   Ǯ ��   =============================\n\n");
		t = sqrt(2 * h / g);
		v = g * t;
		printf("(b) ���鿡 �����ϱ� ������ �ӵ��� ���϶�.\n\n");
		printf("���� ���� v = v0 + a * t\n");
		printf("v : ���߼ӵ�, v0 : ó���ӵ�, a : ���ӵ�, t : �ð�\n\n");
		printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� -%6.2lfm/s^2 �Դϴ�.\n\n", g);
		printf("v = v0 + a * t\n");
		printf("v = %6.2lfm - %6.2lf m/s^2 * %6.2lfs = -%6.2lfm/s\n\n", v0, g,t,v);
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