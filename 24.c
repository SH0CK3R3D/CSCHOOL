#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*EXERCICIO X*/

int main() {
  /* code */
  int n, vet[100],i,j, aux;
  printf("Escreva o numero?\n");
  scanf("%d",&n);
  for (i=0;i<n;i++) {
    printf("Escreva o numero no vet %d\n",i+1);
    scanf("%d",&vet[i]);
  }
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(vet[i] < vet[j]){
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
        }
    }
  }
    for (i=0;i<n;i++) {
    printf("\n%d\n",vet[i]);
  }
  return 0;
}
