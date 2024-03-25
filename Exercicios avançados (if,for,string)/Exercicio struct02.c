#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

    struct Aluno
    {
        char nome[50];
        int idade;
        float media;
        float notas[5];
    };

        int main(){
            
            struct Aluno alunos[3];

            printf("A seguir digite as informações dos alunos:\n");

            for(int i=0; i < 3; i++){
                printf("Digite o nome do %d aluno:\n", i+1);
                scanf("%50[^\n]s", alunos[i].nome);
                fflush(stdin);

                printf("Digite a idade do aluno %d:\n", i+1);
                scanf("%d", &alunos[i].idade);
                fflush(stdin);

                printf("A seguir digite as notas do %d aluno:\n", i+1);
                    for(int n=0; n < 5; n++){
                        printf("Digite a %d nota:\n", n+1);
                        scanf("%f", &alunos[i].notas[n]);
                        fflush(stdin);
                    }
            }
            for(int i=0; i< 3; i++){
                printf("Nome: %s\n Idade: %d\n", alunos[i].nome, alunos[i].idade);
                for(int n=0; n< 5; n++){
                    printf("Nota: %.2f \n", alunos[i].notas[n]);
                }
            }

            

        }
    
