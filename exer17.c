#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float nota;
    int n, i, cont=0;
    printf("Escreva o numero de Alunos\n");
    scanf("%d", &n);
    for (i=0;i<n;i++){
        printf("Escreva a nota do aluno?\n");
        scanf("%f", &nota);
        if (nota < 10){
            cont++;
        }
    }
    printf("Existe %d negativas.\n",cont);
}