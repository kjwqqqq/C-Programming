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
	printf("대형기동헬기가 기지를 출발하여 북쪽으로 %4.1lf km를 날아간 후\n", north_distance1);
	printf("짐을 내려놓고 남쪽으로 %4.1lf km를 날아가 다른 물건을 싣고   \n", south_distance);
	printf("다시 북쪽으로 %4.1lf km를 날아 착륙하였다.\n\n", north_distance2);
	printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ?\n\n");
	
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("관련 이론은 변위입니다. 물리학에서 나중 위치의 값에서 처음 위치의 값을 뺀 벡터량이다.\n");
		printf("north_distance1 - south_distance + north_distance2 = 변위.\n");



		printf("=================================================================\n");
	}
		
	
	printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가 ? \n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("관련 이론은 거리입니다. 헬기가 움직이는 모든거리를 말합니다.\n");
		printf("north_distance1 + south_distance + north_distance2 = 총거리.\n");



		printf("=================================================================\n");
	}
}


void Excersize_2_11(int solution, int answer)
{
	int velocity = 90;
	int distance = 50;
	printf("\n\n");
	printf("2-11 \n");
	printf("자동차 판매원이 어떤 스포츠카의 장점을 설명하였다.\n");
	printf("이 스포츠카는 %d km/h의 속도로 달리다가 브레이크를 밟은후 %d m 이내에서 정지할 수 있는 성능을 갖고 있다고 한다.\n\n", velocity, distance);
	printf("(a) 이 경우 자동차의 가속도는 몇 m/s^2인가?\n\n");
}


void Excersize_2_21(int solution, int answer)
{
	int height = 360;

	printf("\n\n");
	printf("2-21 \n");
	printf("만약 높이가 %d m인 빌딩 옥상에서 지면을 향해 수직으로 물체를 낙하시켰다고 하자.\n\n", height);
	printf("(a) 이 물체가 지면에 떨어지는 데까지 걸리는 시간을 구하라.\n\n");

	printf("(b) 지면에 도달하기 직전의 속도를 구하라.\n\n");


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