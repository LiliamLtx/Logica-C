#include <stdio.h>

//Leia quatro valores inteiros A, B, C e D e imprimir a diferença entre eles
 
int main() {
 int A,B,C,D;
 int DIFERENCA;
 
 scanf("%d", &A);
 scanf("%d", &B);
 scanf("%d", &C);
 scanf("%d", &D);
 DIFERENCA = A * B - C * D;
 
 printf("DIFERENCA = %d\n", DIFERENCA);
 
    return 0;
}