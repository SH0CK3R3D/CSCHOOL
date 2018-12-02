/* Exercicio 13 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	printf("escrever n de 1-7 semana?\n");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("segunda");
			break;
		case 3:
			printf("terça");
			break;
		case 4:
			printf("quarta");
			break;
		case 5:
			printf("quinta");
			break;
		case 6:
			printf("sexta");
			break;
		case 7:
			printf("sabado");
			break;
		default:
			printf("nao colocou corretamente o n");
			break;
	}
	return 0;
}

