#include <stdio.h>
#include <math.h>

int main (){
    int a, b, soma, sub, mult, div;
     printf("Digite um numero:\n");
     scanf("%d", &a);
     printf("Digite um segundo numero:\n");
     scanf("%d", &b);

     soma= a + b;
     sub= a - b;
     mult= a * b;
     div= a / b;

     printf("A soma = %d\n", soma);
     printf("A subtracao = %d\n", sub);
     printf("A multiplicacao= %d\n", mult);
     printf("A divisao= %d\n", div);

     return 0;
}