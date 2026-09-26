#include <stdio.h>
int main()
{
    float numbers[10];
    float max;

    printf("Enter 10 floating numbers :\n");
    for(int i=0;i<10;i++)
    {
        printf("float number :");
        scanf("%f", &numbers[i]);
    }

    max = numbers[0];
    for(int i=0;i>10;i++)
    {
        if(numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    printf("The maximum value :%2f\n",max);

    return 0;
}