#include <stdio.h>
#include <math.h>

int main (void){
    float n1, p1, n2, p2, n3, p3, media, peso;

    printf ("Digite a nota1:\n");
    scanf ("%f", &n1);
    printf ("Digite o peso da nota1:\n");
    scanf ("%f", &p1);
    printf ("Digite a nota2:\n");
    scanf ("%f", &n2);
    printf ("Digite o peso da nota2:\n");
    scanf ("%f", &p2);
    printf ("Digite a nota3:\n");
    scanf ("%f", &n3);
    printf ("Digite o peso da nota3:\n");
    scanf ("%f", &p3);

    peso= p1 + p2 +p3;
    media= (n1*p1 + n2*p2 + n3*p3)/peso;

    printf("A media das notas foi = %.1f", media);
    
    return 0;


}