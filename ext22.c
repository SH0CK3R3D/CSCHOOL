#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, soma,cont=0;
    do{
       printf("Escreva 5 numeros!\n");
       scanf("%d",&n);
       cont++;
       soma = soma +n;
    }while(cont < 5 || soma <= 100);
    printf("%d\n",soma);
    return 0;
}
