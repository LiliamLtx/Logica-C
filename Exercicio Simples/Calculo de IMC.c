#include <stdio.h>

 int main (){
   float altura, peso, IMC;
 
 printf ("Digite o peso:");
 scanf ("%f" , &peso);
 printf ("\n\n Agora a altura:");
 scanf ("%f" , &altura);
  
  altura = pow (altura,2);
  IMC = peso/altura;

  printf ("O valor do Imc calculado é: %.2f", IMC);


    return 0;
 }