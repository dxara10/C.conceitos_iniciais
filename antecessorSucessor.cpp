#include <stdio.h>

int main()
{
    int num, ant, suc;

    printf("Digite um número:");
    scanf("%d", num);

    ant = num - 1;
    suc = num + 1;

    printf("\n O antecessor é: %d", ant);
    printf("\n O sucessor é: %d", suc);
    return(0);
}
