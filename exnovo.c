#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int idd[100],n,i,iddb=0,f,a=0;
	do {
		printf("Escreva o numero de alunos?");
		scanf("%d",&n);
		printf("Escreva a idade base?");
		scanf("%d",&iddb);
	}while(n<=0);
	
	for (i=0;i<n;i++){
		printf("Escreva a idade do aluno?");
		scanf("%d",&idd[i]);
	}
	
	for (i=0;i<n;i++){
		if(idd[i] >= iddb){
			printf(" idade = %d , posição ? %d",idd[i], i);
			break;
		}
	}
	
}
