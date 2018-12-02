
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, imp=0, aux=0, mnpar, conpar=0;
    do {
        printf("Escreva um numero aleatório!\n");
        scanf("%d",&n);
        if (abs(n%2 == 0)){
            conpar++;
            if (n > mnpar || aux==0) {
                mnpar = n;
                aux=1;
            }
        }else{
            if (abs(n%2 != 0)){
                imp++;
            }
        }
    }while(5 > imp);
    if(conpar == 0){
        printf("Não colocou nenhum numero par! \n");
    }else{
        printf("O maior numero par enserido é %d \n",mnpar);
    }
}
