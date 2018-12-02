/* Exercicio 9 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	printf("Escreva um numero?\n");
	scanf("%d",&n);
	if (n%2 == 0) {
		printf("Par");
	}else{
		printf("Impar");
	}
	return 0;
}
