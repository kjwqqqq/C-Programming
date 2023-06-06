#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_1(int solution, int answer)
{
    srand(time(NULL));

    double north_distance1 = 130.0 + rand() % (13 + 1) - 6;
    double south_distance = 76.7 + rand() % (7 + 1) - 4;
    double north_distance2 = 80.5 + rand() % (8 + 1) - 4;
    double y_displacement = 0.0;
    double displacement_a = 0.0;
    double displacement_b = 0.0;
    y_displacement = north_distance1 + north_distance2;
    displacement_a = y_displacement - south_distance;
    displacement_b = y_displacement + south_distance;

    printf("\n\n");
    printf("2-1 \n");
    printf("대형기동헬기가 기지를 출발하여 북쪽으로 %4.1lf km를 날아간 후\n", north_distance1);
    printf("짐을 내려놓고 남쪽으로 %4.1lf km를 날아가 다른 물건을 싣고 \n", south_distance);
    printf("다시 북쪽으로 %4.1lf km를 날아 착륙하였다.\n\n", north_distance2);
    printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ?\n\n");

    if (solution == SHOW)
    {
        printf("============================= 풀 이 =============================\n\n");
        printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ?\n\n");
        printf("관련 공식은 Δy = Δy1 - Δy2 \n");
        printf("Δy1은 총 북쪽으로 날아간 거리, Δy2는 총 남쪽으로 날아간 거리\n\n");
        printf("Δy = Δy1 - Δy2\n");
        printf("    = %6.2lfkm - %6.2lfkm\n", y_displacement, south_distance);
        printf("    = %6.2lfkm\n\n", displacement_a);
    }

    if (answer == SHOW)
    {
        printf("============================= 정 답 =============================\n\n");
        printf("Δy = %4.1lf km\n\n", displacement_a);
    }

    if (solution == SHOW)
    {
        printf("=================================================================\n\n");
        printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가 ? \n\n");
        printf("관련 공식은 Δy = Δy1 + Δy2 \n");
        printf("Δy = Δy1 + Δy2\n");
        printf("    = %6.2lfkm + %6.2lfkm\n", y_displacement, south_distance);
        printf("    = %6.2lfkm\n\n", displacement_b);
    }

    if (answer == SHOW)
    {
        printf("========================= 정 답 =================================\n\n");
        printf("Δy = %4.1lfkm \n\n", displacement_b);
        printf("=================================================================\n\n");
    }

}

void Excersize_2_3(int solution, int answer) // 한라대학교 미래모빌리티공학과 김종선
{
    //변수 선언 지역
    srand(time(NULL));


    double distance = 408.0 + rand() % (40 + 1) - 20;
    double distance_1 = 408000.0 + rand() % (40800 + 1) - 20400;
    double distance_0 = 0.0 + rand() % (0 + 1) - 0;
    double time_0 = 10.0 + rand() % (2 + 1) - 1;
    double time_h = 12.0 + rand() % (2 + 1) - 1;
    double time_m = 37.0 + rand() % (4 + 1) - 2;
    double time_x = 157 + rand() % (15 + 1) - 7;
    double time_s = 60 + rand() % (6 + 1) - 3;
    double time_f = 9420 + rand() % (942 + 1) - 471;
    double velocity = 43.3 + rand() % (4 + 1) - 2;

    printf("\n\n");
    printf("2-3 \n");
    printf("서울에서 부산까지의 KTX 노선의 거리는 약 %6.2lf km이다\n", distance);
    printf("오전 %6.2lf 시에 서울역을 출발한 KTX가 %6.2lf 시 %6.2lf 분 부산역에 도착하였다.\n\n", time_0, time_h, time_m);

    printf("열차의 평균속력은 몇 m/s인가?\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");
        // your code here
        printf("관련 공식은 : vavg = Δx / Δt입니다 \n\n");
        printf("vavg : 평균속력, Δx  : 변위, Δt : 시간변화량\n");
        printf("vavg = (%6.2lfkm - %6.2lfkm) / {(%6.2lfh + %6.2lfm) - (%6.2lfh)}\n\n", distance, distance_0, time_h, time_m, time_0);
        printf("km/h 를 m/s로 변환해보면\n");
        printf("%6.2lfkm * 1000m/km = 408000m\n2h 37m = 2h * 3600s/h + 37m * 60s/m = %6.2lfs\n\n", distance, time_f);
        printf("vavg = Δx / Δt\n");
        printf("     = %6.2lfm / %6.2lfs\n", distance_1, time_f);
        printf("     = %6.2lfm/s\n\n", velocity);

        printf("=================================================================\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("평균속력 vavg = % 6.2lfm/s \n\n", velocity);

        printf("=================================================================\n");
        printf("\n\n\n");
    }
}


void Excersize_2_5(int solution, int answer) //한라대학교 미래모빌리티공학과 마성빈
{
    srand(time(NULL));

    double distance1 = 200 + rand() % (20 + 1) - 10;
    double velocity1 = 90 + rand() % (10 + 1) - 4;
    double distance2 = 200 + rand() % (20 + 1) - 10;
    double velocity2 = 50 + rand() % (10 + 1) - 2;
    double all_distance = 0;
    double all_time = 0;
    double time1 = 0;
    time1 = distance1 / velocity1;
    double time2 = 0;
    time2 = distance2 / velocity2;
    double time3 = 1;
    double displacement = 0;
    double average_velocity = 0;
    double average_speed = 0;

    printf("\n\n");
    printf("2-5 \n");
    printf("어떤 사람이 고속도로를 처음 %6.2lf km는 %6.2lf km/h의 속력으로 달리고, \n", distance1, velocity1);
    printf("1시간 동안 점심식사를 한 후에 다시 %6.2lf km를 %6.2lf km/h로 달려서 되돌아왔다. \n\n", distance2, velocity2);
    printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가?\n\n");
    printf("(b) 이 사람의 여행과정에서 평균 속도는 얼마인가?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");

        printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가?\n\n");

        printf("관련 공식은  vavg = Δx / Δt\n");
        printf("vavg: 평균속력, Δx: 거리변화량, Δt: 시간변화량\n");
        printf("x1:갈 때 거리, x2: 올 때 거리. t1: 갈 때 시간, t2: 올 때 시간, t3: 식사 한 시간, v1: 갈 때 속력, v2: 올 때 속력\n\n");


        printf("t1 = %5.2lfkm / %5.2lfkm/h = %5.2lfh\n", distance1, velocity1, distance1, velocity1, time1);
        printf("t2 = %5.2lfkm / %5.2lfkm/h = %5.2lfh\n", distance2, velocity2, distance2, velocity2, time2);
        printf("t3 = %5.2lfh\n\n", time3);

        all_distance = distance1 + distance2;
        printf("Δx = %5.2lfkm + %5.2lfkm = %5.2lfkm \n\n", distance1, distance2, all_distance);

        all_time = time1 + time2 + time3;
        printf("Δt = %5.2lfh + %5.2lfh + %5.2lfh = %5.2lfh \n\n", time1, time2, time3, all_time);


        all_distance = distance1 + distance2;
        all_time = time1 + time2 + time3;
        average_velocity = all_distance / all_time;
        printf("vavg = Δx / Δt\n");
        printf("     =  %5.2lfkm /  %5.2lfh\n", all_distance, all_time);
        printf("     =  %5.2lfkm/h\n\n", average_velocity);



    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("이 사람의 여행과정에서 평균 속력: %5.2lfkm/h\n\n", average_velocity);


    }




    if (solution == SHOW)
    {

        printf("=========================   풀 이   =============================\n\n");

        printf("(b) 이 사람의 여행과정에서 평균 속도는 얼마인가?\n\n");

        printf("관련 공식은  vavg = Δx / Δt\n");
        printf("vavg: 평균속도, Δx: 거리변화량, Δt: 시간변화량 \n\n");

        displacement = distance1 - distance2;
        printf("Δx = %5.2lfkm - %5.2lfkm = %5.2lfkm\n\n", distance1, distance2, displacement);

        all_time = time1 + time2 + time3;
        printf("Δt = %5.2lfh + %5.2lfh + %5.2lfh = %5.2lfh\n\n", time1, time2, time3, all_time);


        all_time = time1 + time2 + time3;
        average_speed = displacement / all_time;
        printf("vavg = Δx / Δt\n");
        printf("     = %5.2lfkm / %5.2lfh\n", displacement, all_time);
        printf("     = %5.2lfkm/h\n\n", average_speed);


    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("이 사람의 여행과정에서 평균 속도: %5.2lf km/h\n\n", average_speed);
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}

void Excersize_2_9(int solution, int answer) { // 한라대학교 미래모빌리티공학과 최준혁
    srand(time(NULL));
    double velocity = 100 + rand() % (10 + 1) - 5;
    double con_velocity = velocity / 3.6;
    double zero_back1 = 7.10 + rand() % (3 + 1) - 2;
    double con_accel_1 = (con_velocity / zero_back1);
    double zero_back2 = 11.2 + rand() % (5 + 1) - 3;
    double con_accel_2 = (con_velocity / zero_back2);

    printf("\n\n");
    printf("2-9 \n");
    printf("독일에서 생산된 쿠페 승용차의 제로백이 %6.2lf s라고 한다.\n", zero_back1);
    printf("(멈춘 상태에서 출발하여 속도가 % 6.2lf km/h에 도달하는 데 걸리는 시간)\n\n", velocity);
    printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
    printf("(b) 어느 전기 자동차의 제로백이 %6.2lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);
    if (solution == SHOW)
    {
        printf("\n\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
        printf("관련 공식은 a = Δv / Δt 입니다.\n");
        printf("v:나중속도, v0:초기속도, t:시간, a:가속도 \n\n");
        printf("km/h를 m/s로 변환합니다\n");
        printf("%6.2lf km/h = %6.2lf km/h / (1000m / 1km * 1h / 3600s) = %6.2lf m/s\n\n", velocity, velocity, con_velocity);
        printf("a = Δv / Δt = (v - v0) / (t - 0)\n");
        printf("  = (%6.2lf m/s - 0 m/s) / (%6.2lf s - 0 s)\n", con_velocity, zero_back1);
        printf("  = %6.2lf m/s^2\n\n", con_accel_1);
    }


    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("(a) a = %6.2lf m/s^2\n\n", con_accel_1);
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 어느 전기 자동차의 제로백이 %6.2lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);
        printf("관련 공식은 a = Δv / Δt 입니다.\n");
        printf("Δv:나중속도, Δt:시간, a:가속도 \n\n");

        printf("a = Δv / Δt = (v - v0) / (t - 0)\n");
        printf("  = (%6.2lf m/s - 0 m/s) / (%6.2lf s - 0 s)\n", con_velocity, zero_back2);
        printf("  = %6.2lf m/s^2\n\n", con_accel_2);
    }


    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("(b) a = %6.2lf m/s^2\n\n", con_accel_2);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

}

void Excersize_2_11(int solution, int answer)//한라대학교 미래모빌리티공학과 원유빈
{
    srand(time(NULL));

    double velocity_m_s = 0.0;
    double acceleration = 0.0;
    double velocity_i = 90.0 + rand() % (10 + 1) - 4;
    double velocity_f = 0.0;
    double x_displacement = 50.0 + rand() % (10 + 1) - 2;

    printf("\n\n");
    printf("2-11 \n");
    printf("자동차 판매원이 어떤 스포츠카의 장점을 설명하였다.\n");
    printf("이 스포츠카는 %6.2lf km/h의 속도로 달리다가 브레이크를 밟은 후\n", velocity_i);
    printf("%6.2lf m 이내에서 정지할 수 있는 성능을 갖고 있다고 한다.\n\n", x_displacement);
    printf("(a) 이 경우 자동차의 가속도는 몇 m/s^2인가?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");

        printf("관련 공식 : v^2 - v0^2 = 2 * a * Δx\n");
        printf("v:나중속도, v0:처음속도, a:가속도, Δx :거리변화량\n\n");

        velocity_m_s = velocity_i * 1000 / 3600;

        printf("km/h 를 m/s 로 단위 변환\n");
        printf("%6.2lf km/h = (%6.2lf * 1000 / 3600) m/s = %6.2lf m/s\n\n", velocity_i, velocity_i, velocity_m_s);

        acceleration = (velocity_f * velocity_f) - (velocity_m_s * velocity_m_s) / (2 * x_displacement);

        printf("v^2 - v0^2 = 2 * a * Δx\n");
        printf("(%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * a * %6.2lf m\n", velocity_f, velocity_m_s, x_displacement);
        printf("a = ((%6.2lf m/s)^2 - (%6.2lf m/s)^2) / (2 * %6.2lf m)\n", velocity_f, velocity_m_s, x_displacement);
        printf("  = %6.2lf m/s^2\n", acceleration);
    }

    if (answer == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   정 답   =============================\n\n");

        acceleration = (velocity_f * velocity_f) - (velocity_m_s * velocity_m_s) / (2 * x_displacement);

        printf("a = %6.2lf m/s^2\n", acceleration);
    }
}
void Excersize_2_15(int solution, int answer)
{
    srand(time(NULL));

    double velocity_f = 120.0 + rand() % (12 + 1) - 5;
    double velocity_m_s = 0;
    double x_displacement = 240.0 + rand() % (24 + 1) - 10;
    double velocity = 0;
    double a = 0;
    double time = 0;

    printf("\n\n");
    printf("2-15 \n");
    printf("소형비행기가 이륙하기 위해 필요한 속력은 %6.2lf km/h 이다.\n\n", velocity_f);  // %5.2lf로 아래도 통일할것
    printf("(a) 이 비행기가 활주로를 %6.2lf m 달린 후 이륙하기 위해 필요한 최소의 가속도는 얼마인가? \n\n", x_displacement);
    printf("(b) 이륙하는 데 걸리는 시간은 얼마인가? \n");

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        // your code here
        printf("(a) 이 비행기가 활주로를 %6.2lf m 달린 후 이륙하기 위해 필요한 최소의 가속도는 얼마인가? \n\n", x_displacement);

        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n");   // 수평운동의 경우

        printf("v: 나중속도, v0: 처음속도, a: 가속도, Δx: 거리변화량   \n\n");

        printf("v^2 - v0^2 = 2 * a * Δx\n");
        velocity_m_s = velocity_f / 3.6;
        printf("(%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * a * %6.2lf m\n\n", velocity_m_s, velocity, x_displacement);
        a = (pow(velocity_m_s, 2) - pow(velocity, 2)) / (2 * x_displacement);
        printf("a = (%6.2lf m/s)^2 / 2 * %6.2lf m\n", velocity_m_s, x_displacement);
        printf("  = %6.2lf m/s^2\n\n", a);

        //printf(" %lf", velocity_1);
    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("a =  %6.2lf m/s^2\n", a);
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");

        printf("(b) 이륙하는 데 걸리는 시간은 얼마인가? \n\n");

        printf("관련 공식은 v = v0 + a * t 입니다.\n");

        printf("v: 나중속도,  v0: 초기속도, a: 가속도, t: 시간\n\n");
        printf("v =  v0 + a * t\n");
        printf("  = %6.2lf m/s = %6.2lf m/s + %6.2lf m/s^2 * t\n\n", velocity_m_s, velocity, a);
        time = velocity_m_s / (velocity + a);
        printf("t = %6.2lf m/s / %6.2lf m/s^2\n", velocity_m_s, a);
        printf("  = %6.2lf s\n\n", time);

    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("t = %6.2lf s\n\n", time);

        printf("=================================================================\n");
        printf("\n\n\n");
    }

}
void Excersize_2_17(int solution, int answer) //한라대학교 미래모빌리티공학과 마성빈
{
    srand(time(NULL));
    double east_velocity = 6.0 + rand() % (10 + 1) - 3; //동쪽으로 갈 때 속도
    double west_velocity = 4.0 + rand() % (10 + 1) - 2; //서쪽으로 갈 때 속도
    double delta_velocity;
    double delta_time;
    double time1 = 10 + rand() % (10 + 1) - 5; //방향 변환 전 걸린 시간
    double time2;
    double time0 = 0;
    double acceleration; //가속도
    double distance1; //속도가 0이 될 때까지 이동한 거리
    double distance2;//출발한지 10s 후 이동한 거리
    double displacement; //출발한지 10s 후 변위
    double distance3;

    printf("\n\n");
    printf("2-17 \n");
    printf("처음에 동쪽으로 %6.2lfm/s의 속도로 운동하던 물체가 일정한 비율로 속도가 변하여 \n", east_velocity);
    printf("%6.2lfs 후 서쪽으로 %6.2lfm/s로 운동하였다. \n\n", time1, west_velocity);
    printf("(a) %5.2lfs 동안 속도의 변화량은 얼마인가?\n\n", time1);
    printf("(b) 가속도의 크기는 얼마이며, 그 방향은 어느 방향인가?\n\n");
    printf("(c) 출발한 지 몇 초 후에 속도가 0이 되는가?\n\n");
    printf("(d) 속도가 0이 될 때까지 이동한 거리는 얼마인가?\n\n");
    printf("(e) 출발한 지 %6.2lfs 후의 변위와 이동한 거리는 각각 얼마인가?\n\n", time1);

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");

        printf("(a) %6.2lfs 동안 속도의 변화량은 얼마인가?\n\n", time1);

        printf("관련 공식은  a = Δv / Δt 입니다.\n");
        printf("a: 가속도, Δv: 속도변화량,  Δt: 시간변화량.\n\n");
        delta_velocity = -east_velocity - west_velocity;
        printf("Δv = v - v0\n");
        printf("    = -%6.2lfm/s - %6.2lfm/s\n\n", east_velocity, west_velocity);
        printf("    = %6.2lfm/s\n\n", delta_velocity);

        delta_time = time1 - time0;
        printf("Δt = t - t0\n");
        printf("    = %6.2lfs - %6.2lfs\n", time1, time0);
        printf("    = %6.2lfs\n\n", delta_time);

        acceleration = delta_velocity / delta_time;
        printf("a   = (v - v0) / (t - t0)\n");
        printf("    = Δv / Δt\n");
        printf("    =  %6.2lfm/s /  %6.2lfs\n", delta_velocity, delta_time);
        printf("    =  %6.2lfm/s^2\n\n", acceleration);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("%6.2lfs 동안 속도의 변화량: %6.2lfm/s^2\n\n", time1, acceleration);
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");

        printf("(b) 가속도의 크기는 얼마이며, 그 방향은 어느 방향인가?\n\n");
        delta_velocity = -east_velocity - west_velocity;
        delta_time = time1 - 0;
        acceleration = delta_velocity / delta_time;
        printf("a: 가속도, |a|: 가속도의 크기\n\n");

        printf("|a| = |%6.2lfm/s^2|\n", acceleration);
        printf("    = %6.2lfm/s^2\n\n", fabs(acceleration));

        printf("동쪽을 (+)방향, 서쪽을 (-)방향으로 지정\n\n");
        printf("방향 = (-), 서쪽 방향\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("가속도의 크기: %6.2lfm/s^2\n\n", fabs(acceleration));
        printf("방향: (-), 서쪽 방향\n\n");
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");

        printf("(c) 출발한 지 몇 초 후에 속도가 0이 되는가?\n\n");

        printf("관련 공식은 v = v0 + a x t 입니다.\n");
        printf("v: 나중속도, v0: 초기속도, a: 가속도, t: 시간\n\n");

        printf("v  =      0m/s\n");
        printf("v0 = %6.2lfm/s\n", east_velocity);
        delta_velocity = -east_velocity - west_velocity;
        delta_time = time1 - 0;
        acceleration = delta_velocity / delta_time;
        printf("a  = %6.2lfm/s^2\n\n", acceleration);

        time2 = (0 - east_velocity) / acceleration;
        printf("t  = (v - v0) / a\n");
        printf("   = (0m/s - %6.2lfm/s) / %6.2lfm/s^2\n", east_velocity, acceleration);
        printf("   = %6.2lfs\n\n", time2);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("속도가 0이 될 때 시간: %6.2lfs\n\n", time2);
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");

        printf("(d) 속도가 0이 될 때까지 이동한 거리는 얼마인가?\n\n");

        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n");   // 수평운동의 경우
        printf("v: 나중속도, v0: 처음속도, a: 가속도, Δx : 거리변화량\n\n");

        printf("v  =      0m/s\n");
        printf("v0 = %6.2lfm/s\n", east_velocity);
        delta_velocity = -east_velocity - west_velocity;
        delta_time = time1 - 0;
        acceleration = delta_velocity / delta_time;
        printf("a  = %6.2lfm/s^2\n", acceleration);
        time2 = (0 - east_velocity) / acceleration;
        printf("t  = %6.2lfs\n\n", time2);

        distance1 = ((0 * 0) - (east_velocity * east_velocity)) / (2 * acceleration);
        printf("Δx1 = (v^2 - v0^2) / 2a\n");
        printf("     = (0^2 - %6.2lfm/s^2) / 2 * %6.2lfm/s^2\n", east_velocity, acceleration);
        printf("     = %6.2lfm\n\n", distance1);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("속도가 0이 될 때까지 이동한 거리: %6.2lfm\n\n", distance1);
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");

        printf("(e) 출발한 지 %6.2lfs 후의 변위와 이동한 거리는 각각 얼마인가?\n\n", time1);

        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n");   // 수평운동의 경우
        printf("v: 나중속도, v0: 처음속도, a: 가속도, Δx : 거리변화량\n\n");

        printf("v0 = 0m/s\n");
        printf("v  = %6.2lfm/s\n", west_velocity);
        acceleration = delta_velocity / delta_time;
        printf("a  = %6.2lfm/s^2\n\n", acceleration);

        distance2 = ((west_velocity * west_velocity) - (0 * 0)) / (2 * acceleration);
        printf("Δx2 = (v^2 - v0^2) / 2a\n");
        printf("     = ((%6.2lfm/s)^2 - 0)) / 2 * %6.2lfm/s^2\n", west_velocity, acceleration);
        printf("     = %6.2lfm\n\n", distance2);

        distance3 = distance1 + fabs(distance2);
        printf("이동한 거리 = Δx1 + | Δx2 | \n");
        printf("            = %6.2lfm + %6.2lfm\n", distance1, fabs(distance2));
        printf("            = %6.2lfm\n\n", distance3);

        displacement = distance1 + distance2;
        printf("변위 = Δx1 + Δx2\n");
        printf("     = %6.2lfm + (%6.2lfm)\n", distance1, distance2);
        printf("     = %6.2lfm\n", displacement);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("이동한 거리 = %6.2lfm\n\n", distance3);

        printf("변위 = %6.2lfm\n\n", displacement);

        printf("=================================================================\n");
    }
}

void Excersize_2_19(int solution, int answer) // 한라대학교 미래모빌리티공학과 최준혁
{
    // 변수 선언 지역
    srand(time(NULL));
    double velocity = 120 + rand() % (12 + 1) - 6;
    double police_velocity = 0;
    double acceleration = 10 + rand() % (10 + 1) - 5;
    double converted_acceleration = (acceleration / 3.6);
    double distance = velocity / 3.6;
    double a, b, c = 0, d, e = 0.0;
    a = 0.5 * converted_acceleration;
    b = -1 * (velocity / 3.6);
    d = b * b - 4.0 * a * c;
    e = sqrt(d);


    printf("\n\n");
    printf("2-19 \n");
    printf("%6.2lf km/h의 속력으로 달리는 과속 운전자가 정지해 있는 경찰관을 지나쳤다.\n\n", velocity);
    printf("이 경찰관은 즉시 일정한 가속도 %6.2lf km/h/s로(혼합된 단위를 유의하라) 쫓아가기 시작하였다.\n\n", acceleration);
    printf("(a) 과속 운전자가 일정한 속력을 유지한다고 가정하면 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 얼마인가?\n\n");
    printf("(b) 이때 경찰관은 얼마나 빨리 달렸겠는가?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 과속 운전자가 일정한 속력을 유지한다고 가정하면 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 얼마인가?\n\n");
        printf("관련 공식: x = x0 + v0 * t + 1/2 * a * t^2 \n");
        printf("x:나중위치, x0:초기위치, v0:초기속도, t:시간, a:가속도 \n");
        printf("과속 운전자가 t초간 달린 거리:x1, 경찰차가 t초간 달린 거리:x2\n\n");

        printf("혼합된 단위를 m/s로 변환\n");
        printf("a = %6.2lf km/h/s = %6.2lf km/h/s / (1000m / 1km * 1h / 3600s) = %6.2lf m/s^2\n\n", acceleration, acceleration, converted_acceleration);

        printf("x1 = v0t + 1/2 * a * t^2 = (%6.2lf m/s)t + 0 * t^2\n", velocity / 3.6);
        printf("x2 = x0 + v0t + 1/2 * a * t^2 = 0 m + 0 m/s * t + 1/2 * %6.2lf * t^2 m\n\n", velocity / 3.6);

        printf("x1 = x2 = (%6.2lf m/s)t = 1/2 * %6.2lf m/s^2 * t^2\n", (velocity / 3.6), converted_acceleration);
        printf("%6.2lft^2 - %6.2lft + 0 = 0\n", (acceleration / 3.6) / 2, velocity / 3.6);
        printf("t1 = %6.2lf s, t2 = %6.2lf s\n\n", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
    }


    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        if ((-b + e) / (2.0 * a) >= (-b - e) / (2.0 * a)) {
            printf("t = %6.2lf s (t > 0)\n\n", (-b + e) / (2.0 * a));
            distance = distance * round((-b + e) / (2.0 * a));
        }
        else {
            printf("t = %6.2lf s (t > 0)\n\n", (-b - e) / (2.0 * a));
            distance = distance * round((-b - e) / (2.0 * a));
        }
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 이때 경찰관은 얼마나 빨리 달렸겠는가?\n\n");
        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n");
        printf("v:나중속도, v0:처음속도, a:가속도, Δx:거리변화량\n\n");
        printf("v^2 - (0 m/s)^2 = 2 * %6.2lf m/s * %6.2lf m\n", converted_acceleration, distance);
        police_velocity = sqrt(2 * converted_acceleration * distance);
        printf("v = sqrt(2 * %6.2lf m/s^2 * %6.2lf m) = sqrt(%6.2lf) m/s = %.2lf m/s\n\n", converted_acceleration, distance, 2 * converted_acceleration * distance, police_velocity);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("v = %6.2lf m/s = %6.2lf km/h\n\n", police_velocity, police_velocity * 3.6);
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}
void Excersize_2_21(int solution, int answer)
{
    double h = 380 + rand() % (38 + 1) - 19;
    double h0 = 0;
    double g = 9.8;
    double t = 0;
    double v = 0;
    double v0 = 0;
    double y0 = 0;
    double initialvelocity = 0;
    t = sqrt(2 * h / g);
    t = sqrt(2 * h / g);
    v = -g * t;

    printf("\n\n");
    printf("2-21 \n");
    printf("만약 높이가 %6.2lf m인 빌딩 옥상에서 지면을 향해 수직으로 물체를 낙하시켰다고 하자.\n\n", h);
    printf("(a) 이 물체가 지면에 떨어지는 데까지 걸리는 시간을 구하라.\n\n");
    printf("(b) 지면에 도달하기 직전의 속도를 구하라.\n\n");

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 이 물체가 지면에 떨어지는 데까지 걸리는 시간을 구하라.\n\n");
        printf("관련공식 y = y0 + v0 * t + 1/2 * a * t^2\n");
        printf("y : 높이, y0 : 처음높이, v0 : 처음속도, t : 시간, a : 가속도\n\n");
        printf("중력가속도는 아래 방향이므로 %6.2lfm/s^2 입니다.\n\n", -g);
        printf("y = y0 + v0 * t - 1/2 * g * t^2\n");
        printf("%6.2lfm = %6.2lfm + %6.2lfm/s * t + 1/2 * %6.2lf m/s^2 * t^2\n", h, y0, v0, -g);
        printf("        = 1/2 * %6.2lfm/s^2 * t^2\n", -g);
        printf("t = sqrt(2 * %6.2lfm / %6.2lfm/s^2)\n", h, -g);
        printf("  = %6.2lfs\n\n", t);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("t = %6.2lfs\n\n", t);
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 지면에 도달하기 직전의 속도를 구하라.\n\n");
        printf("관련 공식 v = v0 + a * t\n");
        printf("v : 나중속도, v0 : 처음속도, a : 가속도, t : 시간\n\n");
        printf("중력가속도는 아래 방향이므로 %6.2lfm/s^2 입니다.\n\n", -g);
        printf("v = v0 + a * t\n");
        printf("  = %6.2lfm + %6.2lf m/s^2 * %6.2lfs\n", v0, -g, t);
        printf("  = %6.2lfm/s\n\n", v);

    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("v = %6.2lfm/s\n\n", v);
        printf("=================================================================\n\n");
    }
}

void Excersize_2_23(int solution, int answer) //한라대학교 미래모빌리티공학과 김태민
{
    srand(time(NULL));
    double h = 2.2 + rand() % (2 + 1) - 1;
    double t = 0.3 + rand() % (1 + 1) - 0;
    double g = 9.8;
    double Δy = 0;
    double v = 0;
    double v0 = 0;
    v = (h - 0.5 * -g * t * t) / t;
    Δy = -(v * v) / (2 * -g);

    printf("2-23 \n\n");
    printf("낙하하는 돌이 높이가 %6.2lfm 인 창문을 지나가는 데 %6.2lfs 걸린다.\n", h, t);
    printf("돌은 창문의 꼭대기에서 얼마나 높은 곳에서 떨어졌는가?\n\n");
    printf("(a) 돌이 창문의 꼭대기에서 떨어진 속력을 구하여라\n\n");
    printf("(b) 돌이 창문의 꼭대기보다 높은 곳을 구하여라\n\n");

    if (solution == SHOW)
    {
        printf("==============================  풀이  ===================================\n\n");
        printf("(a) 돌이 창문의 꼭대기에서 떨어진 속력을 구하여라\n\n");
        printf("관련 공식은 Δy = v0 * t + 1/2 * a * t^2\n");
        printf("Δy : 창문에서 낙하하는 돌의 높이, v0 : 창문 꼭대기에서의 돌의 속도, a : 가속도 , t : 시간\n\n");
        printf("중력 가속도는 연직 아래 방향이므로 %6.2lf m/s^2 입니다.\n\n", -g);
        printf("  Δy  = v0 * t - 1/2 * g * t^2\n");
        printf("%6.2lfm= v0 * %6.2lfs - 1/2 * %6.2lf * (%6.2lfs)^2\n\n", h, t, g, t);
        printf("v0 = (%6.2lfm) - 1/2 * (%6.2lfm/s^2) * (%6.2lfs)^2 / (%6.2lfs)\n", h, g, t, t);
        printf("   = %6.2lfm/s\n\n", v);
    }
    if (answer == SHOW)
    {
        printf("==============================  정답  ===================================\n\n");
        printf("v0 = %6.2lfm/s \n\n", v);
    }
    if (solution == SHOW)
    {
        printf("==============================  풀이  ===================================\n\n");
        printf("(b) 돌이 창문의 꼭대기 높이보다 높은 곳을 구하여라\n\n");
        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δy입니다.\n");
        printf("v:나중속도, v0:처음속도, a:가속도, Δy:거리변화량\n\n");
        printf("중력 가속도는 아래 방향이므로 %6.2lf m/s^2 입니다.\n\n", -g);
        printf("v0^2 - v^2 = 2 * g * Δy\n");
        printf("(%6.2lfm/s)^2 - (%6.2lfm/s)^2 = 2 * %6.2lfm/s^2 * Δy\n", v, v0, -g);
        printf(" %6.2lfm/s    -  %6.2lfm/s    = 2 * %6.2lfm/s^2 * Δy\n\n", (v0 * v0), (v * v), -g);
        printf("Δy = %6.2lfm/s^2 / (2 * %6.2lf m/s^2)\n", (v * v), -g);
        printf("    = %6.2lfm\n\n", Δy);
    }

    if (answer == SHOW)
    {
        printf("==============================  정답  ===================================\n\n");
        printf("Δy = %6.2lfm\n\n", Δy);
        printf("=========================================================================\n");
    }
}

void Excersize_2_25(int solution, int answer) // 한라대학교 미래모빌리티공학과 최준혁
{
    double velocity = 5.50 + rand() % (3 + 1) - 2;
    double height = 100 + rand() % (10 + 1) - 5;
    double gravity_accel = 9.80;
    double time = 0.0;

    double a, b, c = 0, d, e = 0.0;

    a = -gravity_accel / 2;
    b = velocity;
    c = height;
    d = b * b - 4.0 * a * c;
    e = sqrt(d);

    printf("\n\n");
    printf("2-25 \n");
    printf("핼리콥터가 %6.2lf km/h의 속력으로 수직하게 올라가고 있다.\n", velocity);
    printf("지면으로부터 %6.2lf m 높이에서 창문을 통해 상자를 떨어뜨렸다.\n\n", height);
    printf("그 상자가 지면에 지면에 도달하는 데 걸리는 시간은 얼마인가?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================    풀 이   ============================\n\n");
        printf("그 상자가 지면에 지면에 도달하는 데 걸리는 시간은 얼마인가?\n\n");
        printf("관련 공식은 y = y0 + v0t + 1/2 * a * t^2 입니다.\n");
        printf("y: 나중위치, y0: 처음위치, v0: 처음속도, t: 시간, a: 가속도\n\n");
        printf("중력 가속도는 아래 방향이므로 -%6.2lf m/s^2 입니다.\n", gravity_accel);
        printf("y = y0 + v0t + 1/2 * a * t^2\n");
        printf("0 = %6.2lf m + %6.2lf m/s * t + 1/2 * %6.2lf m/s^2 * t^2\n\n", height, velocity, -gravity_accel);

        printf("1/2 * %6.2lf m/s^2 * t^2 + %6.2lf m/s * t + %6.2lf = 0\n\n", -gravity_accel, velocity, height);

        printf("t1 = %6.2lf s, t2 = %6.2lf s\n\n", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
    }


    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        if ((-b + e) / (2.0 * a) >= (-b - e) / (2.0 * a)) {
            time = (-b + e) / (2.0 * a);
            printf("t = %6.2lf s (t > 0)\n\n", time);
        }
        else {
            time = (-b - e) / (2.0 * a);
            printf("t =  %6.2lf s (t > 0)\n\n", time);
        }
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}

void Excersize_2_27(int solution, int answer) // 한라대학교 미래모빌리티공학과 이재혁
{
    srand(time(NULL));

    double height_0 = 75.0 + rand() % (14 + 1) - 7;
    double height = 0;
    double velocity_f = 0;
    double velocity_i = 12.0 + rand() % (3 + 1) - 2;
    double gravity = -9.8;
    double total_distance = 0;
    double ans_1 = 0, ans_2 = 0;
    double a = 0, b = 0, c = 0, d = 0, e = 0;

    printf("\n\n");
    printf("2-27 \n");
    printf("그림과 같이 높이가 %6.2lf m 의 절벽 끝에서 %6.2lf m/s 의 속력으로 돌을 수직 상방으로 던져 올렸다.\n\n", height_0, velocity_i);
    printf("(a) 얼마 후에 돌이 절벽 아래 지면에 도달하겠는가?  \n\n");
    printf("(b) 돌이 절벽 아래 지면에 부딪히기 직전의 속력은 얼마인가?  \n\n");
    printf("(c) 돌이 움직인 총 거리는 얼마인가?  \n\n");

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");

        printf("(a) 얼마 후에 돌이 절벽 아래 지면에 도달하겠는가?  \n\n");

        printf("관련공식은 y = y0 + v0 * t + 1/2 * a * t^2입니다. \n");

        printf("y:나중위치, y0:초기위치 , v0:초기속도,  t:시간, a:가속도 \n\n");

        printf("중력가속도 a 는  아래 방향 이므로 %6.2lf m/s^2 입니다.\n\n", gravity);

        printf("%6.2lf m = %6.2lf m + %6.2lf m/s * t + 1/2 * (%6.2lf m/s^2) * t^2\n\n", height, height_0, velocity_i, gravity);
        a = 0.5 * gravity;
        b = velocity_i;
        c = height_0;
        printf("%6.2lft^2 + %6.2lft + %6.2lf = 0\n\n", a, b, c);
        d = b * b - 4.0 * a * c;
        e = sqrt(d);
        printf("t1 = %6.2lf s, t2 = %6.2lf s\n", (-b - e) / (2.0 * a), (-b + e) / (2.0 * a));
    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("t =  %6.2lf s (t > 0)\n\n", (-b - e) / (2.0 * a));
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n");
        printf("\n");
        printf("(b) 돌이 절벽 아래 지면에 부딪히기 직전의 속력은 얼마인가?  \n\n");

        printf("관련 공식은 v = v0 + a * t 입니다.\n");

        printf("v:나중속도,  v0:초기속도, a:가속도, t:시간\n\n");

        printf("%6.2lf m/s = %6.2lf m/s + (%6.2lf m/s^2 ) * %6.2lf s \n\n", velocity_f, velocity_i, gravity, (-b - e) / (2.0 * a));
        ans_1 = velocity_i + gravity * ((-b - e) / (2.0 * a));
        printf("v = %6.2lf m/s + (%6.2lf m/s^2 ) * %6.2lf s \n", velocity_i, gravity, (-b - e) / (2.0 * a));
        printf("  = %6.2lf m/s\n\n", ans_1);
    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("v = %6.2lf m/s\n\n", ans_1);
    }
    if (solution == SHOW)
    {

        printf("=========================   풀 이   =============================\n\n");

        printf("(c) 돌이 움직인 총 거리는 얼마인가?  \n\n");

        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δy 입니다.\n");   // 수직운동의 경우

        printf("v:나중속도, v0:처음속도, a:가속도, Δy :거리변화량   \n\n");

        printf("(%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * (%6.2lf m/s^2) * Δy\n\n", velocity_f, velocity_i, gravity);
        printf("Δy = ( (%6.2lf m/s)^2 - (%6.2lf m/s)^2 ) / ( 2 * (%6.2lf m/s^2) )  \n", velocity_f, velocity_i, gravity);
        ans_2 = (velocity_f - pow(velocity_i, 2)) / (2 * gravity);
        printf("    = %6.2lf m\n\n", ans_2);

        printf("distance = %6.2lf m * 2 + %6.2lf m\n", ans_2, height_0);
        total_distance = ans_2 * 2 + height_0;
        printf("         = %6.2lf m\n", total_distance);

    }
    if (answer == SHOW)
    {
        printf("\n");
        printf("=========================   정 답   =============================\n\n");

        printf("distance = %6.2lf m\n\n", total_distance);

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

    //Excersize_2_1(1, 1);  //미래모빌리티공학과 고지환 2023.05.21 통과
    //Excersize_2_3(1, 1);  //미래모빌리티공학과 김종선 2023.05.21 통과
    //Excersize_2_5(1, 1);  //미래모빌리티공학과 마성빈 2023.05.21 통과
    //Excersize_2_9(1, 1);  //미래모빌리티공학과 최준혁 2023.05.21 통과
    //Excersize_2_11(1, 1); //미래모빌리티공학과 원유빈 2023.05.21 통과
    //Excersize_2_15(1, 1); //미래모빌리티공학과 이재혁 2023.05.21 통과  
    //Excersize_2_17(1, 1); //미래모빌리티공학과 마성빈 2023.05.21 통과   
    //Excersize_2_19(1, 1); //미래모빌리티공학과 최준혁 2023.05.21 통과
    //Excersize_2_21(1, 1); //미래모빌리티공학과 고지환 2023.05.21 통과 
    //Excersize_2_23(1, 1); //미래모빌리티공학과 김태민 2023.05.21 통과 
    //Excersize_2_25(1, 1); //미래모빌리티공학과 최준혁 2023.05.21 통과 
    //Excersize_2_27(1, 1); //미래모빌리티공학과 이재혁 2023.05.21 통과 

}