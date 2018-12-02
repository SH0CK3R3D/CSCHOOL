/* Exercicio 8 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n,u,d,c;
	printf("Escreva um numero de 3 digitos?\n");
	scanf("%d",&n);
	u = n%10;
	d = (n/10)%10;
	c = n/100;
	printf("O numero das unidades %d o das dezenas %d o das centenas %d",u,d,c);
	return 0;
}
