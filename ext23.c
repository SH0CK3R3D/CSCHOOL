#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  /* code */
  int vet[100], n, i;
  printf("Escrever o número de numeros do vector?\n");
  scanf("%d",&n );
  for ( i = 0; i < n; i++) {
    /* code */
    printf("Escreva o %d numero de %d!\n",i+1, n);
    scanf("%d\n",&vet[i] );
  }
  for ( i = 0; i < n; i++) {
    printf("%d\n",vet[i]);
  }
  return 0;
}
