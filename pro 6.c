#include<stdio.h>
int main()
{
    printf("\nQ=1\n");
    char c;
    for(c = 'a';c <='z';c++)
    {
        printf("%c ,", c);
    }

    printf("\nQ=2\n");
    int num = 1;
    while(num <=100)
    {
        printf("%d ,",num);
        num += 2;
    }

    printf("\nQ=3\n");
    int a;
    do
    {
        printf("Natural number: ",a);
        scanf("%d",&a);
    }
    while(a<=10);

    printf("%d ,",a);


    printf("\nQ=5\n");
    int x;
    for(x = 1;x <= 20;x++)
    {
        if(x%2 != 0)
        {
            continue;
        }
        printf("%d ,",x);
    }

    return 0;
}