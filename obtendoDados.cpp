#include <stdio.h>

int main()
{
    /* declaração de variaveis */
    int idade, anoNascimento;
    float altura;
    char nome[30];
    /* entrada de dados */
    /* mensagem ao usuário */
    printf("Digite o seu nome: ");
    scanf("%s", nome); /* leitura do nome */
    /* mensagem ao usuário */
    printf("Digite a idade: ");
    scanf("%d", &idade); /* leitura da idade */
    /* mensagem ao usuário */
    printf("Digite a altura: ");
    scanf("%f", &altura); /* leitura da altura */
    /*processamento*/
    /*cálculo do ano de nascimento*/
    anoNascimento = 2024 -idade;
    /* saida de dados */
    printf("\nO nome e: %s", nome);
    printf("\nA altura e: %.2f", altura);
    printf("\nA idade e: %d", idade);
    printf("\nO ano de nascimento e: %d", anoNascimento);
    return(0);
}
