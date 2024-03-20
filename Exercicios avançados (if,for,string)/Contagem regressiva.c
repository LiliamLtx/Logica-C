#include <stdio.h>
    int main (){
        int i, numero;
         printf("digite um numero para contagem:\n");
         scanf("%d", &numero);
   // contagem regressiva do maior ate 0
for(i= numero; i; i--){
        printf("%d\t", i);
        }

        for(i=0; i <= numero; i++){
        printf("%d\t", i);
        }

    }