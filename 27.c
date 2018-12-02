#include <stdlib.h>
#include <stdio.h>
#include <math.h>
 /* Dado um vector de K elementos determine a maior diferença entre dois elementos consecutivos. */
int main(){
	int i,n, dif, aux,j;
	do {
		printf("wscreva um numero\n");
		scanf("%d",&n);
	} while(n <= 0);
	
	int k[n];
	
	for (i=0;i<n;i++){
		printf("Escreva o numero da %d posicao!", i+1);
		scanf("%d",&k[i]);
	}
	dif = k[0] - k[1];
	for(i=0;i<n-1;i++){			
		for(j=i+1;j<n;j++){
			aux = k[i] - k[j];
			if (dif < aux){
				dif = aux;
			}
		}
	}
	printf("%d",dif);
}
