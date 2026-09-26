#include <stdio.h>
int main()
{
    char initial;
    int reg.no;
    double gpa;
    int year;

    printf("Enter initial :\n");
    scanf("%c",&initial);
    printf("Enter reg.no :\n");
    scanf("%d",&reg.no);
    printf("Enter gpa :\n");
    scanf("%f",&gpa);
    printf("Enter year :\n");
    scanf("%d",&year);

    printf("--------------------\n");\
    printf("Initial :%c\n",initial);
    printf("Reg.No :%d\n",reg.no);
    printf("GPA :%.2f\n",gpa);
    printf("Year :%d\n",year);

    return 0;
}