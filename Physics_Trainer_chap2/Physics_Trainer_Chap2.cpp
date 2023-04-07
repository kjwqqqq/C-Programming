#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

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
	printf("짐을 내려놓고 남쪽으로 %4.1lf km를 날아가 다른 물건을 싣고   \n", south_distance);
	printf("다시 북쪽으로 %4.1lf km를 날아 착륙하였다.\n\n", north_distance2);
	printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("관련 공식은 북쪽으로 이동한 값은 더하고 남쪽으로 이동한 값은 빼는 것입니다. \n");

		x_displacement = north_distance1 + north_distance2;
		printf("대형기동헬기가 북쪽으로 이동한거리는 %.1lf는 다음과 같습니다. \n", x_displacement);

		printf("대형기동헬기가 남쪽으로 이동한거리는 %.1lf는 다음과 같습니다. \n\n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		displacement = x_displacement - south_distance;
		printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ? \n\n");
		printf("대형기동헬기가 기지로부터 마지막 도착지점은 다음과 같습니다. : %.1lf \n", displacement);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가 ? \n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("관련 공식은 총 움직인거리의 총합입니다. \n ");
		x_displacement = north_distance1 + north_distance2;
		printf("대형기동헬기가 북쪽으로 이동한거리는 %.1lf는 다음과 같습니다. \n", x_displacement);

		printf("대형기동헬기가 남쪽으로 이동한거리는 %.1lf는 다음과 같습니다. \n\n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가 ? \n\n");
		displacement = x_displacement + south_distance;
		printf("대형기동헬기가 총 움직인 거리의 합은 다음과 같습니다. : %.1lf \n", displacement);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

}
void Excersize_2_21(int solution, int answer)
{
	double height = 380;
	double height0 = 0;
	double accelerationofgravity = 9.8;
	double time = 0;
	double velocity = 0;

	printf("\n\n");
	printf("2-21 \n");
	printf("만약 높이가 %.0lf m인 빌딩 옥상에서 지면을 향해 수직으로 물체를 낙하시켰다고 하자.\n\n", height);
	printf("(a) 이 물체가 지면에 떨어지는 데까지 걸리는 시간을 구하라.\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("관련공식은 Y = Y0 + V0t + 1/2 * a * t^2입니다. \n");
		accelerationofgravity;
		printf("가속도는 중력가속도를 이용하여 %.1lf는 다음과 같습니다. \n", accelerationofgravity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(a) 이 물체가 지면에 떨어지는 데까지 걸리는 시간을 구하라.\n\n");
		time = sqrt(2 * height / accelerationofgravity);
		printf("물체가 지면으로 떨어지는 시간은 다음과 같습니다. : %.2lf \n", time);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) 지면에 도달하기 직전의 속도를 구하라.\n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("관련 공식은  V = V0 + a * t입니다. \n");
		accelerationofgravity;
		printf("가속도는 중력가속도를 이용하여 %.1lf는 다음과 같습니다. \n", accelerationofgravity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(b) 지면에 도달하기 직전의 속도를 구하라.\n\n");
		time = sqrt(2 * height / accelerationofgravity);
		printf("물체가 지면으로 떨어지는 시간은 다음과 같습니다. : %.2lf \n", time);
		velocity = accelerationofgravity * time;
		printf("물체가 지면으로 떨어지는 속도는 다음과 같습니다. : %.1lf \n", velocity);
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

/*void Excersize_2_2(int solution, int answer)
{
	int h = 2;
	int m = 12;
	int s = 23;

	double distance1 = 42.195;
	double distance2 = 100.0;

	printf("\n\n");
	printf("2-2 \n");
	printf("황영조 선수는 %4.1lf m를 %d시간 %d분 %d초에 뛰어 우승하였다.\n\n", distance1, h, m, s);
	printf("황영조 선수는 %4.1lf m를 평균 몇 초에 달린 셈인가?  \n", distance2);

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here


		printf("=================================================================\n");
	}
}


void Excersize_2_12(int solution, int answer)
{
	int sec = 6;
	int V = 25;
	int V0 = 10;

	double acceleration = 2.5;
	double distance = 105;

	printf("\n\n");
	printf("2-12 \n");
	printf("어떤 자동차가 %d s 동안에 %d m/s 에서 %d m/s로 가속된다.\n\n", sec, V, V0);
	printf("(a)이 자동차의 가속도는 얼마인가?  \n\n", acceleration);


	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here

		printf("=================================================================\n");
	}

	printf("(b)이 자동차가 그동안 달린 거리는 얼마인가?  \n\n", distance);
}

void Excersize_2_22(int solution, int answer)
{
	int V = 10;
	int sec = 2;
	double distance = 39.6;

	printf("\n\n");
	printf("2-22 \n");
	printf("어떤 높이에서 %d m/s의 속도로 연직 아래로 공을 던졌다.\n\n", V);
	printf("(a) 공을 던진 후 %d s 후의 속도를 구하라.\n\n", sec);


	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here

		printf("=================================================================\n");
	}

	printf("(b) 그동안 낙하한 거리는 얼마인가?\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here

		printf("=================================================================\n");
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


	Excersize_2_1(1,1);
	//Excersize_2_2(1, 0);
	//Excersize_2_12(1, 0);
	//Excersize_2_22(1, 0);



}



void Excersize_2_1(int solution, int answer)
{
	double north_distance1 = 130.0;
	double south_distance = 76.7;
	double north_distance2 = 80.5;

	printf("\n\n");
	printf("2-1 \n");
	printf("대형기동헬기가 기지를 출발하여 북쪽으로 %4.1lf km를 날아간 후\n", north_distance1);
	printf("짐을 내려놓고 남쪽으로 %4.1lf km를 날아가 다른 물건을 싣고\n", south_distance);
	printf("다시 북쪽으로 %4.1lf km를 날아 착륙하였다.\n\n", north_distance2);

	printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가?\n\n");
	printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가?\n\n");
}

void Excersize_2_2(int solution, int answer)
{
	int h = 2;
	int m = 12;
	int s = 23;

	double distance1 = 42.195;
	double distance2 = 100.0;

	printf("\n\n");
	printf("2-2 \n");
	printf("황영조 선수는 %4.1lf m를 %d시간 %d분 %d초에 뛰어 우승하였다.\n\n", distance1, h, m, s);
	printf("황영조 선수는 %4.1lf m를 평균 몇 초에 달린 셈인가?  \n", distance2);
}

void Excersize_2_3(int solution, int answer)
{
	int distance = 408;
	int T0 = 10;
	int hour = 12;
	int min = 37;

	printf("\n\n");
	printf("2-3 \n");
	printf("서울에서 부산까지의 KTX 노선의 거리는 약 %d km이다\n", distance);
	printf("오전 %d 시에 서울역을 출발한 KTX가 %d 시 %d 분 부산역에 도착하였다.\n\n", T0, hour, min);

	printf("열차의 평균속력은 몇 m/s인가?\n");
}

void Excersize_2_4(int solution, int answer)
{
	double a_average_velocity = 10;
	double b_Instantaneous_speed = 15;

	printf("\n\n");
	printf("2-4 \n");
	printf("수평면 위에 정지하고 있던 물체가 한쪽 방향으로 직선운동을 할 때,\n");
	printf("물체의 이동거리와 시간의 관께가 그림 P2-4와 같다.\n\n");
	printf("(a) 출발하여 %d s 동안 물체의 평균속력은 몇 m/s인가?\n\n", a_average_velocity);

	printf("(b) 출발 후 %d s 때의 순간속력은 몇 m/s인가?\n\n", b_Instantaneous_speed);
}

void Excersize_2_5(int solution, int answer)
{
	int h = 1;

	int distance1 = 200;
	int velocity1 = 90;
	int distance2 = 200;
	int velocity2 = 50;

	printf("\n\n");
	printf("2-5 \n");
	printf("어떤 사람이 고속도로를 처음 %d km는 %d km/h의 속력으로 달리고, %d 시간동안 점심식사를 한 후에 다시 %d km를 %d km/h의 속도로 달려서 되돌아왔다.\n\n", distance1, velocity1, h, distance2, velocity2);
	printf("이 사람의 여행과정에서(a) 평균속력과 (b) 평균속도를 구하라.\n\n");
}

void Excersize_2_6(int solution, int answer)
{
	int distance = 200;
	int sec = 25;

	printf("\n\n");
	printf("2-6 \n");
	printf("달리기 선수가 %d m 트랙 한 바퀴를  %d s에 돈다.\n\n", distance, sec);
	printf("선수의 (a) 평균속력과 (b) 평균속도를 구하라.\n\n");
	printf("(a) 평균속력\n\n");
	printf("(b) 평균속도\n\n");
}

void Excersize_2_7(int solution, int answer)
{
	printf("\n\n");
	printf("2-7 \n");
	printf("그림은 x축을 따라 1차원운동을 하는 물체의 변위와 시간 관계 그래프 이다. \n");
	printf("이 그래프를 보고 이 물체의 운동 상태를 시간대별로 설명하라.\n");
}

void Excersize_2_8(int solution, int answer)
{
	printf("\n\n");
	printf("2-8 \n");
	printf("가속도의 값이 +1이라는 의미는? \n\n");

	printf("(1) 속도의 변화가 없다.  \n");
	printf("(2) 속도가 점점 커진다.  \n");
	printf("(3) 속도가 점점 작아진다.\n");
	printf("(4) 속도가 일정하다. \n\n");
}

void Excersize_2_9(int solution, int answer)
{
	double zero_back1 = 7.10;
	double zero_back2 = 11.2;

	printf("\n\n");
	printf("2-9 \n");
	printf("독일에서 생산된 쿠페 승용차의 제로백이 %4.1lf s라고 한다.\n\n", zero_back1);
	printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
	printf("(b) 어느 전기자동차의 제로백이 %4.1lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);
}

void Excersize_2_10(int solution, int answer)
{
	int accel = 1.7;
	int V = 90;
	int s = 110;


	printf("\n\n");
	printf("2-10 \n");
	printf("고속도로에서 어떤 자동차가 약 %d m/s^2의 가속도를 낼 수 있다.\n\n", accel);
	printf("이 비율로 %d km/h의 속도에서\n", V);
	printf("%d km/h로 가속하는데 걸리는 시간은 얼마나 될까?\n\n", s);
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

void Excersize_2_12(int solution, int answer)
{
	int sec = 6;
	int V = 25;
	int V0 = 10;

	double acceleration = 2.5;
	double distance = 105;

	printf("\n\n");
	printf("2-12 \n");
	printf("어떤 자동차가 %d s 동안에 %d m/s 에서 %d m/s로 가속된다.\n\n", sec, V, V0);
	printf("(a) 이 자동차의 가속도는 얼마인가?  \n\n", acceleration);
	printf("(b) 이 자동차가 그동안 달린 거리는 얼마인가?  \n", distance);
}

void Excersize_2_13(int solution, int answer)
{
	int sec1 = 7;
	int sec2 = 5;

	printf("\n\n");
	printf("2-13 \n");
	printf("자동차가 직선 도로를 달릴 때의 v-t 그래프이다. \n\n");
	printf("(a) 이 자동차의 a-t 그래프를 그리라. \n\n");
	printf("(b) 자동차가 처음 %d s 동안 이동한 거리는 얼마인가?\n\n", sec1);
	printf("(c) 이 자동차의 처음 %d s 동안의 평균속도 및 평균가속도는 각각 얼마인가 ?\n\n", sec2);;
}

void Excersize_2_14(int solution, int answer)
{

	double speed = 30;
	double acceleration = 3.0;


	printf("\n\n");
	printf("2-14 \n");
	printf("경비행기가 이륙하기 위해서는 속력이 %d m/s에 도달해야 한다.\n", speed);
	printf("%3.0lf m/s^2으로 일정하게 가속한다면\n\n", acceleration);
	printf("이륙속도에 도달하기 위해서 얼마의 활주거리가 필요한가?\n\n");


}

void Excersize_2_15(int solution, int answer)
{
	int velocity1 = 120;
	int distance1 = 240;

	printf("\n\n");
	printf("2-15 \n");
	printf("소형비행기가 이륙하기 위해 필요한 속력은 %d km/h이다.\n\n", velocity1);
	printf("(a) 이 비행기가 활주로를 %d m 달린 후 이륙하기 위해 필요한 최소의 가속도는 얼마인가? \n\n", distance1);
	printf("(b) 이륙하는 데 걸리는 시간은 얼마인가? \n\n");
}

void Excersize_2_16(int solution, int answer)
{
	int distance1 = 10000;
	double min = 30.0;
	int min2 = 27;
	int distance2 = 1100;
	double acceleration = 0.20;

	printf("\n\n");
	printf("2-16 \n");
	printf("어떤 육상 선수가 %d m를 %.1lf min 이내에 주파하려고 한다.\n\n", distance1, min);
	printf("정확히 %d min 지난 후에 달려야 할 거리가 %d m 남았다.\n\n", min2, distance2);
	printf("그런데 이 육상 선수가 원하는 시간 내에 주파하기 위해서는 %.2lf m/s^2 의 가속도로 몇 초 동안 가속해야 하는가?\n\n", acceleration);

}

void Excersize_2_17(int solution, int answer)
{
	double velocity1 = 6.0;
	double velocity2 = 4.0;
	int speed1 = 10;
	int speed2 = 0;

	printf("\n\n");
	printf("2-17 \n");
	printf("처음에 동쪽으로 %.lf m/s 의 속도로 운동하던 물체가 일정한 비율로   \n", velocity1);
	printf("속도가 변하여 %d s 후 서쪽으로 %.lf m/s 로 운동하였다.     \n\n", speed1, velocity2);

	printf("(a) %d 동안 속도의 변화량은 얼마인가?  \n\n", speed1);
	printf("(b) 가속도의 크기는 얼마이며, 그방향은 어느 방향인가?  \n\n");
	printf("(c) 출발한 지 몇 초 후메 속도가 %d 이 되는가?  \n\n", speed2);
	printf("(d) 속도가 %d 이 될 때까지 이동한 거리는 얼마인가?  \n\n", speed2);
	printf("(e) 출발한 지 %d s 후의 변위와 이동한 거리는 각각 얼마인가?  \n\n", speed1);
}

void Excersize_2_18(int solution, int answer)
{
	int velocity = 40;
	double speed = 0.50;
	int time = 1;
	int time2 = 1;

	printf("\n\n");
	printf("2-18 \n");
	printf("%d km/h의 속력으로 달리는 자동차가 연료가 떨어져서   \n", velocity);
	printf("일정한 가속도 %.2lf m/s제곱으로 감속되었다. \n\n", speed);

	printf("(a) 자동차가 정지할 때까지 주행한 거리는 얼마인가? \n");

	printf("(b) 자동차가 정지할 때까지 걸린 시간은 얼마인가? \n");

	printf("(c) 자동차가 처음 %d s 동안 이동한 거리와 다섯 번재 %d s 동안에 이동한  거리는 각각 얼마인가? \n\n", time, time2);

}

void Excersize_2_19(int solution, int answer)
{
	int velocity = 120;
	int acceleration = 10;

	printf("\n\n");
	printf("2-19 \n");
	printf("%d km/h의 속력으로 달리는 과속 운전자가 정지해 있는 경찰관을 지나쳤다.\n", velocity);
	printf("이 경찰관은 즉시 일정한 가속도 %d km/h/s로(혼합된 단위를 유의하라) 쫓아가기 시작하였다.\n\n", acceleration);
	printf("(a) 과속 운전자가 일정한 속력을 유지한다고 가정하면 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 얼마인가?\n\n");
	printf("(b) 이때 경찰관은 얼마나 빨리 달렸겠는가?\n\n");
}

void Excersize_2_20(int solution, int answer)
{
	int Va = 24;
	int Vb = 20;
	int V0a = 5;
	int V0b = 5;

	printf("\n\n");
	printf("2-20 \n");
	printf("%d m/s로 달리던 자동차 A와\n", Va);
	printf("%d m/s로 달리던 자동차 B가 동시에 브레이크를 밟아 일정하게 감속시켜서 자동차 A는 %d s만에 자동차 B는 %d s만에 정지하였다 \n\n", Vb, V0a, V0b);
	printf("(a) 자동차 A와 B의 가속도의 크기는 각각 얼마일까?\n\n");
	printf("(b) 두 자동차의 속도가 같아지는 때는 브레이크를 밟은 후 몇 초일까?\n\n");
	printf("(c) 브레이크를 밟은 후 정지할 때까지 어떤 자동차가 얼마나 더 걸리는가?\n\n");
	printf("(d) 자동차 A가 B와 같은 비율로 감속시킨다면 정지할 때까지 걸리는 시간은 몇 초인까?\n\n");
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

void Excersize_2_22(int solution, int answer)
{
	int V = 10;
	int sec = 2;
	double distance = 39.6;

	printf("\n\n");
	printf("2-22 \n");
	printf("어떤 높이에서 %d m/s의 속도로 연직 아래로 공을 던졌다.\n\n", V);
	printf("(a) 공을 던진 후 %d s 후의 속도를 구하라.\n\n", sec);
	printf("(b) 그동안 낙하한 거리는 얼마인가?\n", distance);
}

void Excersize_2_23(int solution, int answer)
{
	double high = 2.2;
	double sec = 0.3;

	printf("2-23 \n");
	printf("낙하하는 돌이 높이가 %.1lf m 인 창문을 지나가는 데 %.1lf s 걸린다.\n\n", high, sec);
	printf("돌은 창문의 꼭대기에서 얼마나 높은 곳에서 떨어졌는가?\n");
}


void Excersize_2_24(int solution, int answer)
{
	double height = 39.2;
	double second_velocity = 5;

	printf("\n\n");
	printf("2-24 \n");
	printf("높이가 %39.2lf m인 10층 옥상에서\n", height);
	printf("공을 수평방향으로 초속도 %d m/s로 던졌다.\n\n", second_velocity);
	printf("(a) 공이 지면에 떨어지는 데 걸리는 시간은 얼마인가?\n\n");

	printf("(b) 공은 건물에서 수평으로 얼마의 거리에 떨어지는가?\n\n");
}

void Excersize_2_25(int solution, int answer)
{
	double velocity1 = 5.50;
	int distance1 = 100;

	printf("\n\n");
	printf("2-25 \n");
	printf("헬리콥터가 %.2lf m/s의 속력으로 수직하게 올라가고 있다.\n", velocity1);
	printf("지면으로부터 %d m 높이에서 창문을 통해 상자를 떨어뜨렸다. \n\n", distance1);
	printf("그 상자가 지면에 도달하는 데 걸리는 시간은 얼마인가? \n\n");
}

void Excersize_2_26(int solution, int answer)
{
	double distance = 15.0;

	printf("\n\n");
	printf("2-26 \n");
	printf("그림은 연직 위로 던진 물체의 운동을 설명한 것이다.\n\n");
	printf("(a) 돌은 %.1lf m에서 얼마나 빨리 운동하겠는가?\n\n", distance);
	printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가?\n\n");
	printf("(c) (b)에서 답이 두 개인 이유가 무엇인가?\n\n");
}

void Excersize_2_27(int solution, int answer)
{
	double high = 75.0;
	double velocity = 12.0;


	printf("\n\n");
	printf("2-27 \n");
	printf("그림과 같이 높이가 %.lf m 의 절벽 끝에서             \n", high);
	printf("%.lf m/s 의 속력으로 돌을 수직 상방으로 던져 올렸다. \n\n", velocity);

	printf("(a) 얼마 후에 돌이 절벽 아래 지면에 도달하겠는가?  \n\n");
	printf("(b) 돌이 절벽 아래 지면에 부딪히기 직전의 솔력은 얼마인가?  \n\n");
	printf("(c) 돌이 움직인 총 거리는 얼마인가?  \n\n");
}

void Excersize_2_28(int solution, int answer)
{
	printf("\n\n");
	printf("2-28 \n");
	printf("초속도  m/s로 연직 위로 던진 물체가 있다. \n\n");

	printf("(a) 이 물체가 올라갈 수 있는 최고높이 H는 얼마인가? \n");

	printf("(b) 이 물체가 다시 지면에서 떨어지는 데 걸리는 시간은 얼마인가? \n");
}

void Excersize_2_29(int solution, int answer)
{
	printf("\n\n");
	printf("2-29 \n");
	printf("그림은 연직 위로 던진 물체의 운동을 설명한 것이다.\n\n");
	printf("이 운동에 대해 잘못 설명한 것은?\n\n");
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
	Excersize_2_2(0, 0);
	Excersize_2_3(0, 0);
	Excersize_2_4(0, 0);
	Excersize_2_5(0, 0);
	Excersize_2_6(0, 0);
	Excersize_2_7(0, 0);
	Excersize_2_8(0, 0);
	Excersize_2_9(0, 0);
	Excersize_2_10(0, 0);
	Excersize_2_11(0, 0);
	Excersize_2_12(0, 0);
	Excersize_2_13(0, 0);
	Excersize_2_14(0, 0);
	Excersize_2_15(0, 0);
	Excersize_2_16(0, 0);
	Excersize_2_17(0, 0);
	Excersize_2_18(0, 0);
	Excersize_2_19(0, 0);
	Excersize_2_20(0, 0);
	Excersize_2_21(0, 0);
	Excersize_2_22(0, 0);
	Excersize_2_23(0, 0);
	Excersize_2_24(0, 0);
	Excersize_2_25(0, 0);
	Excersize_2_26(0, 0);
	Excersize_2_27(0, 0);
	Excersize_2_28(0, 0);
	Excersize_2_29(0, 0);
}

*/