#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int temp,max=0,aux=0;
		printf("escreva a temperatura");
		scanf("%d",&temp);
		temp = max;
		
	do{
		printf("escreva a temperatura");
		scanf("%d",&aux);
		if (aux > temp ){
		temp = aux;		
		}
	}while(temp == -21);
	printf("%d",temp);
}
