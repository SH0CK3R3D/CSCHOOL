#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
    int x, i, par=0;
    printf("Escreva o Inicio (x) da sequencia\n");
    scanf("%d",&x);
    printf("Escreva o Fin (y) da sequencia de numeros\n");
    scanf("%d",&i);
    for (x>=0;x<=i;x++){
        if (x%2 == 0){
            par = x;
            printf("%d\n", par);
        }
    }
}
