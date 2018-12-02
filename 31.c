 /*Elabore um programa que lê um vector VEC_ORIGINAL de N elementos e os reescreva num outro vector VEC_ORDENADO por ordem crescente. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int x,aux=0;
	do {
		printf("Escreve um numero\n");
		scanf("%d",&x);
	}while(x <= 0);
	
	int a[x],i,j;
	
	for (i=0;i<x;i++){
		printf("Escreve numero posicao\n");
		scanf("%d",&a[i]);
	}
	for (i=0;i<x-1;i++){
		for(j=i+1;j<x;j++){
			if(a[i] > a[j]){
				aux = a[j];
				a[j] = a[i];
				a[i] = aux;
			}
		}
		
	}
	for (i=0;i<x;i++){
		printf("%d",a[i]);
	}
	return 0;
}
