/* Elabore um programa que guarde numa estrutura de dados adequada os dados de N funcion�rios de
uma empresa: n�mero de funcion�rio e sal�rio. Imprima o n�mero dos funcion�rios com sal�rio
superior a 1000�.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int l,i;
	do{
		printf("escreva o numero de linhas para op�oes? a\n");
		scanf("%d",&l);
	}while(l < 0);
	
	int vec[l][2];
	
	for (i=0;i<l;i++){
		printf("escreva o numero do funcionario\n");
		scanf("%d",&vec[i][0]);
		printf("escreva o salario\n");
		scanf("%d",&vec[i][1]);
	}
	
	for (i=0;i<l;i++){
		if (1000 < vec[i][1]){
			printf("\n%d || %d\n", vec[i][0], vec[i][1]);
		}
	}
	return 0;
}
