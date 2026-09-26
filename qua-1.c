#include<stdio.h>
int main()
{
    char studentname[50];
    char regnum[20];
    int sub1,sub2,sub3;
    int totalmarks;
    float avg;
    char grade[20];
    int srs;

    printf("Student Name: ");
    scanf(" %s", &studentname);

    printf("Enter Registretion Number: ");
    scanf(" %s", &regnum);
    
    printf("Enter Marks for There Subject:\n");
    printf("subject 1:");
    scanf(" %d", &sub1);
    printf("subject 2:");
    scanf(" %d", &sub2);
    printf("subject 3:");
    scanf(" %d", &sub3);

    totalmarks = sub1 + sub2 + sub3;
    avg = (float)totalmarks / 3;

    srs = (avg>=75)&(sub1>=50&sub2>=50&sub3>=50);

     printf("\n------------------------------------------\n");
    printf("Student Name: %s\n",studentname);
    printf("Registretion Number: %s\n",regnum);
    printf("Total Marks: %d\n",totalmarks);
    printf("Average marks: %2f\n",avg);

    if(avg>=75)
    {
        printf("Distinction\n");
    }else if(avg>=60)
    {
        printf("Credit\n");
    }else if(avg>=50)
    {
        printf("Pass\n");
    }else
    {
        printf("Fail\n");
    }
   

    if(srs)
    {
        printf("Scholarship Status:Eligible\n");
    }
    else
    {
        printf("Scholarship Status:Not Eligible\n");
    }
    printf("\n------------------------------------------\n");

    return 0;

}