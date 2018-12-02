#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int A[100],n,maior,posmaior,menor,posmenor,i;
	do {
		printf("wscreva um numero\n");
		scanf("%d",&n);
	} while(n <= 0);
	
	int vec[n];
	
	for (i=0; i<n; i++) {
		printf("escreva o vec[%d]",i);
		scanf("%d", &vec[i]);
	}
	
	maior=vec[0]; posmaior=0; maior=vec[i]; posmenor=0;
	
	for(i=1;i<n-1;i++){
		if(vec[i] > maior){
			maior=vec[i];
			posmaior= i;
		}else{
			if(vec[i] < maior){
			menor=vec[i];
			posmenor= i;
		}
		}
	}
	printf("%d\n%d", maior,menor);
}
