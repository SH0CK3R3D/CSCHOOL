/* Exercicio 10 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float n1,n2,nota;
		printf("Escreva a nota final escrita?\n");
		scanf("%f",&n1);
		printf("Escreva a nota final oral?\n");
		scanf("%f",&n2);
	while (n1 != -1 || n2 != -1) {
		nota = (n1*0.70)+(n2*0.30);
		if (nota>=10) {
			printf("Aprovado\n");
			printf("Escreva a nota final escrita?\n");
			scanf("%f",&n1);
			printf("Escreva a nota final oral?\n");
			scanf("%f",&n2);
		}else{
			printf("Reprovado\n");
			printf("Escreva a nota final escrita?\n");
			scanf("%f",&n1);
			printf("Escreva a nota final oral?\n");
			scanf("%f",&n2);
		}
	}
	return 0;
}
