/* Elabore um programa que lê duas matrizes, A e B, de LA e LB linhas e CA e CB colunas, respetivamente,
   cada uma preenchida com valores inteiros e insira o resultado da soma das matrizes A e B numa nova matriz C.
   (Somar todos os elementos correspondentes)*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int l,c,i,f;
	do{
		printf("N de linhas a\n");
		scanf("%d",&l);
		printf("N de colunas a\n");
		scanf("%d",&c);
	}while(l !=c);
	
	int a[l][c], b[l][c], d[l][c];
	
		
			
		for (i=0;i<l;i++){
			for(f=0;f<c;f++){
				printf("Escreva o numero da posicao %d\n", i+1,f+1);
				scanf("%d",&a[i][f]);
			}
		}
		/* Escreve a matriz 2 */
		
		for (i=0;i<l;i++){
			for(f=0;f<c;f++){
				printf("Escreva o numero da posicao %d\n",i+1,f+1);
				scanf("%d",&b[i][f]);
			}
		}
		for (i=0;i<l;i++){
			for(f=0;f<c;f++){
				d[i][f] = a[i][f] + b[i][f];
			}
		}
		for (i=0;i<l;i++){
			for(f=0;f<c;f++){
				printf("%d\n", d[i][f]);
			}
		}
	
	return 0;
}
