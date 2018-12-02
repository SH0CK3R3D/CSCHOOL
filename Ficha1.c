#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a,b,total;
	printf("Insira o primeiro numero?\n");
	scanf("%d", &a);
	printf("Insira o primeiro numero?\n");
	scanf("%d", &b);
	total = a * b;
	printf("O produto de %d e %d = %d",a ,b, total);
	return 0;
}
