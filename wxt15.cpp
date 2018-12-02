/* Exercicio 15 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float sal,newsal;
	int n;
	printf("escreva o salario?\n");
	scanf("%f",&sal);
	printf("escreva o numero do func?\n");
	scanf("%d",&n);
	switch (n) {
		case 101:
			newsal = sal*0.25;
			newsal = newsal + sal;
			printf("Para o Gerente o antigo salario era %2f e agora e %2f",sal,newsal);
			break;
		case 102:
			newsal = sal*0.20;
			newsal = newsal + sal;
			printf("Para o Engenheiro o antigo salario era %2f e agora e %2f",sal,newsal);
			break;	
		case 103:
			newsal = sal*0.15;
			newsal = newsal + sal;
			printf("Para o tecnico o antigo salario era %2f e agora e %2f",sal,newsal);
			break;
		default:
			newsal = sal*0.10;
			newsal = newsal + sal;
			printf("Para o Trabalhador o antigo salario era %2f e agora e %2f",sal,newsal);
			break;
	}
}
