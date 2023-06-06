#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
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
    printf("�����⵿��Ⱑ ������ ����Ͽ� �������� %4.1lf km�� ���ư� ��\n", north_distance1);
    printf("���� �������� �������� %4.1lf km�� ���ư� �ٸ� ������ �ư� \n", south_distance);
    printf("�ٽ� �������� %4.1lf km�� ���� �����Ͽ���.\n\n", north_distance2);
    printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ?\n\n");

    if (solution == SHOW)
    {
        printf("============================= Ǯ �� =============================\n\n");
        printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ?\n\n");
        printf("���� ������ ��y = ��y1 - ��y2 \n");
        printf("��y1�� �� �������� ���ư� �Ÿ�, ��y2�� �� �������� ���ư� �Ÿ�\n\n");
        printf("��y = ��y1 - ��y2\n");
        printf("    = %6.2lfkm - %6.2lfkm\n", y_displacement, south_distance);
        printf("    = %6.2lfkm\n\n", displacement_a);
    }

    if (answer == SHOW)
    {
        printf("============================= �� �� =============================\n\n");
        printf("��y = %4.1lf km\n\n", displacement_a);
    }

    if (solution == SHOW)
    {
        printf("=================================================================\n\n");
        printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ� ? \n\n");
        printf("���� ������ ��y = ��y1 + ��y2 \n");
        printf("��y = ��y1 + ��y2\n");
        printf("    = %6.2lfkm + %6.2lfkm\n", y_displacement, south_distance);
        printf("    = %6.2lfkm\n\n", displacement_b);
    }

    if (answer == SHOW)
    {
        printf("========================= �� �� =================================\n\n");
        printf("��y = %4.1lfkm \n\n", displacement_b);
        printf("=================================================================\n\n");
    }

}

void Excersize_2_3(int solution, int answer) // �Ѷ���б� �̷������Ƽ���а� ������
{
    //���� ���� ����
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
    printf("���￡�� �λ������ KTX �뼱�� �Ÿ��� �� %6.2lf km�̴�\n", distance);
    printf("���� %6.2lf �ÿ� ���￪�� ����� KTX�� %6.2lf �� %6.2lf �� �λ꿪�� �����Ͽ���.\n\n", time_0, time_h, time_m);

    printf("������ ��ռӷ��� �� m/s�ΰ�?\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here
        printf("���� ������ : vavg = ��x / ��t�Դϴ� \n\n");
        printf("vavg : ��ռӷ�, ��x  : ����, ��t : �ð���ȭ��\n");
        printf("vavg = (%6.2lfkm - %6.2lfkm) / {(%6.2lfh + %6.2lfm) - (%6.2lfh)}\n\n", distance, distance_0, time_h, time_m, time_0);
        printf("km/h �� m/s�� ��ȯ�غ���\n");
        printf("%6.2lfkm * 1000m/km = 408000m\n2h 37m = 2h * 3600s/h + 37m * 60s/m = %6.2lfs\n\n", distance, time_f);
        printf("vavg = ��x / ��t\n");
        printf("     = %6.2lfm / %6.2lfs\n", distance_1, time_f);
        printf("     = %6.2lfm/s\n\n", velocity);

        printf("=================================================================\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("��ռӷ� vavg = % 6.2lfm/s \n\n", velocity);

        printf("=================================================================\n");
        printf("\n\n\n");
    }
}


void Excersize_2_5(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
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
    printf("� ����� ��ӵ��θ� ó�� %6.2lf km�� %6.2lf km/h�� �ӷ����� �޸���, \n", distance1, velocity1);
    printf("1�ð� ���� ���ɽĻ縦 �� �Ŀ� �ٽ� %6.2lf km�� %6.2lf km/h�� �޷��� �ǵ��ƿԴ�. \n\n", distance2, velocity2);
    printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�?\n\n");
    printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�?\n\n");

        printf("���� ������  vavg = ��x / ��t\n");
        printf("vavg: ��ռӷ�, ��x: �Ÿ���ȭ��, ��t: �ð���ȭ��\n");
        printf("x1:�� �� �Ÿ�, x2: �� �� �Ÿ�. t1: �� �� �ð�, t2: �� �� �ð�, t3: �Ļ� �� �ð�, v1: �� �� �ӷ�, v2: �� �� �ӷ�\n\n");


        printf("t1 = %5.2lfkm / %5.2lfkm/h = %5.2lfh\n", distance1, velocity1, distance1, velocity1, time1);
        printf("t2 = %5.2lfkm / %5.2lfkm/h = %5.2lfh\n", distance2, velocity2, distance2, velocity2, time2);
        printf("t3 = %5.2lfh\n\n", time3);

        all_distance = distance1 + distance2;
        printf("��x = %5.2lfkm + %5.2lfkm = %5.2lfkm \n\n", distance1, distance2, all_distance);

        all_time = time1 + time2 + time3;
        printf("��t = %5.2lfh + %5.2lfh + %5.2lfh = %5.2lfh \n\n", time1, time2, time3, all_time);


        all_distance = distance1 + distance2;
        all_time = time1 + time2 + time3;
        average_velocity = all_distance / all_time;
        printf("vavg = ��x / ��t\n");
        printf("     =  %5.2lfkm /  %5.2lfh\n", all_distance, all_time);
        printf("     =  %5.2lfkm/h\n\n", average_velocity);



    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("�� ����� ����������� ��� �ӷ�: %5.2lfkm/h\n\n", average_velocity);


    }




    if (solution == SHOW)
    {

        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n\n");

        printf("���� ������  vavg = ��x / ��t\n");
        printf("vavg: ��ռӵ�, ��x: �Ÿ���ȭ��, ��t: �ð���ȭ�� \n\n");

        displacement = distance1 - distance2;
        printf("��x = %5.2lfkm - %5.2lfkm = %5.2lfkm\n\n", distance1, distance2, displacement);

        all_time = time1 + time2 + time3;
        printf("��t = %5.2lfh + %5.2lfh + %5.2lfh = %5.2lfh\n\n", time1, time2, time3, all_time);


        all_time = time1 + time2 + time3;
        average_speed = displacement / all_time;
        printf("vavg = ��x / ��t\n");
        printf("     = %5.2lfkm / %5.2lfh\n", displacement, all_time);
        printf("     = %5.2lfkm/h\n\n", average_speed);


    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("�� ����� ����������� ��� �ӵ�: %5.2lf km/h\n\n", average_speed);
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}

void Excersize_2_9(int solution, int answer) { // �Ѷ���б� �̷������Ƽ���а� ������
    srand(time(NULL));
    double velocity = 100 + rand() % (10 + 1) - 5;
    double con_velocity = velocity / 3.6;
    double zero_back1 = 7.10 + rand() % (3 + 1) - 2;
    double con_accel_1 = (con_velocity / zero_back1);
    double zero_back2 = 11.2 + rand() % (5 + 1) - 3;
    double con_accel_2 = (con_velocity / zero_back2);

    printf("\n\n");
    printf("2-9 \n");
    printf("���Ͽ��� ����� ���� �¿����� ���ι��� %6.2lf s��� �Ѵ�.\n", zero_back1);
    printf("(���� ���¿��� ����Ͽ� �ӵ��� % 6.2lf km/h�� �����ϴ� �� �ɸ��� �ð�)\n\n", velocity);
    printf("(a) �� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");
    printf("(b) ��� ���� �ڵ����� ���ι��� %6.2lf s��� �̶� ���ӵ��� �� m/s^2�ΰ�?\n\n", zero_back2);
    if (solution == SHOW)
    {
        printf("\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) �� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");
        printf("���� ������ a = ��v / ��t �Դϴ�.\n");
        printf("v:���߼ӵ�, v0:�ʱ�ӵ�, t:�ð�, a:���ӵ� \n\n");
        printf("km/h�� m/s�� ��ȯ�մϴ�\n");
        printf("%6.2lf km/h = %6.2lf km/h / (1000m / 1km * 1h / 3600s) = %6.2lf m/s\n\n", velocity, velocity, con_velocity);
        printf("a = ��v / ��t = (v - v0) / (t - 0)\n");
        printf("  = (%6.2lf m/s - 0 m/s) / (%6.2lf s - 0 s)\n", con_velocity, zero_back1);
        printf("  = %6.2lf m/s^2\n\n", con_accel_1);
    }


    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("(a) a = %6.2lf m/s^2\n\n", con_accel_1);
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) ��� ���� �ڵ����� ���ι��� %6.2lf s��� �̶� ���ӵ��� �� m/s^2�ΰ�?\n\n", zero_back2);
        printf("���� ������ a = ��v / ��t �Դϴ�.\n");
        printf("��v:���߼ӵ�, ��t:�ð�, a:���ӵ� \n\n");

        printf("a = ��v / ��t = (v - v0) / (t - 0)\n");
        printf("  = (%6.2lf m/s - 0 m/s) / (%6.2lf s - 0 s)\n", con_velocity, zero_back2);
        printf("  = %6.2lf m/s^2\n\n", con_accel_2);
    }


    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("(b) a = %6.2lf m/s^2\n\n", con_accel_2);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

}

void Excersize_2_11(int solution, int answer)//�Ѷ���б� �̷������Ƽ���а� ������
{
    srand(time(NULL));

    double velocity_m_s = 0.0;
    double acceleration = 0.0;
    double velocity_i = 90.0 + rand() % (10 + 1) - 4;
    double velocity_f = 0.0;
    double x_displacement = 50.0 + rand() % (10 + 1) - 2;

    printf("\n\n");
    printf("2-11 \n");
    printf("�ڵ��� �Ǹſ��� � ������ī�� ������ �����Ͽ���.\n");
    printf("�� ������ī�� %6.2lf km/h�� �ӵ��� �޸��ٰ� �극��ũ�� ���� ��\n", velocity_i);
    printf("%6.2lf m �̳����� ������ �� �ִ� ������ ���� �ִٰ� �Ѵ�.\n\n", x_displacement);
    printf("(a) �� ��� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("���� ���� : v^2 - v0^2 = 2 * a * ��x\n");
        printf("v:���߼ӵ�, v0:ó���ӵ�, a:���ӵ�, ��x :�Ÿ���ȭ��\n\n");

        velocity_m_s = velocity_i * 1000 / 3600;

        printf("km/h �� m/s �� ���� ��ȯ\n");
        printf("%6.2lf km/h = (%6.2lf * 1000 / 3600) m/s = %6.2lf m/s\n\n", velocity_i, velocity_i, velocity_m_s);

        acceleration = (velocity_f * velocity_f) - (velocity_m_s * velocity_m_s) / (2 * x_displacement);

        printf("v^2 - v0^2 = 2 * a * ��x\n");
        printf("(%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * a * %6.2lf m\n", velocity_f, velocity_m_s, x_displacement);
        printf("a = ((%6.2lf m/s)^2 - (%6.2lf m/s)^2) / (2 * %6.2lf m)\n", velocity_f, velocity_m_s, x_displacement);
        printf("  = %6.2lf m/s^2\n", acceleration);
    }

    if (answer == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   �� ��   =============================\n\n");

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
    printf("��������Ⱑ �̷��ϱ� ���� �ʿ��� �ӷ��� %6.2lf km/h �̴�.\n\n", velocity_f);  // %5.2lf�� �Ʒ��� �����Ұ�
    printf("(a) �� ����Ⱑ Ȱ�ַθ� %6.2lf m �޸� �� �̷��ϱ� ���� �ʿ��� �ּ��� ���ӵ��� ���ΰ�? \n\n", x_displacement);
    printf("(b) �̷��ϴ� �� �ɸ��� �ð��� ���ΰ�? \n");

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here
        printf("(a) �� ����Ⱑ Ȱ�ַθ� %6.2lf m �޸� �� �̷��ϱ� ���� �ʿ��� �ּ��� ���ӵ��� ���ΰ�? \n\n", x_displacement);

        printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");   // ������ ���

        printf("v: ���߼ӵ�, v0: ó���ӵ�, a: ���ӵ�, ��x: �Ÿ���ȭ��   \n\n");

        printf("v^2 - v0^2 = 2 * a * ��x\n");
        velocity_m_s = velocity_f / 3.6;
        printf("(%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * a * %6.2lf m\n\n", velocity_m_s, velocity, x_displacement);
        a = (pow(velocity_m_s, 2) - pow(velocity, 2)) / (2 * x_displacement);
        printf("a = (%6.2lf m/s)^2 / 2 * %6.2lf m\n", velocity_m_s, x_displacement);
        printf("  = %6.2lf m/s^2\n\n", a);

        //printf(" %lf", velocity_1);
    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("a =  %6.2lf m/s^2\n", a);
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(b) �̷��ϴ� �� �ɸ��� �ð��� ���ΰ�? \n\n");

        printf("���� ������ v = v0 + a * t �Դϴ�.\n");

        printf("v: ���߼ӵ�,  v0: �ʱ�ӵ�, a: ���ӵ�, t: �ð�\n\n");
        printf("v =  v0 + a * t\n");
        printf("  = %6.2lf m/s = %6.2lf m/s + %6.2lf m/s^2 * t\n\n", velocity_m_s, velocity, a);
        time = velocity_m_s / (velocity + a);
        printf("t = %6.2lf m/s / %6.2lf m/s^2\n", velocity_m_s, a);
        printf("  = %6.2lf s\n\n", time);

    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("t = %6.2lf s\n\n", time);

        printf("=================================================================\n");
        printf("\n\n\n");
    }

}
void Excersize_2_17(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
{
    srand(time(NULL));
    double east_velocity = 6.0 + rand() % (10 + 1) - 3; //�������� �� �� �ӵ�
    double west_velocity = 4.0 + rand() % (10 + 1) - 2; //�������� �� �� �ӵ�
    double delta_velocity;
    double delta_time;
    double time1 = 10 + rand() % (10 + 1) - 5; //���� ��ȯ �� �ɸ� �ð�
    double time2;
    double time0 = 0;
    double acceleration; //���ӵ�
    double distance1; //�ӵ��� 0�� �� ������ �̵��� �Ÿ�
    double distance2;//������� 10s �� �̵��� �Ÿ�
    double displacement; //������� 10s �� ����
    double distance3;

    printf("\n\n");
    printf("2-17 \n");
    printf("ó���� �������� %6.2lfm/s�� �ӵ��� ��ϴ� ��ü�� ������ ������ �ӵ��� ���Ͽ� \n", east_velocity);
    printf("%6.2lfs �� �������� %6.2lfm/s�� ��Ͽ���. \n\n", time1, west_velocity);
    printf("(a) %5.2lfs ���� �ӵ��� ��ȭ���� ���ΰ�?\n\n", time1);
    printf("(b) ���ӵ��� ũ��� ���̸�, �� ������ ��� �����ΰ�?\n\n");
    printf("(c) ����� �� �� �� �Ŀ� �ӵ��� 0�� �Ǵ°�?\n\n");
    printf("(d) �ӵ��� 0�� �� ������ �̵��� �Ÿ��� ���ΰ�?\n\n");
    printf("(e) ����� �� %6.2lfs ���� ������ �̵��� �Ÿ��� ���� ���ΰ�?\n\n", time1);

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(a) %6.2lfs ���� �ӵ��� ��ȭ���� ���ΰ�?\n\n", time1);

        printf("���� ������  a = ��v / ��t �Դϴ�.\n");
        printf("a: ���ӵ�, ��v: �ӵ���ȭ��,  ��t: �ð���ȭ��.\n\n");
        delta_velocity = -east_velocity - west_velocity;
        printf("��v = v - v0\n");
        printf("    = -%6.2lfm/s - %6.2lfm/s\n\n", east_velocity, west_velocity);
        printf("    = %6.2lfm/s\n\n", delta_velocity);

        delta_time = time1 - time0;
        printf("��t = t - t0\n");
        printf("    = %6.2lfs - %6.2lfs\n", time1, time0);
        printf("    = %6.2lfs\n\n", delta_time);

        acceleration = delta_velocity / delta_time;
        printf("a   = (v - v0) / (t - t0)\n");
        printf("    = ��v / ��t\n");
        printf("    =  %6.2lfm/s /  %6.2lfs\n", delta_velocity, delta_time);
        printf("    =  %6.2lfm/s^2\n\n", acceleration);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("%6.2lfs ���� �ӵ��� ��ȭ��: %6.2lfm/s^2\n\n", time1, acceleration);
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(b) ���ӵ��� ũ��� ���̸�, �� ������ ��� �����ΰ�?\n\n");
        delta_velocity = -east_velocity - west_velocity;
        delta_time = time1 - 0;
        acceleration = delta_velocity / delta_time;
        printf("a: ���ӵ�, |a|: ���ӵ��� ũ��\n\n");

        printf("|a| = |%6.2lfm/s^2|\n", acceleration);
        printf("    = %6.2lfm/s^2\n\n", fabs(acceleration));

        printf("������ (+)����, ������ (-)�������� ����\n\n");
        printf("���� = (-), ���� ����\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("���ӵ��� ũ��: %6.2lfm/s^2\n\n", fabs(acceleration));
        printf("����: (-), ���� ����\n\n");
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(c) ����� �� �� �� �Ŀ� �ӵ��� 0�� �Ǵ°�?\n\n");

        printf("���� ������ v = v0 + a x t �Դϴ�.\n");
        printf("v: ���߼ӵ�, v0: �ʱ�ӵ�, a: ���ӵ�, t: �ð�\n\n");

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
        printf("=========================   �� ��   =============================\n\n");

        printf("�ӵ��� 0�� �� �� �ð�: %6.2lfs\n\n", time2);
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(d) �ӵ��� 0�� �� ������ �̵��� �Ÿ��� ���ΰ�?\n\n");

        printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");   // ������ ���
        printf("v: ���߼ӵ�, v0: ó���ӵ�, a: ���ӵ�, ��x : �Ÿ���ȭ��\n\n");

        printf("v  =      0m/s\n");
        printf("v0 = %6.2lfm/s\n", east_velocity);
        delta_velocity = -east_velocity - west_velocity;
        delta_time = time1 - 0;
        acceleration = delta_velocity / delta_time;
        printf("a  = %6.2lfm/s^2\n", acceleration);
        time2 = (0 - east_velocity) / acceleration;
        printf("t  = %6.2lfs\n\n", time2);

        distance1 = ((0 * 0) - (east_velocity * east_velocity)) / (2 * acceleration);
        printf("��x1 = (v^2 - v0^2) / 2a\n");
        printf("     = (0^2 - %6.2lfm/s^2) / 2 * %6.2lfm/s^2\n", east_velocity, acceleration);
        printf("     = %6.2lfm\n\n", distance1);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("�ӵ��� 0�� �� ������ �̵��� �Ÿ�: %6.2lfm\n\n", distance1);
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(e) ����� �� %6.2lfs ���� ������ �̵��� �Ÿ��� ���� ���ΰ�?\n\n", time1);

        printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");   // ������ ���
        printf("v: ���߼ӵ�, v0: ó���ӵ�, a: ���ӵ�, ��x : �Ÿ���ȭ��\n\n");

        printf("v0 = 0m/s\n");
        printf("v  = %6.2lfm/s\n", west_velocity);
        acceleration = delta_velocity / delta_time;
        printf("a  = %6.2lfm/s^2\n\n", acceleration);

        distance2 = ((west_velocity * west_velocity) - (0 * 0)) / (2 * acceleration);
        printf("��x2 = (v^2 - v0^2) / 2a\n");
        printf("     = ((%6.2lfm/s)^2 - 0)) / 2 * %6.2lfm/s^2\n", west_velocity, acceleration);
        printf("     = %6.2lfm\n\n", distance2);

        distance3 = distance1 + fabs(distance2);
        printf("�̵��� �Ÿ� = ��x1 + | ��x2 | \n");
        printf("            = %6.2lfm + %6.2lfm\n", distance1, fabs(distance2));
        printf("            = %6.2lfm\n\n", distance3);

        displacement = distance1 + distance2;
        printf("���� = ��x1 + ��x2\n");
        printf("     = %6.2lfm + (%6.2lfm)\n", distance1, distance2);
        printf("     = %6.2lfm\n", displacement);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("�̵��� �Ÿ� = %6.2lfm\n\n", distance3);

        printf("���� = %6.2lfm\n\n", displacement);

        printf("=================================================================\n");
    }
}

void Excersize_2_19(int solution, int answer) // �Ѷ���б� �̷������Ƽ���а� ������
{
    // ���� ���� ����
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
    printf("%6.2lf km/h�� �ӷ����� �޸��� ���� �����ڰ� ������ �ִ� �������� �����ƴ�.\n\n", velocity);
    printf("�� �������� ��� ������ ���ӵ� %6.2lf km/h/s��(ȥ�յ� ������ �����϶�) �Ѿư��� �����Ͽ���.\n\n", acceleration);
    printf("(a) ���� �����ڰ� ������ �ӷ��� �����Ѵٰ� �����ϸ� �������� ���� �����ڸ� ����� �� �ɸ� �ð��� ���ΰ�?\n\n");
    printf("(b) �̶� �������� �󸶳� ���� �޷Ȱڴ°�?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ���� �����ڰ� ������ �ӷ��� �����Ѵٰ� �����ϸ� �������� ���� �����ڸ� ����� �� �ɸ� �ð��� ���ΰ�?\n\n");
        printf("���� ����: x = x0 + v0 * t + 1/2 * a * t^2 \n");
        printf("x:������ġ, x0:�ʱ���ġ, v0:�ʱ�ӵ�, t:�ð�, a:���ӵ� \n");
        printf("���� �����ڰ� t�ʰ� �޸� �Ÿ�:x1, �������� t�ʰ� �޸� �Ÿ�:x2\n\n");

        printf("ȥ�յ� ������ m/s�� ��ȯ\n");
        printf("a = %6.2lf km/h/s = %6.2lf km/h/s / (1000m / 1km * 1h / 3600s) = %6.2lf m/s^2\n\n", acceleration, acceleration, converted_acceleration);

        printf("x1 = v0t + 1/2 * a * t^2 = (%6.2lf m/s)t + 0 * t^2\n", velocity / 3.6);
        printf("x2 = x0 + v0t + 1/2 * a * t^2 = 0 m + 0 m/s * t + 1/2 * %6.2lf * t^2 m\n\n", velocity / 3.6);

        printf("x1 = x2 = (%6.2lf m/s)t = 1/2 * %6.2lf m/s^2 * t^2\n", (velocity / 3.6), converted_acceleration);
        printf("%6.2lft^2 - %6.2lft + 0 = 0\n", (acceleration / 3.6) / 2, velocity / 3.6);
        printf("t1 = %6.2lf s, t2 = %6.2lf s\n\n", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
    }


    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
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
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) �̶� �������� �󸶳� ���� �޷Ȱڴ°�?\n\n");
        printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");
        printf("v:���߼ӵ�, v0:ó���ӵ�, a:���ӵ�, ��x:�Ÿ���ȭ��\n\n");
        printf("v^2 - (0 m/s)^2 = 2 * %6.2lf m/s * %6.2lf m\n", converted_acceleration, distance);
        police_velocity = sqrt(2 * converted_acceleration * distance);
        printf("v = sqrt(2 * %6.2lf m/s^2 * %6.2lf m) = sqrt(%6.2lf) m/s = %.2lf m/s\n\n", converted_acceleration, distance, 2 * converted_acceleration * distance, police_velocity);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
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
    printf("���� ���̰� %6.2lf m�� ���� ���󿡼� ������ ���� �������� ��ü�� ���Ͻ��״ٰ� ����.\n\n", h);
    printf("(a) �� ��ü�� ���鿡 �������� ������ �ɸ��� �ð��� ���϶�.\n\n");
    printf("(b) ���鿡 �����ϱ� ������ �ӵ��� ���϶�.\n\n");

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) �� ��ü�� ���鿡 �������� ������ �ɸ��� �ð��� ���϶�.\n\n");
        printf("���ð��� y = y0 + v0 * t + 1/2 * a * t^2\n");
        printf("y : ����, y0 : ó������, v0 : ó���ӵ�, t : �ð�, a : ���ӵ�\n\n");
        printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� %6.2lfm/s^2 �Դϴ�.\n\n", -g);
        printf("y = y0 + v0 * t - 1/2 * g * t^2\n");
        printf("%6.2lfm = %6.2lfm + %6.2lfm/s * t + 1/2 * %6.2lf m/s^2 * t^2\n", h, y0, v0, -g);
        printf("        = 1/2 * %6.2lfm/s^2 * t^2\n", -g);
        printf("t = sqrt(2 * %6.2lfm / %6.2lfm/s^2)\n", h, -g);
        printf("  = %6.2lfs\n\n", t);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("t = %6.2lfs\n\n", t);
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) ���鿡 �����ϱ� ������ �ӵ��� ���϶�.\n\n");
        printf("���� ���� v = v0 + a * t\n");
        printf("v : ���߼ӵ�, v0 : ó���ӵ�, a : ���ӵ�, t : �ð�\n\n");
        printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� %6.2lfm/s^2 �Դϴ�.\n\n", -g);
        printf("v = v0 + a * t\n");
        printf("  = %6.2lfm + %6.2lf m/s^2 * %6.2lfs\n", v0, -g, t);
        printf("  = %6.2lfm/s\n\n", v);

    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("v = %6.2lfm/s\n\n", v);
        printf("=================================================================\n\n");
    }
}

void Excersize_2_23(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ���¹�
{
    srand(time(NULL));
    double h = 2.2 + rand() % (2 + 1) - 1;
    double t = 0.3 + rand() % (1 + 1) - 0;
    double g = 9.8;
    double ��y = 0;
    double v = 0;
    double v0 = 0;
    v = (h - 0.5 * -g * t * t) / t;
    ��y = -(v * v) / (2 * -g);

    printf("2-23 \n\n");
    printf("�����ϴ� ���� ���̰� %6.2lfm �� â���� �������� �� %6.2lfs �ɸ���.\n", h, t);
    printf("���� â���� ����⿡�� �󸶳� ���� ������ �������°�?\n\n");
    printf("(a) ���� â���� ����⿡�� ������ �ӷ��� ���Ͽ���\n\n");
    printf("(b) ���� â���� ����⺸�� ���� ���� ���Ͽ���\n\n");

    if (solution == SHOW)
    {
        printf("==============================  Ǯ��  ===================================\n\n");
        printf("(a) ���� â���� ����⿡�� ������ �ӷ��� ���Ͽ���\n\n");
        printf("���� ������ ��y = v0 * t + 1/2 * a * t^2\n");
        printf("��y : â������ �����ϴ� ���� ����, v0 : â�� ����⿡���� ���� �ӵ�, a : ���ӵ� , t : �ð�\n\n");
        printf("�߷� ���ӵ��� ���� �Ʒ� �����̹Ƿ� %6.2lf m/s^2 �Դϴ�.\n\n", -g);
        printf("  ��y  = v0 * t - 1/2 * g * t^2\n");
        printf("%6.2lfm= v0 * %6.2lfs - 1/2 * %6.2lf * (%6.2lfs)^2\n\n", h, t, g, t);
        printf("v0 = (%6.2lfm) - 1/2 * (%6.2lfm/s^2) * (%6.2lfs)^2 / (%6.2lfs)\n", h, g, t, t);
        printf("   = %6.2lfm/s\n\n", v);
    }
    if (answer == SHOW)
    {
        printf("==============================  ����  ===================================\n\n");
        printf("v0 = %6.2lfm/s \n\n", v);
    }
    if (solution == SHOW)
    {
        printf("==============================  Ǯ��  ===================================\n\n");
        printf("(b) ���� â���� ����� ���̺��� ���� ���� ���Ͽ���\n\n");
        printf("���� ������ v^2 - v0^2 = 2 * a * ��y�Դϴ�.\n");
        printf("v:���߼ӵ�, v0:ó���ӵ�, a:���ӵ�, ��y:�Ÿ���ȭ��\n\n");
        printf("�߷� ���ӵ��� �Ʒ� �����̹Ƿ� %6.2lf m/s^2 �Դϴ�.\n\n", -g);
        printf("v0^2 - v^2 = 2 * g * ��y\n");
        printf("(%6.2lfm/s)^2 - (%6.2lfm/s)^2 = 2 * %6.2lfm/s^2 * ��y\n", v, v0, -g);
        printf(" %6.2lfm/s    -  %6.2lfm/s    = 2 * %6.2lfm/s^2 * ��y\n\n", (v0 * v0), (v * v), -g);
        printf("��y = %6.2lfm/s^2 / (2 * %6.2lf m/s^2)\n", (v * v), -g);
        printf("    = %6.2lfm\n\n", ��y);
    }

    if (answer == SHOW)
    {
        printf("==============================  ����  ===================================\n\n");
        printf("��y = %6.2lfm\n\n", ��y);
        printf("=========================================================================\n");
    }
}

void Excersize_2_25(int solution, int answer) // �Ѷ���б� �̷������Ƽ���а� ������
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
    printf("�۸����Ͱ� %6.2lf km/h�� �ӷ����� �����ϰ� �ö󰡰� �ִ�.\n", velocity);
    printf("�������κ��� %6.2lf m ���̿��� â���� ���� ���ڸ� ����߷ȴ�.\n\n", height);
    printf("�� ���ڰ� ���鿡 ���鿡 �����ϴ� �� �ɸ��� �ð��� ���ΰ�?\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================    Ǯ ��   ============================\n\n");
        printf("�� ���ڰ� ���鿡 ���鿡 �����ϴ� �� �ɸ��� �ð��� ���ΰ�?\n\n");
        printf("���� ������ y = y0 + v0t + 1/2 * a * t^2 �Դϴ�.\n");
        printf("y: ������ġ, y0: ó����ġ, v0: ó���ӵ�, t: �ð�, a: ���ӵ�\n\n");
        printf("�߷� ���ӵ��� �Ʒ� �����̹Ƿ� -%6.2lf m/s^2 �Դϴ�.\n", gravity_accel);
        printf("y = y0 + v0t + 1/2 * a * t^2\n");
        printf("0 = %6.2lf m + %6.2lf m/s * t + 1/2 * %6.2lf m/s^2 * t^2\n\n", height, velocity, -gravity_accel);

        printf("1/2 * %6.2lf m/s^2 * t^2 + %6.2lf m/s * t + %6.2lf = 0\n\n", -gravity_accel, velocity, height);

        printf("t1 = %6.2lf s, t2 = %6.2lf s\n\n", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
    }


    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
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

void Excersize_2_27(int solution, int answer) // �Ѷ���б� �̷������Ƽ���а� ������
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
    printf("�׸��� ���� ���̰� %6.2lf m �� ���� ������ %6.2lf m/s �� �ӷ����� ���� ���� ������� ���� �÷ȴ�.\n\n", height_0, velocity_i);
    printf("(a) �� �Ŀ� ���� ���� �Ʒ� ���鿡 �����ϰڴ°�?  \n\n");
    printf("(b) ���� ���� �Ʒ� ���鿡 �ε����� ������ �ӷ��� ���ΰ�?  \n\n");
    printf("(c) ���� ������ �� �Ÿ��� ���ΰ�?  \n\n");

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(a) �� �Ŀ� ���� ���� �Ʒ� ���鿡 �����ϰڴ°�?  \n\n");

        printf("���ð����� y = y0 + v0 * t + 1/2 * a * t^2�Դϴ�. \n");

        printf("y:������ġ, y0:�ʱ���ġ , v0:�ʱ�ӵ�,  t:�ð�, a:���ӵ� \n\n");

        printf("�߷°��ӵ� a ��  �Ʒ� ���� �̹Ƿ� %6.2lf m/s^2 �Դϴ�.\n\n", gravity);

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
        printf("=========================   �� ��   =============================\n\n");

        printf("t =  %6.2lf s (t > 0)\n\n", (-b - e) / (2.0 * a));
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n");
        printf("\n");
        printf("(b) ���� ���� �Ʒ� ���鿡 �ε����� ������ �ӷ��� ���ΰ�?  \n\n");

        printf("���� ������ v = v0 + a * t �Դϴ�.\n");

        printf("v:���߼ӵ�,  v0:�ʱ�ӵ�, a:���ӵ�, t:�ð�\n\n");

        printf("%6.2lf m/s = %6.2lf m/s + (%6.2lf m/s^2 ) * %6.2lf s \n\n", velocity_f, velocity_i, gravity, (-b - e) / (2.0 * a));
        ans_1 = velocity_i + gravity * ((-b - e) / (2.0 * a));
        printf("v = %6.2lf m/s + (%6.2lf m/s^2 ) * %6.2lf s \n", velocity_i, gravity, (-b - e) / (2.0 * a));
        printf("  = %6.2lf m/s\n\n", ans_1);
    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("v = %6.2lf m/s\n\n", ans_1);
    }
    if (solution == SHOW)
    {

        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(c) ���� ������ �� �Ÿ��� ���ΰ�?  \n\n");

        printf("���� ������ v^2 - v0^2 = 2 * a * ��y �Դϴ�.\n");   // ������� ���

        printf("v:���߼ӵ�, v0:ó���ӵ�, a:���ӵ�, ��y :�Ÿ���ȭ��   \n\n");

        printf("(%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * (%6.2lf m/s^2) * ��y\n\n", velocity_f, velocity_i, gravity);
        printf("��y = ( (%6.2lf m/s)^2 - (%6.2lf m/s)^2 ) / ( 2 * (%6.2lf m/s^2) )  \n", velocity_f, velocity_i, gravity);
        ans_2 = (velocity_f - pow(velocity_i, 2)) / (2 * gravity);
        printf("    = %6.2lf m\n\n", ans_2);

        printf("distance = %6.2lf m * 2 + %6.2lf m\n", ans_2, height_0);
        total_distance = ans_2 * 2 + height_0;
        printf("         = %6.2lf m\n", total_distance);

    }
    if (answer == SHOW)
    {
        printf("\n");
        printf("=========================   �� ��   =============================\n\n");

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

    //Excersize_2_1(1, 1);  //�̷������Ƽ���а� ����ȯ 2023.05.21 ���
    //Excersize_2_3(1, 1);  //�̷������Ƽ���а� ������ 2023.05.21 ���
    //Excersize_2_5(1, 1);  //�̷������Ƽ���а� ������ 2023.05.21 ���
    //Excersize_2_9(1, 1);  //�̷������Ƽ���а� ������ 2023.05.21 ���
    //Excersize_2_11(1, 1); //�̷������Ƽ���а� ������ 2023.05.21 ���
    //Excersize_2_15(1, 1); //�̷������Ƽ���а� ������ 2023.05.21 ���  
    //Excersize_2_17(1, 1); //�̷������Ƽ���а� ������ 2023.05.21 ���   
    //Excersize_2_19(1, 1); //�̷������Ƽ���а� ������ 2023.05.21 ���
    //Excersize_2_21(1, 1); //�̷������Ƽ���а� ����ȯ 2023.05.21 ��� 
    //Excersize_2_23(1, 1); //�̷������Ƽ���а� ���¹� 2023.05.21 ��� 
    //Excersize_2_25(1, 1); //�̷������Ƽ���а� ������ 2023.05.21 ��� 
    //Excersize_2_27(1, 1); //�̷������Ƽ���а� ������ 2023.05.21 ��� 

}