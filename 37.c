/* Elabore um programa que lê uma matrizes MAT de L e C colunas, preenchida com valores inteiros e
insira a diagonal da matriz num vector VEC . */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int l,c,i;
	do{
		printf("Escreva o numero de linhas\n");
		scanf("%d",&l);
		printf("Escreva o numero de colunas\n");
		scanf("%d",&c);
	}while(l != c);
	
	int vet[l],f, mat[l][c];

	for (i=0;i<l; i++){
		for(f=0;f<c;f++){
			printf("Escreva o numero\n");
			scanf("%d",&mat[i][f]);
		}
	}
	for (i=0;i<l; i++){
		vet[i] = mat[i][i];
	}
	for (i=0;i<l; i++){
		printf(" %d", vet[i]);
	}
}
