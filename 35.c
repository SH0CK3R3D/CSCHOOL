/* Elabore um programa que guarde numa estrutura de dados adequada os dados de N alunos de uma
turma: número de aluno e idade. Imprima o número dos alunos com idade compreendida entre 16 e
20.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int l,i;
	do{
		printf("escreva o numero de linhas para opçoes? a\n");
		scanf("%d",&l);
	}while(l < 0);
	
	int vec[l][2];
	
	for (i=0;i<l;i++){
		printf("escreva o nome do aluno\n");
		scanf("%d",&vec[i][0]);
		printf("escreva a idade do aluno\n");
		scanf("%d",&vec[i][1]);
	}
	
	for (i=0;i<l;i++){
		if (vec[i][1] > 16 && vec[i][1] < 20){
			printf("\n%d || %d\n", vec[i][0], vec[i][1]);
		}
	}
	return 0;
}
