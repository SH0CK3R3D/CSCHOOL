#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	int vec[8]={8,2,4,1,6,12,5,9},i,n;
	n=8;
	for (i=1;i<n-1;i++){
		if (vec[i] > vec[i-1] && vec[i] > vec[i+1]){
			printf("O numero %d é maior que o seu antecessor %d e que seu sucessor %d",vec[i],vec[i--],vec[i++]);
		}
	}
}
