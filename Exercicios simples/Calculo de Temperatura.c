#include <stdio.h>
#include <math.h>

int main (){
    float C, F, K;

    printf("Digite a temperatura em Celsius:\n");
    scanf("%f", &C);

    K = C + 273.5;
    F= C * 9/5 +32;

    printf("De Celsius para fahrenheit: %.1f\n", F);
    printf("De Celsius para Kelvin: %.1f\n", K);

    return 0;

}