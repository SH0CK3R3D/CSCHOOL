/* Elabore um programa que dada uma matriz Q de L linhas e C colunas, preenchida com valores inteiros, indique se estamos na presença de uma matriz quadrada. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int l,c,q[100][100];
	do{
		printf("N de linhas\n");
		scanf("%d",&l);
		printf("N de colunas\n");
		scanf("%d",&c);
	}while(l <= 0 && c <= 0);
	if(l==c){
		printf("Estamos na presença de uma Matriz quadrada!\n");
	}else{
		printf("Nao estamos na presença de uma Matriz quadrada!\n");
	}
	
	return 0;
}
