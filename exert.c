/* Exercicio 6 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float prec,total;
	printf("Escreva o preco?");
	scanf("%f",&prec);
	total =(prec*0.25)+prec;
	printf("O total %f",total);
	return 0;
}
