#include <stdio.h>
  // aplicar desconto caso o valor da compra seja igual ou maior que 100 reais
    int main (){
        int i=0, item, soma=0, desconto, menos;

    printf("A seguir digite o valor dos itens e para parar o programa e somar digite 0\n");

        for(;; i++){
            scanf("%d", &item);

            if(item == 0) break;

            soma+= item;
        }

        printf("A quantidade de itens foi: %d e a soma: %d\n", i, soma);

        if(soma < 100){ 
            printf("sua compra nao esta valida para nosso desconto de 10 porcento\n");
        }else{
            desconto= 0.1 * soma;
            menos= soma - desconto;
             printf (" Aplicamos 10 porcento de desconto, sua compra ficou no total de: %d", menos);
        }
    }