#include <stdio.h>

// colocar os valores na ordem do maior para o menor
int main (void){
int a, b, c;

   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
   
    if (a < b){
        if (b < c)  printf ("%d, %d, %d\n", a, b, c);
        else if (b > c) printf ("%d, %d, %d\n", a, c, b);
    }
    if (a > b){
        if (b > c) printf ("%d, %d, %d\n", c, b, a);
        else if (b < c) printf ("%d, %d, %d\n", b , c, a);

    }
    
    return 0;
}