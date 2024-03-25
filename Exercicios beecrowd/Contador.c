#include <stdio.h>

int main() {
    int numero, contador = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O numero não é positivo.\n");
        return 1; // Encerra o programa com código de erro
    }

    while (numero > 0) {
        contador++; // Incrementa o contador a cada dígito encontrado
         numero /= 10;// Remove o último dígito do número
    }

    printf("O numero possui %d digito(s).\n", contador);

    return 0;
}
