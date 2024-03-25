#include <stdio.h>

    int main(){
        int mat1[2][2]= {{1,2},
                         {3,4}};
        int mat2[2][2]= {{5,6},
                         {7,8}};
        int mat3[2][2];
        int c,l;

        for(c=0; c <2;c++){
            for(l=0; l <2; l++){
                mat3[c][l]= mat1[c][l] + mat2[c][l];
            }
        }

        for(c = 0;c < 2;c++){
            for(l=0; l <2; l++){
             printf("%d\t", mat3[c][l]);
            }
        printf("\n");
        }

    }