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
	printf("동물의 왕국에서 가장 빠른 동물은 표범인데 %6.2lf˚의 각도로\n", angle);
	printf("뛰어오르면 %6.2lfm의 높이를 올라간다. 이 높이를 뛰어오를 수\n", y);
	printf("있는 처음속도는 얼마인가?\n\n");
	printf("(a) 표범이 뛰어오를 수 있는 처음높이속도는 얼마인가?\n\n");
	printf("(b) 표범이 뛰어오를 수 있는 처음속도는 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("============================= 풀 이 =============================\n\n");
		printf("(a) 표범이 뛰어오를 수 있는 처음속도는 얼마인가?\n\n");
		printf("관련 공식은 vy^2 - v0y^2 = 2 * a * Δy\n");
		printf("vy는 나중높이속도, v0y는 처음높이속도, a는 가속도, Δy는 높이변화량\n\n");
		printf("  vy^2    - v0y^2 = -2 * g * Δy\n");
		printf("%6.2lfm/s - v0y^2 = -2 * %6.2lfm/s^2 * %6.2lfm\n\n", vy, g, y);
		printf("v0y = sqrt(2 * %6.2lfm/s^2 * %6.2lfm)\n", g, y);
		printf("    = %6.2lfm/s\n\n", v0y);
	}

	if (answer == SHOW)
	{
		printf("============================= 정 답 =============================\n\n");
		printf("v0y = %6.2lfm/s\n\n", v0y);
	}

	if (solution == SHOW)
	{
		printf("=========================   풀 이   =============================\n\n");
		printf("(b) 표범이 뛰어오를 수 있는 처음속도는 얼마인가?\n\n");
		printf("관련 공식 v0 = v0y / sin(˚)\n");
		printf("v0 : 처음속도, v0y : 처음높이속도\n\n");
		printf("v0 = v0y / sin(˚)\n");
		printf("   = %6.2lfm / sin(%6.2lf˚)\n",v0y,angle);
		printf("   = %6.2lfm/s\n\n",v0);
		
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
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
	double Δx = 0;
	v0x = v0 * cos(angle * M_PI / 180);
	v0y = v0 * sin(angle * M_PI / 180);
	t = v0y / g;
	y = (v0y * t) - (0.5 * g * t * t);
	Δx = v0x * t;
	printf("\n\n");
	printf("2-21 \n");
	printf("초속도 %6.2lfm/s로 수평면에 대해 %6.2lf˚의 각으로 공을 던졌다.\n",v0,angle);
	printf("이 물체가 올라갈 수 있는 (a) 최고 높이와 (b) 수평도달거리를 구하라.\n\n");
	printf("(a) 이 물체가 올라갈 수 있는 최고 높이의 시간을 구하라.\n");
	printf("(b) 이 물체가 올라갈 수 있는 최고 높이를 구하라.\n");
	printf("(c) 이 물체가 움직인 수평도달거리를 구하라.\n\n");

	if (solution == SHOW)
	{
		printf("=========================   풀 이   =============================\n\n");
		printf("(a) 이 물체가 올라갈 수 있는 최고 높이의 시간을 구하라.\n\n");
		printf("관련공식 t = (vy - v0y) / a\n");
		printf("vy : 나중높이속력, v0y : 처음높이속력, t : 시간, a : 가속도\n\n");
		printf("중력가속도는 아래 방향이므로 %6.2lfm/s^2 입니다.\n\n", -g);
		printf("t = (vy - v0y) / -g\n");
		printf("  = (%6.2lfm/s - %6.2lfm/s) / %6.2lfm/s^2\n",vy,v0y,-g);
		printf("  = %6.2lfs\n\n",t);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		printf("t = %6.2lfs\n\n",t);
	}

	if (solution == SHOW)
	{
		printf("=========================   풀 이   =============================\n\n");
		printf("(b) 이 물체가 올라갈 수 있는 최고 높이를 구하라.\n\n");
		printf("관련공식 y - y0 = v0y * t + 1/2 * a * t^2\n");
		printf("y : 높이, y0 : 처음높이, v0y : 처음높이 속도, v0 : 처음속도, t : 시간, a : 가속도\n\n");
		printf("중력가속도는 아래 방향이므로 -%6.2lfm/s^2 입니다.\n\n",g);
		printf("y -    y0   = v0y * t + 1/2 * a * t^2\n");
		printf("y - %6.2lfm = %6.2lfm/s * %6.2lfs - 1/2 * %6.2lf m/s^2 * (%6.2lfs)^2\n",y0,v0y,t,g,t);
		printf("            = %6.2lfm\n\n",y);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		printf("y = %6.2lfm\n\n",y);
	}

	if (solution == SHOW)
	{
		printf("=========================   풀 이   =============================\n\n");
		printf("(c) 이 물체가 움직인 수평도달거리를 구하라.\n\n");
		printf("관련 공식 Δx = v0x * t\n");
		printf("Δx : 수평방향거리, v0x : 처음거리속력, t : 시간\n\n");
		printf("Δx = v0x * t\n");
		printf("    = %6.2lf m/s * %6.2lfs\n",v0x,t);
		printf("    = %6.2lfm\n\n", Δx);

	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		printf("Δx = %6.2lfm\n\n", Δx);
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