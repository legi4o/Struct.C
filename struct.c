#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "portuguese");

    struct dados_pessoas
    {

        char nome[100];
        float altura;
        float peso;
        int idade;
    };

    struct dados_pessoas dados;

    printf(" Digite seu nome: ");
    gets(dados.nome);

    printf(" Digite sua idade: ");
    scanf("%d", &dados.idade);

    printf(" Digite seu peso: ");
    scanf("%f", &dados.peso);

    printf(" Digite sua altura: ");
    scanf("%f", &dados.altura);

    // mostrando dados//

    system("cls || clear");

    printf("\nNome: %s \n", dados.nome);
    printf(" Idade: %d \n", dados.idade);
    printf(" Peso: %.1f \n", dados.peso);
    printf(" Altura: %.1f \n", dados.altura);

    return 0;
}