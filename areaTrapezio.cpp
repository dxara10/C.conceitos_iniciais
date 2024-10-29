#include <stdio.h>

int main()
{
    float basem, baseM, altura, area;

    printf("Informe o valor da base menor:");
    scanf("%f", &basem);
    printf("Informe o valor da base maior:");
    scanf("%f", &baseM);
    printf("Informe o valor da altura:");
    scanf("%f", &altura);
    area = ((baseM + basem)*altura)/2;
    printf("\n A área do trapézio é: %.2f", area);
    return(0);
}
