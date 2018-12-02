#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercicio T */
int main(){
    int n,iddmin,cont=0,i,idd,sm=0;
    float med;
    printf("Escreva o numero de alunos da turma?\n");
    scanf("%d",&n);
    printf("Escreva a idade minima dos alunos?\n");
    scanf("%d",&iddmin);
    for (i=0;i<n;i++){
        printf("Qual a idade do aluno?\n");
        scanf("%d",&idd);
        if(idd > iddmin){
            cont++;
            sm=sm+idd;
            abs(med=(float)sm/cont);
        }
    }
    printf("A media de alunos com idade superior a %d é %2f\n",iddmin,med);
}
