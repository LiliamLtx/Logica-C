#include <stdio.h>

int main (){
    
    int a,b;
    char op;

   do {
    printf("Digite o sinal(+, -, *, /) e digite E para sair:\n");
    scanf(" %c", &op);

    if (op == 'e'){ 
        break;
    }
    

  printf("Digite o primeiro numero\n");
        scanf("%d", &a);
        printf("Digite o segundo numero\n");
        scanf("%d", &b);

    switch (op){
        case '+':
            printf("%d + %d = %d\n", a, b, a+b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a-b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a*b);
            break;
        case '/':
            if( a != 0 && b != 0){
            printf("%d / %d = %d\n", a, b, a/b);
            }else{
                printf("Erro! Divisao por 0.\n");
            }
            break;
        default:
        printf("Operação inválida!\n");
            break;

        }
        }  while(1);

            printf("Programa encerrado.\n");
        
    return 0;
}