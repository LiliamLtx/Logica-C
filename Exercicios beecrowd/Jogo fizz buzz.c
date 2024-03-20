#include <stdio.h>
    int main (){
        int N, i;
        printf ("a seguir digite um numero limite:\n");
        scanf("%d", &N);
        for(i=1; i <= N; i++){
            printf("%d\t",i);

            if (i % 3 == 0) printf("Fizz\n");
            else if(i % 5 == 0) 
    
             printf("Buzz\n");
            else 
                 printf ("%d\n", i);
            

        

    return 0;
    }
    }