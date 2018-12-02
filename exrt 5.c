/* Exercicio 5 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a,l;
	float area;
	printf("Escreva o 1º numero?");
	scanf("%d",&a);
	printf("Escreva o 1º numero?");
	scanf("%d",&l);
	area= (float)a*l/2;
	printf("A area de %2f",area);
	return 0;
}
