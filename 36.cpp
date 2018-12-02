/* Elabore um programa que guarde numa estrutura de dados adequada os dados de N alunos de uma
turma: número de aluno e média final. Imprima o número do aluno com melhor média e respetiva
média.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int l,i, alu;
	do{
		printf("escreva o numero de linhas para opçoes? \n");
		scanf("%d",&l);
	}while(l < 0);
	int vec[l][2];
	float med=0;
	for (i=0;i<l;i++){
		printf("escreva o numero do aluno\n");
		scanf("%d",&vec[i][0]);
		printf("escreva a media final do aluno\n");
		scanf("%d",&vec[i][1]);
	}
	for (i=0;i<l;i++){
		if(vec[i][1] > med){
			med = vec[i][1];
			alu = vec[i][0];
		}
	}
	printf("\n %d || %f \n",alu, med);
	return 0;
}
