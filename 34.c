/* Elabore um programa que guarde numa estrutura de dados adequada os dados de N funcion�rios de
uma empresa: n�mero de funcion�rio e sal�rio. Imprima o n�mero dos funcion�rios com sal�rio
superior a 1000�.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int l,i;
		printf("escreva o numero de linhas para op�oes? a\n");
		scanf("%d",&l);
		
	int a[l][2];
	
	 for (i=0; i<l; i++){
		printf("Escreva o numero do funcion�ria!");
		scanf("%d",a[l][0]);
		printf("Escreva o numero do funcion�ria!");
		scanf("%d",a[l][1]);
	}
	for (i=0; i<l; i++){
	 	if (a[l][1] > 100){
	 		printf("O funcionario %d tem um salario de %d", a[l][0],a[l][1]);
		}
	}
	return 0;
}
