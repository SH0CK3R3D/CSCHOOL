#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
    int n, cont=0,sm=n;
    float med;
    printf("Escreva o primeiro numero?\n");
    scanf("%d",&n);
    while (n != 0) {
        printf("Escreva o primeiro numero?\n");
        scanf("%d",&n);
        cont++;
        sm=sm+n;
        abs(med=(float)sm/cont);
    }
    printf("A media de %d numeros é igual %2f\n", cont, med);c
}