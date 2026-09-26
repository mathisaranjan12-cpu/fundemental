#include<stdio.h>
int main()
{
    int i;
    for(i = 1;i <=10; i++)
    {
        if(i%2 == 0)
        {
            printf("First Even num: %d\n",i);
            break;
        }
        
    }

    return 0;
}