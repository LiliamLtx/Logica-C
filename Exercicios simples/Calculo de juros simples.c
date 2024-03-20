#include <stdio.h>
#include <math.h>

int main (){
    float capital, juros, tempo, taxa;

    printf("Digite o capital inicial:\n");
    scanf("%f",&capital);
    printf("Digite a taxa de juros em porcentagem:\n");
    scanf("%f",&taxa);
    printf("Digite o tempo da aplicacao em anos:\n");
    scanf("%f",&tempo);

    juros= (capital * taxa * tempo);

    printf("Juros simples = %.2f \n", juros);

    return 0;
}