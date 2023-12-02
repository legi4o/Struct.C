#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_aluno
{
    char nome[100];
    int idade;
    int numeromatricula;
    float media;
    float notas[2];
};

struct dados_professor
{
    char nome[100];
    char disciplina[2][100];
    char turma[2][100];
};

int main(void)
{

    struct dados_aluno aluno[3];
    struct dados_professor professor[2];
    int i, j;
    int somanotas;

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 3; i++)
    {
        printf(" Digite o nome do %dº aluno: ", i + 1);
        gets(aluno[i].nome);

        fflush(stdin);

        printf(" Digite a idade: ");
        scanf("%d", &aluno[i].idade);

        printf(" Digite o numero de matricula: ");
        scanf("%d", &aluno[i].numeromatricula);

        for (j = 0; j < 2; j++)
        {
            printf(" Digite a %dº nota: ", j + 1);
            scanf("%f", &aluno[i].notas[j]);

            somanotas += aluno[i].notas[j];
        }

        printf("\n");
        aluno[i].media = somanotas / (float)j;
        somanotas = 0;
        
        fflush(stdin);
    }

    printf("\n");

    for (i = 0; i < 2; i++)
    {
        printf(" Digite o nome do %dº professor: ", i + 1);
        gets(professor[i].nome);

        for (j = 0; j < 2; j++)
        {
            printf(" Digite a %dº turma: ", j + 1);
            gets(professor[i].turma[j]);

            printf(" Digite o nome da %dº disciplina: ", j + 1);
            gets(professor[i].disciplina[j]);
        }
        
        printf("\n");
    }

    system("cls || clear");

    // mostrando dados//

    for (i = 0; i < 3; i++)
    {
        printf(" %dº aluno: %s \n", i + 1, aluno[i].nome);
        printf(" Idade: %d \n", aluno[i].idade);
        for (j = 0; j < 2; j++)
        {
            printf(" %dº Nota: %.1f \n", j + 1, aluno[i].notas[j]);
        }
        printf(" Média: %.1f \n", aluno[i].media);

        if (aluno[i].media >= 7)
        {
            printf(" APROVADO\n");
        }
        else if (aluno[i].media < 7)
        {
            printf(" REPROVADO\n");
        }
    }

    printf("\n");

    for (i = 0; i < 2; i++)
    {
        printf("\n Nome do %dº professor: %s \n", i+1, professor[i].nome);
        for (j = 0; j < 2; j++)
        {
            printf("\n %dº turma: %s \n", j+1, professor[i].turma[j]);
            printf("\n %dº Disciplina %s \n", j + 1, professor[i].disciplina[j]);
        }
    }

    return 0;
}