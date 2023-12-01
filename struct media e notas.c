#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct media
{
    char nomealuno[5][100];
    int idade;
    float notas[2];
    float media;
    int somanotas;
};

struct media alunos[3];
int i, j;

int main()
{

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 3; i++)
    {
        printf(" Digite o nome do %dº aluno: ");
        gets(alunos[i].nomealuno);

        printf(" Digite a idade: ");
        scanf("%d", &alunos[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf(" Digite a %d nota: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);

            somanotas += alunos[i].notas[j];
        }

        media[i] = somanotas / (float)j;
        somanotas = 0;
    }

    return 0;
}
