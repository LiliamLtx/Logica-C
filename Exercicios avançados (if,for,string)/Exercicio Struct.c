#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

struct Livro {
    char titulo[100];
    char autor[100];
    int ano;
    float reviews[5];
};

    typedef struct Livro Livro;

int main() {
    Livro livros[3];
    int i, r;

    for (i = 0; i < 3; i++) {
        printf("Digite os dados do livro %d:\n", i + 1);
        puts("Titulo:");
        scanf("%99[^\n]s", livros[i].titulo);
        fflush(stdin);

        puts("Autor:");
        scanf("%99[^\n]s", livros[i].autor);
        fflush(stdin);

        puts("Ano de publicação");
        scanf("%d", &livros[i].ano);
        fflush(stdin);

        for (r = 0; r < 5; r++) {
            printf("Digite a nota para o livro %d\n", r + 1);
            scanf("%f", &livros[i].reviews[r]);
            fflush(stdin);

        }
        system("cls");
    }
    
    // informações do livro
    for (int i = 0; i < 3; i++) {
        printf("Titulo: %s\nAutor: %s\nAno: %d\n", livros[i].titulo, livros[i].autor, livros[i].ano);
        double soma = 0.0;
        for (int r = 0; r < 5; r++) {
            soma += livros[i].reviews[r];
        }
        soma /= 5;
        printf("Review: %.2f/5 estrelas\n\n", soma/2);
    }

    return 0;
}
