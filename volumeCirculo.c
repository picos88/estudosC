#include <stdio.h>
 
int main() {
 
   float r, VOLUME;
   
   scanf("%f", &r);
   VOLUME = (4/3.0) * 3.14159 * r * r * r;
   printf("VOLUME = %.3f\n", VOLUME);
 
    return 0;
}