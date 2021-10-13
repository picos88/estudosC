#include <stdio.h>
 
int main() {
 
    int cod1,num1,cod2,num2;
    float valUni1,valUni2,total;
    
    scanf("%d %d %d %d %f %f", 
    &cod1,&num1,&cod2,&num2,&valUni1,&valUni2);
    total = (num1 * valUni1) + (num2 * valUni2);
    printf("VALOR A PAGAR: R$ %.2f\n",total);   
    
    return 0;
}
