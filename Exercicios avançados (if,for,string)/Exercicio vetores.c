#include <stdio.h>

void notas(float nota[], int x){
    for(int i = 0; i < x; i++){
        printf("Insira a %da nota: ", i + 1);
        scanf("%f", &nota[i]);
        fflush(stdin);
    }
}
float media(float nota[], int x){
    float media = 0;
    for(int i = 0; i < x; i++){
        media += nota[i];
    }
    return media /= x;
}
int main(){
    int x;
    float nota[5], resultado;
    puts("Digite quantas notas voce quer inserir: ");
    scanf("%d", &x);
    notas(nota, x);
    resultado = media(nota, x);
    printf("Media = %.2f", resultado);
}