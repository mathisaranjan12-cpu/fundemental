#include <stdio.h>
int main()
{
    printf("char: %zu bytes\n" , sizeof(char));
    printf("int: %zu bytes\n" , sizeof(int));
    printf("float: %zu bytes\n" , sizeof(float));
    printf("double: %zu bytes\n" , sizeof(double));

    int x=10;
    float pi=3.14;
    char letter='B';
    char name[]="Alice";

    printf("x: %d\n", x);
    printf("pi: %f\n", pi);
    printf("letter: %c\n", letter);
    printf("name: %s\n", name);

    return 0;
}