#include <stdio.h>
int main()
{
    double num1, num2;

    printf("Enter num1 : \n");
    scanf("%lf", &num1);
    printf("Enter num2 : \n");
    scanf("%lf", &num2);

    printf("Addition [+] :%.2f\n", num1 + num2);
    printf("Subtraction [-] :%.2f\n", num1 - num2);
    printf("Multiplication [*] :%.2f\n", num1 * num2);
    printf("Division [/] :%.2f\n", num1 / num2);
    printf("num1 %% num2 [%%]:%d\n", (int)num1 % (int)num2);

    return 0;

}