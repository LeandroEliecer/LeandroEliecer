//Elemento faltante
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll N;
	scanf("%lld",&N);
	N--;
	ll array[N];

	for(int i=0;i<N;i++){
		scanf("%lld",&array[i]);
	}
	sort(array,array+N);
	for(int i=0;i<N;i++){
		if(i+1!=array[i]){
                printf("%d",i+1);
			//cout<<i+1<<endl;
		}
	}
}
