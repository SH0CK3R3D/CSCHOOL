#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int temp,max,aux;
	do{
		printf("Temperatura1?");
		scanf("%d",&temp);
	}while(temp < -21 || temp > 50);
	max=temp;
	if(max==-21){
		printf("naoc foi enserido nenhuma temperatura maior que -21");
	}else{
		do{
			printf("Temperatura?");
			scanf("%d",&aux);
			if(aux > max){
				max=aux;
			}
		}while(temp < -21 || temp >50);
	}
	printf("%d",max);
}
