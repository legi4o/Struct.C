#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct informacoes
{
    char nome[100];
    int idade;
    float notas[2];
};

struct informacoes alunos[3];
int i, j;

int main(void)
{

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 3; i++)
    {
        printf(" Digite o nome do %d� aluno: ", i + 1);
        gets(alunos[i].nome);
        printf(" Digite a idade: ");
        scanf("%d", &alunos[i].idade);
        for (j = 0; j < 2; j++)
        {
            printf(" Digite a %d� nota: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }
        printf("\n");
        fflush(stdin);
    }

    system("cls || clear");

    for (i = 0; i < 3; i++)
    {
        printf(" nome do %d� aluno: %s \n", i + 1, alunos[i].nome);
        printf(" idade: %d \n", alunos[i].idade);
        for (j = 0; j < 2; j++)
        {
            printf(" %d� nota: %.1f \n", j + 1, alunos[i].notas[j]);
        }
        printf("\n");
    }

    return 0;
}