//Enchufes Eléctricos
#include<stdio.h>
#define ll long long

int main(){
	ll N;
	scanf("%lld",&N);
	ll K[N],O[N],R[N];

	for(int i=0;i<N;i++){
		scanf("%lld",&K[i]);
		for(int j=0;j<K[i];j++){
			scanf("%lld",&O[j]);
		}
	}
	for(int i=0;i<N;i++){
		R[i]=0;
		for(int j=0;j<K[i];j++){
			R[i]+=O[i];
		}
		R[i]-=K[i];
		//R[i]--;
		printf("%lld ",R[i]);
	}

}
