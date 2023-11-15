//Fichas de domino II
#include <stdio.h>
int main(){ 
	long long d;
	scanf("%lld",&d);
	long long  fichamax[d]; 

for(int i=0;i<d;i++){ 
     scanf("%lld",&fichamax[i]);
     fichamax[i]=((fichamax[i]+2)*(fichamax[i]+1)/2);
   } 
   
   for(int i=0;i<d;i++){
   		printf("%lld\n",fichamax[i]);
   }
}
