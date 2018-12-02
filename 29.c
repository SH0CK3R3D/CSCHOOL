/* Dado um vector de N elementos indique quantos são múltiplos de 3. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int mul3=0,n;
	do {
		printf("Escreve um numero\n");
		scanf("%d",&n);
	}while(n <= 0);
	
	int vec[n],i;
	
	for (i=0;i<n;i++){
		printf("escreva o numero da posicao %d\n",i+1);
		scanf("%d",&vec[i]);
	}
	for (i=0;i<n;i++){
		if (vec[i]%3 == 0){
			mul3++;
		}
	}
	printf("%d",mul3);
	return 0;
}
