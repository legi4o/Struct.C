#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 2

struct dadosfuncionarios
{
    char nome[100];
    char dataadmissao[100];
    char endereco[100];
    int matricula;
};

struct dadosclientes
{
    char nome[100];
    char datanascimento[100];
    char endereco[100];
};

int main(void)
{

    struct dadosfuncionarios funcionarios[TAM];
    struct dadosclientes cliente[TAM];
    int i;

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < TAM; i++)
    {
        printf("\n------CLIENTE------\n");
        printf(" Digite seu nome: ");
        gets(cliente[i].nome);
        printf(" Digite sua data de nascimento: ");
        gets(cliente[i].datanascimento);
        printf(" Digite seu endereço: ");
        gets(cliente[i].endereco);
    }

    for (i = 0; i < TAM; i++)
    {
        printf("\n------FUNCIONÁRIO------\n");
        printf(" Digite seu nome: ");
        gets(funcionarios[i].nome);
        printf(" Digite sua data de admissão: ");
        gets(funcionarios[i].dataadmissao);
        printf(" Digite seu endereço: ");
        gets(funcionarios[i].endereco);
        fflush(stdin);
        printf(" Digite sua matricula: ");
        scanf("%d", &funcionarios[i].matricula);
        fflush(stdin);
    }

    // mostrando dados//

    system("cls || clear");

    printf("\n");

    for (i = 0; i < TAM; i++)
    {
        printf(" %dº FUNCIONARIO \n", i + 1);
        printf(" Nome: %s \n", funcionarios[i].nome);
        printf(" Data de admissão: %s \n", funcionarios[i].dataadmissao);
        printf(" Endereço: %s \n", funcionarios[i].endereco);
        printf(" Matrícula: %d \n", funcionarios[i].matricula);
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < TAM; i++)
    {
        printf(" %dº CLIENTE \n", i + 1);
        printf(" Nome: %s \n", cliente[i].nome);
        printf(" Data de nascimento: %s \n", cliente[i].datanascimento);
        printf(" Endereço: %s \n", cliente[i].endereco);
        printf("\n");
    }

    return 0;
}
