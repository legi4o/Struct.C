#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_livros
{
    char nomelivro[100];
    char autor[100];
    char categoria[100];
    float preco;
};

int main()
{
    struct dados_livros livros[3];
    int i;

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 3; i++)
    {
        printf(" -----------------------\n");
        printf(" Digite o nome do livro: ");
        gets(livros[i].nomelivro);
        printf(" Digite o nome do autor: ");
        gets(livros[i].autor);
        printf(" Digite a categoria: ");
        gets(livros[i].categoria);
        printf(" Digite o pre�o do livro: ");
        scanf("%f", &livros[i].preco);
        fflush(stdin);
        printf("\n");
    }

    // mostrando dados livros//

    system("cls || clear");

    for (i = 0; i < 3; i++)
    {
        printf("%d�livro: %s \n", i + 1, livros[i].nomelivro);
        printf(" autor: %s \n", livros[i].autor);
        printf(" categoria: %s \n", livros[i].categoria);
        printf(" pre�o: %.1f \n", livros[i].preco);
        printf("\n");
    }

    return 0;
}
