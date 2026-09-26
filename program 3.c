#include <stdio.h>
int main()
{
    char name[20];
    int age;
    float GPA;
    char grade;

    printf("Welcome to the Student Information System!\n");
    printf("-------------------------------------------\n");
    printf("Please enter the following information:\n");

    printf("Enter the name: ");
    scanf("%s" , &name);
    printf("Enter the age: ");
    scanf("%d" , &age);
    printf("Enter the GPA: ");
    scanf("%f" , &GPA);
    printf("Enter the grade: ");
    scanf(" %c" , &grade);

    printf("\n-- Student Information --\n");
    printf("-------------------------------------------\n");
    printf("Name: %s\n" , name);
    printf("Age: %d\n" , age);
    printf("GPA: %2f\n" , GPA);
    printf("Grade: %c\n" , grade);

    return 0;

}