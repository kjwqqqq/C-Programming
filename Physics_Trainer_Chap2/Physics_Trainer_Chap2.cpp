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
	

	printf("\n\n");
	printf("2-1 \n");
	printf("�����⵿��Ⱑ ������ ����Ͽ� �������� %4.1lf km�� ���ư� ��\n", north_distance1);
	printf("���� �������� �������� %4.1lf km�� ���ư� �ٸ� ������ �ư�   \n", south_distance);
	printf("�ٽ� �������� %4.1lf km�� ���� �����Ͽ���.\n\n", north_distance2);
	printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ?\n\n");
	
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("���� �̷��� �����Դϴ�. �����п��� ���� ��ġ�� ������ ó�� ��ġ�� ���� �� ���ͷ��̴�.\n");
		printf("north_distance1 - south_distance + north_distance2 = ����.\n");



		printf("=================================================================\n");
	}
		
	
	printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ� ? \n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("���� �̷��� �Ÿ��Դϴ�. ��Ⱑ �����̴� ���Ÿ��� ���մϴ�.\n");
		printf("north_distance1 + south_distance + north_distance2 = �ѰŸ�.\n");



		printf("=================================================================\n");
	}
}


void Excersize_2_11(int solution, int answer)
{
	int velocity = 90;
	int distance = 50;
	printf("\n\n");
	printf("2-11 \n");
	printf("�ڵ��� �Ǹſ��� � ������ī�� ������ �����Ͽ���.\n");
	printf("�� ������ī�� %d km/h�� �ӵ��� �޸��ٰ� �극��ũ�� ������ %d m �̳����� ������ �� �ִ� ������ ���� �ִٰ� �Ѵ�.\n\n", velocity, distance);
	printf("(a) �� ��� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");
}


void Excersize_2_21(int solution, int answer)
{
	int height = 360;

	printf("\n\n");
	printf("2-21 \n");
	printf("���� ���̰� %d m�� ���� ���󿡼� ������ ���� �������� ��ü�� ���Ͻ��״ٰ� ����.\n\n", height);
	printf("(a) �� ��ü�� ���鿡 �������� ������ �ɸ��� �ð��� ���϶�.\n\n");

	printf("(b) ���鿡 �����ϱ� ������ �ӵ��� ���϶�.\n\n");


}




int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_1(0, 0);
	Excersize_2_11(0, 0);
	Excersize_2_21(0, 0);


}