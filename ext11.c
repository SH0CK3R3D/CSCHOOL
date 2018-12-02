/* Exercicio 11 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float h,recebe;
		printf("Escreva o numero de Horas?\n");
		scanf("%f",&h);
		if (h <= 36) {
			recebe = 7.5*h;
			printf("Recebe %f",recebe,"€");
		}else {
			if (h>36) {
				recebe = (h-36)*10+(7.5*36);
				printf("Recebe %f",recebe,"€");
			}
		}
	return 0;
}
