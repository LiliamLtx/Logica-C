#include <stdio.h>
 
int main() {
 int X;
 float Y;
 float kml;
 
 scanf("%d", &X);
 scanf("%f", &Y);
 kml = X /Y;
 
 printf("km/l = %.3f\n", kml);

    return 0;
}