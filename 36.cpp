/* Elabore um programa que guarde numa estrutura de dados adequada os dados de N alunos de uma
turma: n�mero de aluno e m�dia final. Imprima o n�mero do aluno com melhor m�dia e respetiva
m�dia.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int l,i, alu;
	do{
		printf("escreva o numero de linhas para op�oes? \n");
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
