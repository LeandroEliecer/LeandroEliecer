//Bender y los Numeros Aleatorios
#include<stdio.h>
int N, H, D, cont;

int main(){
	scanf("%d",&N);
	N *= N;
	H = N;
	while(H > 0){
		H /= 10;
		cont++;
	}
	
	if(cont == 7){
		D = N/1000000;
		D *= 1000000;
		N -= D;
		printf("%d",N/100);
	}
	else if(cont == 8){
		D = N/1000000;
		D *= 1000000;
		N -= D;
		printf("%d",N/100);
	}
return 0;
}