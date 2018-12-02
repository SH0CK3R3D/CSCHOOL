#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int ConverseSom(h,mn,s,h2,mn2,s2){
	int seg1,seg2,dif;
	seg1 =s+((h*pow(60,2))+(mn*60));
	seg2 =s2+((h2*pow(60,2))+(mn2*60));
	dif = abs(seg1-seg2);
	return dif;
	
}


int main(){
	int h,mn,sg,h2,mn2,sg2, final;
	do{
		printf("Escreva as horas?\n");
		scanf("%d",&h);
		printf("Escreva as minutos?\n");
		scanf("%d",&mn);
		printf("Escreva as segundos?\n");
		scanf("%d",&sg);
	}while(h > 24 || mn > 60 || sg > 60 );
	do{
		printf("Escreva as horas2?\n");
		scanf("%d",&h2);
		printf("Escreva as minutos2?\n");
		scanf("%d",&mn2);
		printf("Escreva as segundos2?\n");
		scanf("%d",&sg2);
	}while(h > 24 || mn > 60 || sg > 60 );
	final = ConverseSom(h,mn,sg,h2,mn2,sg2);
	printf("%d",final);
}
