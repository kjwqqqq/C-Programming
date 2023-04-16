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

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   풀 이   =============================\n\n");
		printf("관련공식은 y = y0 + v0 * t + 1/2 * a * t^2입니다. \n");
		printf("y는 높이, y0는 처음높이, v0는 처음속도, t는 시간, a는 가속도입니다.\n");
		printf("자유낙하 운동이므로 가속도(=a)는 중력가속도(=g)로 변환됩니다.\n");
		printf("중력가속도는 %6.2lf m/s^ 2입니다.\n", g);
		printf("관련공식에 중력가속도를 대입하여 y = y0 + v0 * t + 1/2 * g * t ^ 2으로 식 변환이 됩니다.\n");
		printf("v0는 처음속도이므로 %6.2lf m/s 입니다.\n", initialvelocity);
		printf("이후에 식을 정리하여 t값을 구해주면 된다.\n");
		printf("식은 %6.2lf m = %6.2lf m + %6.2lf m/s * t + 1/2 * %6.2lf m/s^2 * t^ 2가 됩니다.\n", h, y0, v0, g);
		printf("식은 %6.2lf m = 1/2 * %6.2lf m/s^2 * t^2 입니다.\n", h, g);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		t = sqrt(2 * h / g);
		printf("관련공식을 정리한 %6.2lf m = 1/2 * %6.2lf m/s^2 * t^2 식에 대입하면\n\n", h, g);
		printf("따라서 t = sqrt(2 * %6.2lf m / %6.2lf m/s^2)이다.\n\n", h, g);
		printf("그러므로 (2 * %6.2lf m / %6.2lf m/s^2)을 구하고 sqrt로 %6.2lf s의 값이 나온다.\n\n", h, g, t);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) 지면에 도달하기 직전의 속도를 구하라.\n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   풀 이   =============================\n\n");
		printf("관련 공식은  v = v0 + a * t입니다. \n");
		printf("v는 나중속도, v0는 처음속도, a는 가속도, t는 시간입니다.\n");
		printf("자유낙하 운동이므로 가속도(=a)는 중력가속도(=g)로 변환됩니다.\n");
		printf("중력가속도는 %6.2lf m/s^ 2입니다.\n", g);
		printf("관련공식에 중력가속도를 대입하여 v = v0 + g * t으로 식 변환이 됩니다.\n");
		printf("v0는 처음 속도이므로 %6.2lf m/s이다.\n", initialvelocity);
		printf("이후에 식을 정리하여 나중속도값을 구해주면 된다.\n");
		printf("식은 v = %6.2lf m + %6.2lf m/s^2 * t가 됩니다.\n", v0, g);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		t = sqrt(2 * h / g);
		v = g * t;
		printf("관련공식을 정리한 v = %6.2lf m + %6.2lf m/s^2 * t 식에 대입하면\n\n", v0, g);
		printf("따라서 a문제에서 구한 t를 대입하여 v = %6.2lf m + %6.2lf m/s^2 * %6.2lf m/s^2 입니다.\n\n", v0, g, t);
		printf("그러므로 %6.2lf m/s^2 * %6.2lf m/s^2 식을 정리하고  %6.2lf m를 더하게 되면 %6.2lf m/s가 나온다. \n", g, t, v0, v);
		printf("=================================================================\n");
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