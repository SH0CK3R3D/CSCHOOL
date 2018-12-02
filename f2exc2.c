#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int factorial(n){
	int fac;
	fac=n;
	while(1<n){
		n=n-1;
		fac = fac*n;
	}
	return fac;
}

int main(){
	int n,factor;
	do{
		printf("Escreva um numero para o factorial?");
		scanf("%d",&n);
	}while (n<0);
	factor = factorial(n);
	printf("O total do factorial e %d",factor);
	
}
