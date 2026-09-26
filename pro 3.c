#include<stdio.h>
int main()
{
    int x;

    do
    {
        printf("Enter a positive num: ");
        scanf("%d",&x );
    }
    while(x <=0);
    
    printf("You entered a positive num: %d\n", x);
    

    return 0;
}