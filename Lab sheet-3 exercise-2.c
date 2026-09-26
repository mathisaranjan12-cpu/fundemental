#include <stdio.h>
int main ()
{
    int a,b;
    a=12,b=10;
    printf("a&b:%d\n",a&b);
    printf("a|b:%d\n",a|b);
    printf("a^b:%d\n",a^b);
    printf("a>>1:%d\n",a<<1);

    a=255,b=170;
    printf("a&b:%d\n",a&b);
    printf("a|b:%d\n",a|b);
    printf("a^b:%d\n",a^b);
    printf("a>>1:%d\n",a<<1);

    a=63,b=36;
    printf("a&b:%d\n",a&b);
    printf("a|b:%d\n",a|b);
    printf("a^b:%d\n",a^b);
    printf("a>>1:%d\n",a<<1);

    return 0;
}