/*EXERCICIO 2*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a,b,c;
	float media;
	printf("Escreva o 1º numero?");
	scanf("%d",&a);
	printf("Escreva o 2º numero?");
	scanf("%d",&b);
	printf("Escreva o 3º numero?");
	scanf("%d",&c);
	media= (float)(a+b+c)/3;
	printf("A media dos 3 numeros e %2f",media);
	return 0;
	
	
}
