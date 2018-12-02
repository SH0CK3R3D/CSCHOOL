/* Exercicio 14 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float smed, vcred=0;
	printf("escreva o saldo medio?\n");
	scanf("%f",&smed);
	if (smed >= 0 && smed <= 200) {
		printf("Não houve nenhum credito!");
	}
	if(smed >= 201 && smed <= 400 ) {
		vcred = smed*0.20;
		printf("O seu saldo medio e %f e o seu credito e de %f",smed,vcred);
	}
	if(smed >= 401 && smed <= 600 ) {
		vcred = smed*0.30;
		printf("O seu saldo medio e %f e o seu credito e de %f",smed,vcred);
	}
	if(smed > 600 ) {
		vcred = smed*0.40;
		printf("O seu saldo medio e %f e o seu credito e de %f",smed,vcred);
	}
}
