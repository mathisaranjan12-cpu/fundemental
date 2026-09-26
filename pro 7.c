#include <stdio.h>
int main()
{
   //int marks[5];
   //marks[0]=98;

   //int ages[5]={21,21,23,24,25}
   //ages[1]=27;
   
   int student_marks[5];
   int i;

   printf("Enter the marks of 5 Students :\n");
   for(i=0;i<5;i++)
   {
      scanf("%d",&student_marks[i]);
      printf("Student %d:",i+i);
   }

   printf("\n Marks Entered \n");
   for(i=0;i<5;i++)
   {
      printf("Student %d : %d\n",i+1, student_marks[i]);
   }

   return 0;   
}