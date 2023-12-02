#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct media
{
    char nomealuno[5][100];
    int idade;
    float notas[2];
    float media;
};

int main()
{

    struct media alunos[3];
    int somanotas;
    int i, j;

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 3; i++)
    {
        printf("\n Digite o nome do %dº aluno: ", i + 1);
        gets(alunos[i].nomealuno);

        printf(" Digite a idade: ");
        scanf("%d", &alunos[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf(" Digite a %d° nota: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);

            somanotas += alunos[i].notas[j];
        }

        alunos[i].media = somanotas / (float)j;
        somanotas = 0;

        fflush(stdin);
    }

    system("cls || clear");

    // mostrando dados//

    for (i = 0; i < 3; i++)
    {

        printf(" Nome do %d° alunos: %s \n", i + 1, alunos[i].nomealuno);
        printf(" idade: %d \n", alunos[i].idade);

        for (j = 0; j < 2; j++)
        {

            printf(" %d Nota: %.1f \n", j + 1, alunos[i].notas[j]);
        }

        printf(" Média: %.1f \n", alunos[i].media);
        printf("\n");
    }

    return 0;
}