#include <stdio.h>
#include <math.h>

int main (){
    float nota1, nota2, nota3, media;

    printf("Digite a nota do primeiro aluno:\n");
    scanf("%f",&nota1);
    printf("Digite a nota do segundo aluno:\n");
    scanf("%f",&nota2);
    printf("Digite a nota do terceiro aluno:\n");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3) / 3;
 
    printf("A media dos alunos= %.2f\n", media);

    return 0;
}