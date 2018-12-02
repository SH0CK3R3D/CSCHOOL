/* Exercicio 7 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float prec,nota ,troco,total;
	printf("Escreva preço?");
	scanf("%f",&prec);
	printf("Escreva a quanto deu?");
	scanf("%f",&nota);
	troco= nota-prec;
	total = (troco*0.10)-troco;
	printf("O troco efectivo a retribuir a um cliente %f", total);
	return 0;
}
