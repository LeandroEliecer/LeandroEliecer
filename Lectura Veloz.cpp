//Lectura Veloz
#include<stdio.h>
#define ll long long

int main(){
	ll N,K;
	scanf("%lld %lld",&N,&K);
	ll Vlectura[K],TMlectura[K],descanso[K],respuesta=0,min=0;
	
	for(ll i=0;i<K;i++){
		scanf("%lld %lld %lld",&Vlectura[i],&TMlectura[i],&descanso[i]);
	}
	
	for(ll i=0;i<K;i++){
		while(respuesta<N){
			
		if(TMlectura[i]==min){
				min+=descanso[i];
				descanso[i]+=descanso[i];
			}
			else{
				respuesta+=Vlectura[i];
				min+=1;
			}
		}
		printf("%lld\n",min);	
		respuesta=0;
		min=0;	
	}
}
