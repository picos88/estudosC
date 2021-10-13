#include <stdio.h>
 
int main() {
 
  char nomeVendedor[10];
  float salarioFixo,totalVendas,total;
  
  scanf("%s %f %f",&nomeVendedor,&salarioFixo,&totalVendas);
  total = (totalVendas*15)/100;
  printf("TOTAL = R$ %.2f\n", salarioFixo+total);
 
    return 0;
}