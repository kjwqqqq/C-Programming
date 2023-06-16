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


void Excersize_4_17(int solution, int answer)
{
    srand(time(NULL));
    double a = 0;
    double μs = 0.8 +(rand() % (10 + 1) - 5) * 0.1;
    double ret = RAD2DEG(atan(μs));
    printf("\n\n");
    printf("4-17 \n");
    printf("딱딱한 고무와 일반 포장 도로 사이의 마찰 계수는 약%6.2lf이다.\n\n", μs);
    printf("(a) 자동차를 주차할 수 있는 최대 각도는 얼마인가?\n\n");

    if (solution == SHOW)
    {
        printf("============================= 풀 이 =============================\n\n");
        printf("(a) 자동차를 주차할 수 있는 최대 각도는 얼마인가?\n\n");
        printf("관련 공식은 뉴턴의 제2법칙\n");
        printf("∑F : 알짜 힘, x : 거리, y : 높이, m : 질량, Ff : 마찰력, Fg : 물체에 작용하는 중력, μs : 정지마찰계수, Fn : 수직항력\n\n");
        printf("차가 주차 했기 때문에 움직이지 않아  (∑Fx , ∑Fy, a) = 0 입니다.\n\n");
        printf("∑F = m * a\n");
        printf("    = m * 0\n");
        printf("    = 0\n\n");
        printf("∑Fy = Fn - mg * cosθ\n");
        printf("     = 0\n\n");
        printf("Fn = mg * cosθ\n\n");
        printf("∑Fx = mg * sinθ - μs * Fn\n");
        printf("     = (mg * sinθ) - (μs * mg * cosθ)\n");
        printf("     = 0\n\n");
        printf("μs * (mg * cosθ) = (mg * sinθ)\n\n");
        printf("μs = (mg * sinθ) / (mg * cosθ)\n");
        printf("    = sinθ / cosθ\n");  
        printf("    = tanθ\n\n");
        printf("tanθ = μs\n\n");
        printf("θ = arctan(μs)\n");
        printf("   = arctan(%6.2lf)\n",μs);
        printf("   = %6.2lf˚\n\n", ret);
    }   

    if (answer == SHOW)
    {
        printf("============================= 정 답 =============================\n\n");
        printf("θ = %6.2lf˚\n\n", ret);
    }
}

int main(void)
{
    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 4     ========================\n");
    printf("=================================================================\n");

    Excersize_4_17(Show_Solution, Answer);
}