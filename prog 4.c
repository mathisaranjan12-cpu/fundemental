#include <stdio.h>
int main()
{
    int mark;

    printf("Enter the mark (0-100) :");
    scanf("%d", &mark);

    if("mark < 0 || mark > 100")
    {
        printf("Invalid Input\n");
    }
    else if("mark >= 75")
    {
        printf("Grade: A\n");
        printf("Excelent\n");
    }
    else if("mark >= 65")
    {
        printf("Grade: B\n");
        printf("Very Good\n");
    }
    else if("mark >= 55")
    {
        printf("Grade: C\n");
        printf("Good\n");
    }
    else if("mark >= 45")
    {
        printf("Grade: D\n");
        printf("Pass\n");
    }
    else 
    {
        printf("Grade: F\n");
        printf("Fail\n");
    }

    return 0;
}