/* Elabore um programa que lê uma matriz MAT de L e C colunas, preenchida com valores inteiros e
mostre o centro da matriz.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int l,c;
	printf("Escreva o numero de linhas?\n");
	scanf("%d",&l);
	
	printf("Escreva o numero de colunas?\n");
	scanf("%d",&c);
	
	int mat[l][c],i,j;
	
	for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			printf("Digite o valor da parcela l %d: c %d: ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	
	if (l = c){
		if (l%2 == 0 && c%2 == 0) {
			printf("o centro e  %d, %d, %d, %d",mat[l/2][c/2], mat[l/2][(c/2)-1], mat[(l/2)-1][c/2], mat[(l/2)-1][(c/2)-1]); // mat[l/2][c/2] = Inferior direito / mat[l/2][(c/2)-1] = inferior esquerdo / mat[(l/2)-1][c/2] = superior direito / mat[(l/2)-1][(c/2)-1] = superior  esquerdo
			
		}else {
			
			if (l%2 != 0 && c%2!=0) {
				printf("o centro e %d", mat[l/2][c/2]);
			}
		}
	}else{
		
		if (l%2 != 0 && c%2 == 0) {
			printf("o centro e %d %d", mat[l/2][c], mat[l/2][c-1]);
		}else{
			if (l%2 == 0 && c%2 != 0) {
			printf("o centro e %d %d", mat[l][c/2], mat[l-1][c/2]);
			}
		}
	}
}
