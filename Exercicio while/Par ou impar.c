#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite numeros inteiros positivos (insira um numero impar para encerrar):\n");

    while (1) { // Loop infinito
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Numero invalido. Insira apenas numeros inteiros positivos.\n");
            continue; // Ignora números não positivos
        }

        if (numero % 2 == 0) { // Verifica se o número é par
            soma += numero; // Adiciona números pares à soma
        } else {
            break; // Sai do loop quando um número ímpar é inserido
        }
    }

    printf("A soma dos numeros pares inseridos e: %d\n", soma);

    return 0;
}
