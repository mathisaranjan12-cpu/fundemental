#include <stdio.h>
int main()
{
    int sub_marks[6];
    float avg;
    int sum=0;

    printf("Enter marks for 6 subjects :\n");
    for(int i=0;i<6;i++)
    {
        printf("Subject %d :",i+1);
        scanf("%d",&sub_marks[i]);
        sum += sub_marks[i];
    }

    printf("\nStudent marks\n");
    for(int i=0;i<6;i++)
    {
        printf("Subject_mark%d :%d\n",i+1,sub_marks[i]);
    }
    
    avg = sum/6;
    printf("Average :%2f\n",avg);

    return 0;
}