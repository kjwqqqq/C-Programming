#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int heading = 0;
    int target = 0;
    int error = 0;
    int corrected_error = 0;

    printf("Target Angle : ");
    scanf("%d", &target);
    printf("Heading Angle : ");
    scanf("%d", &heading);

    error = target - heading;

    printf("\n\n");
    printf("Error : %d  =  %d  -  %d", error, target, heading);


    printf("\n\n");
    if (error < 180 && error >0)
    {
        corrected_error = target - heading;
        printf("Corrected Error  : %d  =  %d  -  %d", corrected_error, target, heading);
    }
    else if (error > 180)
    {
        corrected_error = error - 360;
        printf("Corrected Error : %d  =  %d  -  %d", corrected_error, target, heading);
    }
    else if (error < 0 && error > -180)
    {
        corrected_error = error;
        printf("Corrected Error : %d  =  %d  -  %d", corrected_error, target, heading);
    }
    else if (error < -180 && error > -360)
    {
        corrected_error = 360 + error;
        printf("Corrected Error : %d  =  %d  -  %d", corrected_error, target, heading);
    }
    else if (error == 0 || error == 360 || error == -360)
    {
        corrected_error = 0;
        printf("Corrected Error : %d  =  %d  -  %d", corrected_error, target, heading);
    }
    else if (error == 180 || error == -180)
    {
        corrected_error = 180;
        printf("Corrected Error : %d  =  %d  -  %d", corrected_error, target, heading);
    }

}