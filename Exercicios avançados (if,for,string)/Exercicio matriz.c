#include <stdio.h>

    int main(){
        int matriz[3][3];
        int c,l;

        printf("Digite os valores da matriz\n");

        for(c=0; c <3; c++){
            for(l=0; l <3; l++){
                printf("Digite [%d] [%d]\n", c, l);
                scanf("%d", &matriz[c][l]);
            }
        }

        for(c=0; c<3; c++){
            for(l=0; l<3; l++){
                printf("%d",matriz[c][l]);
            }
            printf("\n");
        }

        return 0;
    }