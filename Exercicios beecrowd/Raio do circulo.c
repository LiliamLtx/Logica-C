#include <stdio.h>
#include <math.h>
#define n 3.14159; //constante

// calcular a area area do circulo 
int main(void) {
   double raio, area;
   scanf ("%lf", &raio);
   area = 3.14159 * pow(raio,2); 
   // não pode colocar N pra fazer a conta, declarei ali em cima o valor de N então só somar
   printf ("A=%.4lf\n", area);
return 0;
}