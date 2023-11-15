//Calculando en Matelandia
#include<bits/stdc++.h>
#define ll long long
unsigned ll t ,h ,r;

int main(){
    scanf( "%lld", &t );
	ll n[t];

	for(ll i = 0 ;i < t ;i++){
		scanf( "%lld", &n[i] );
	}

    for(ll i = 0 ;i < t ;i++){
        r = 0;
		r = n[i] * n[i] - n[i];
        printf( "%lld \n", r );
	}
}
