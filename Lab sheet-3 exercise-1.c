#include <stdio.h>
int main ()
{
    int a=15,b=4,c=0;
    printf("a+b= %d\n",a+b);
    printf("a-b= %d\n",a-b);
    printf("a*b= %d\n",a*b);
    printf("a/b= %d\n",a/b);
    printf("a%%b= %d\n",a%b);

    printf("\n");
    printf("a==b: %d\n",a==b);
    printf("a!=b: %d\n",a!=b);
    printf("a>b: %d\n",a>b);
    printf("a<b: %d\n", a<b);
    printf("a>=b: %d\n", a>=b);
    printf("a<=b: %d\n", a<=b);
    
    printf("\n");
    printf("a && b: %d\n", a && b);
    printf("a || b: %d\n", a || b);
    printf("!a : %d\n", !a);
    printf("!c : %d\n", !c);

    printf("\n");
    printf("a & b: %d\n", a&b);
    printf("a | b: %d\n", a|b);
    printf("a ^ b: %d\n", a^b);
    printf("~a : %d\n", ~a);
    printf("a << 2: %d\n", a<<2);
    printf("a >> 1: %d\n", a>>1);

    printf("\n");
    printf("a>b ? a:b = %d\n", a>b ? a:b);

    return 0;

}