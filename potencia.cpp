#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, total;

    printf("\n Digite o numero a ser elevado:");
    scanf("%f", &num1);
    printf("\n Digite o numero a ser potencia:");
    scanf("%f", &num2);
    total = pow(num1, num2);
    printf("\n %.2f elevado a %.2f é: %.2f", num1, num2, total);
    return(0);
}
