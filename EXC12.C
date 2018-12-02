/* Exercicio 12 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int idd,estciv;
	printf("escrever idd?\n");
	scanf("%d",&idd);
	printf("escrever estciv? (0 solt 1 cas)\n");
	scanf("%d",&estciv);
	if (estciv == 0){
		if(idd < 25){
			printf("grupo1");
		}else{
			printf("grupo2");
		}
	}else{
		if(idd < 34){
			printf("grupo3");
		}else{
			printf("grupo4");
		}
	}

	return 0;
}


