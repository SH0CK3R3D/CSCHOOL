/* Elabore um programa que lê um vector de N elementos e calcule a média dos elementos ímpares. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int inpc=0,n;
	float med;
	do {
		printf("Escreve um numero\n");
		scanf("%d",&n);
	}while(n <= 0);
	
	int vec[n],i,soma=0;
	
	for (i=0;i<n;i++){
		printf("escreva o numero da posicao %d\n",i+1);
		scanf("%d",&vec[i]);
	}
	for (i=0;i<n;i++){
		if (vec[i]%2 != 0){
			inpc++;
			soma = soma + vec[i];
		}
	}
	med=soma/inpc;
	printf("A media de todos os numeros impares %2f",med);
	return 0;
}
