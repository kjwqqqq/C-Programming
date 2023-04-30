#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

void Excersize_2_1(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ����ȯ
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
	printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ?");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("========================= Ǯ �� =============================\n");
		printf("���� ������ �������� �̵��� ���� ���ϰ� �������� �̵��� ���� ���� ���Դϴ�. \n");
		x_displacement = north_distance1 + north_distance2;
		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n", x_displacement);
		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("\n\n\n");
		printf("========================= �� �� =============================\n");
		displacement = x_displacement - south_distance;
		printf("�Ÿ��� %4.2lfkm �Դϴ�.\n", displacement);
		printf("\n\n\n");
	}
	
	printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ�?");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("���� ������ �� �����ΰŸ��� �����Դϴ�. \n");
		x_displacement = north_distance1 + north_distance2;
		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n", x_displacement);
		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("\n\n\n");
		printf("========================= �� �� =============================\n");
		displacement = x_displacement + south_distance;
		printf("�Ÿ��� %4.2lfkm �Դϴ�.\n", displacement);
	}

}


void Excersize_2_21(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ����ȯ
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
	printf("(a) �� ��ü�� ���鿡 �������� ������ �ɸ��� �ð��� ���϶�.");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   Ǯ ��   =============================\n");
		printf("���ð����� y = y0 + v0 * t + 1/2 * a * t^2�Դϴ�. \n");
		printf("y : ������ġ, y0 : �ʱ���ġ , v0 : �ʱ�ӵ�,  t : �ð�, a : ���ӵ� \n");
		printf("�������� ��̹Ƿ� ���ӵ�(=a)�� �߷°��ӵ�(=g)�� ��ȯ�˴ϴ�.\n");
		printf("%6.2lf m = 1/2 * %6.2lf m/s^2 * t^2\n", h, g);
		printf("t = sqrt(2 * %6.2lf m / %6.2lf m/s^2)\n", h, g);
	}

	if (answer == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   �� ��   =============================\n");
		t = sqrt(2 * h / g);
		printf("�ð��� %6.2lfs �Դϴ�.", t);
		printf("\n\n\n");
	}

	printf("(b) ���鿡 �����ϱ� ������ �ӵ��� ���϶�.");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   Ǯ ��   =============================\n\n");
		printf("���� ������ v = v0 + a x t �Դϴ�.\n");
		printf("v : ���߼ӵ�,  v0 : �ʱ�ӵ�, a : ���ӵ�, t : �ð�\n");
		printf("�������� ��̹Ƿ� ���ӵ�(=a)�� �߷°��ӵ�(=g)�� ��ȯ�˴ϴ�.\n");
		printf("v = %6.2lf m + %6.2lf m/s^2 * %6.2lf m/s^2\n", v0, g, t);
	
	}

	if (answer == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   �� ��   =============================\n");
		v = g * t;
		printf("�ӵ��� %6.2lfm/s �Դϴ�.", v);
		printf("\n\n\n");
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