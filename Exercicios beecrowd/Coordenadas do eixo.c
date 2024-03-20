#include <stdio.h>

//Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).
int main (){
    double x,y;

    printf("Digite valor de X: \n");
    scanf("%lf", &x);
    printf("Digite valor de Y: \n");
    scanf("%lf", &y);

//to falando SO DO X

    if(x > 0.0){ //se o x for maior
        
        if(y > 0.0)        printf("Q1");
        else if (y < 0.0)  printf("Q4");
        else             printf ("Eixo X\n"); //em relação ao y dentro do x, se ele for 0;
       
        }

        else if (x < 0.0){ //se o x for menor
            if (y < 0)       printf("Q3");
            else if (y > 0)  printf ("Q2");
            else             printf("Eixo X\n"); //em relação ao y dentro do x, se ele for 0;
        }


        else { // o else se refere se o X nao for maior nem menor, se ele for 0
            if(y > 0.0)         printf("Eixo Y\n"); // se o x for 0 e y maior q 0 ai ta dentro do eixo y
            else if(y < 0.0)    printf("Eixo Y\n");
            else                printf("Origem\n");
        }

}