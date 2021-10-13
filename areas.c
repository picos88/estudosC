#include <stdio.h>
 
int main() {
 
   float a,b,c,trianguloRet,circuloRaio,trapezio,quadrado,retangulo;
   scanf("%f %f %f", &a, &b, &c);
   trianguloRet = (a*c)/2;
   circuloRaio = 3.14159*c*c;
   trapezio = ((a + b) * c)/2;
   quadrado = b*b;
   retangulo = a*c;
   
   printf("TRIANGULO: %.3f\n", trianguloRet);
   printf("CIRCULO: %.3f\n", circuloRaio);
   printf("TRAPEZIO: %.3f\n", trapezio);
   printf("QUADRADO: %.3f\n", quadrado);
   printf("RETANGULO: %.3f\n", retangulo);
   
    return 0;
}