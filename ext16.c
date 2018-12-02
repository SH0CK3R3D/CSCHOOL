/* Exercicio 16 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int cont=0,n;
	float med, nota=0,soma=0;
	printf("Insira a numero dos aluno?\n");
	scanf("%d",&n);
	do{
		printf("Insira a nota ?\n");
		scanf("%f",&nota);
		cont++;
		soma = soma+nota;
		med = soma/cont;	
	}while(cont < n);
	printf("a media aritmetica da turma e %f",med);
}
