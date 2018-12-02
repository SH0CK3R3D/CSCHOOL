#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int cont=0, i=0, f=0;
	char letra;
	char frase[100], vogais[5]={'a','e','i','o','u'};
	fflush(stdin);
	scanf("%[^\n]s",&frase);
	fflush(stdin);
	while (frase[i] != '\0'){
		if(frase[i] == vogais[f]){
			cont ++;
		}
		i++;
	}
	printf("%d", cont);
}
