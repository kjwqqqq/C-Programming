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
	printf("대형기동헬기가 기지를 출발하여 북쪽으로 %4.1lf km를 날아간 후\n", north_distance1);
	printf("짐을 내려놓고 남쪽으로 %4.1lf km를 날아가 다른 물건을 싣고 \n", south_distance);
	printf("다시 북쪽으로 %4.1lf km를 날아 착륙하였다.\n\n", north_distance2);
	printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("========================= 풀 이 =============================\n");
		printf("관련 공식은 북쪽으로 이동한 값은 더하고 남쪽으로 이동한 값은 빼는 것입니다. \n");

		x_displacement = north_distance1 + north_distance2;
		printf("대형기동헬기가 북쪽으로 이동한거리는 %4.1lf km는 다음과 같습니다. \n", x_displacement);

		printf("대형기동헬기가 남쪽으로 이동한거리는 %4.1lf km는 다음과 같습니다. \n\n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("========================= 정 답 =============================\n");
		displacement = x_displacement - south_distance;
		printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ? \n\n");
		printf("대형기동헬기가 기지로부터 마지막 도착지점은 다음과 같습니다. : %4.1lf km\n", displacement);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가 ? \n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("관련 공식은 총 움직인거리의 총합입니다. \n");
		x_displacement = north_distance1 + north_distance2;
		printf("대형기동헬기가 북쪽으로 이동한거리는 %4.1lf km는 다음과 같습니다. \n", x_displacement);

		printf("대형기동헬기가 남쪽으로 이동한거리는 %4.1lf km는 다음과 같습니다. \n\n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("========================= 정 답 =============================\n");
		printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가 ? \n\n");
		displacement = x_displacement + south_distance;
		printf("대형기동헬기가 총 움직인 거리의 합은 다음과 같습니다. : %4.1lf km \n", displacement);
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
	printf("만약 높이가 %6.2lf m인 빌딩 옥상에서 지면을 향해 수직으로 물체를 낙하시켰다고 하자.\n\n", h);
	printf("(a) 이 물체가 지면에 떨어지는 데까지 걸리는 시간을 구하라.\n\n");
	printf("(b) 지면에 도달하기 직전의 속도를 구하라.\n\n");

	if (solution == SHOW)
	{
		t = sqrt(2 * h / g);
		printf("=========================   풀 이   =============================\n\n");
		printf("(a) 이 물체가 지면에 떨어지는 데까지 걸리는 시간을 구하라.\n\n");
		printf("관련공식 y = y0 + v0 * t + 1/2 * a * t^2\n");
		printf("y : 높이, y0 : 처음높이, v0 : 처음속도, t : 시간, a : 가속도\n\n");
		printf("중력가속도는 아래 방향이므로 -%6.2lfm/s^2 입니다.\n\n",g);
		printf("y = y0 + v0 * t - 1/2 * g * t^2\n");
		printf("%6.2lfm = %6.2lfm + %6.2lfm/s * t - 1/2 * %6.2lf m/s^2 * t^2\n",h,y0,v0,g);
		printf("%6.2lfm = - 1/2 * %6.2lfm/s^2 * t^2", h, g);
		printf("sqrt(2 * %6.2lfm / %6.2lfm/s^2) = %6.2lfs\n\n",h, g, t);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		printf("지면에 떨어지는 데까지 걸리는 시간은 t = %6.2lfs\n\n", t); 
	}

	if (solution == SHOW)
	{
		printf("=========================   풀 이   =============================\n\n");
		t = sqrt(2 * h / g);
		v = g * t;
		printf("(b) 지면에 도달하기 직전의 속도를 구하라.\n\n");
		printf("관련 공식 v = v0 + a * t\n");
		printf("v : 나중속도, v0 : 처음속도, a : 가속도, t : 시간\n\n");
		printf("중력가속도는 아래 방향이므로 -%6.2lfm/s^2 입니다.\n\n", g);
		printf("v = v0 + a * t\n");
		printf("v = %6.2lfm - %6.2lf m/s^2 * %6.2lfs = -%6.2lfm/s\n\n", v0, g,t,v);
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		printf("지면에 도달하기 직전의 속도는 v = -%6.2lfm/s\n\n", v);
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