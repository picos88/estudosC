#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    
    char aluno[10];
    int nota1, nota2, nota3, nota4, *v;

    scanf("%s", &aluno);
    printf("%s \n", aluno);

    scanf("%d", &nota1);
    printf("%d\n", nota1);
    scanf("%d", &nota2);
    printf("%d\n", nota2);
    scanf("%d", &nota3);
    printf("%d\n", nota3);
    scanf("%d", &nota4);
    printf("%d\n", nota4);
    mediaAluno(nota1, nota2, nota3, nota4);
    
}

void mediaAluno(int nota1, int nota2, int nota3, int nota4){
    
    float media; 
    media = (nota1 + nota2 + nota3 + nota4)/4;
    printf("%f\n", media);

}