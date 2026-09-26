#include <stdio.h>
int main ()
{
    char customer_name[100];
    char vehicle_number[50];
    float enterTime, levingTime, duration;
    float totalcharge = 0.0;

    printf("Enter your Name : ");
    scanf("%s",&customer_name);

    printf("Enter your vehicle_number :");
    scanf("%s",&vehicle_number);

    printf("Enter your enter time(24 hours):");
    scanf("%f",&enterTime);

    printf("Enter your leving time(24 hours);");
    scanf("%f",&levingTime);

    if(levingTime >= enterTime)
    {
        duration = levingTime - enterTime ;
    } else 
    {
        duration = (24.0 - enterTime) + levingTime ;
    }

    if(duration <= 3.0)
    {
        totalcharge = 150.0 ;
    } else
    {
        float excessHours = duration - 3.0;
        totalcharge = 150.0 + (excessHours * 100.0);
    }

    printf("\n----parking invoid----\n");
    printf("vehicle_number :%s\n",vehicle_number);
    printf("total duration :%.2f\n",duration);
    printf("total charge :%.2f\n",totalcharge);

    return 0;

}