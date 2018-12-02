/* Dados dois vectores VEC1 e VEC2, escreva no ecrã os elementos comuns aos dois vectores. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int x,z,encontrou=0;
	do {
		printf("Escreve um numero\n");
		scanf("%d",&x);
		printf("Escreve um numero\n");
		scanf("%d",&z);
	}while(x <= 0 && z <= 0);
	
	int a[x],b[z],f,i,j;
	
	for (i=0;i<x;i++){
		printf("Escreve o numero da posicao %d\n",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<z;i++){
		printf("Escreve o numero da posicao %d\n",i+1);
		scanf("%d",&b[i]);
	}
	for (i=0;i<x;i++){
		encontrou=0;
		for(f=0;f<i;f++){
			if (a[i]==a[f]){
				encontrou = 1;
				f = i;
			}
		}
		if (encontrou == 0){
			for (j=0;j<z;j++){
				if (a[i] == b[j]){
					j=z;
					printf("\n%d\n",a[i]);
				}
			}		
		}
	}

	
	return 0;
}
