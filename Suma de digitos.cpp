//Suma de dígitos
#include<stdio.h>
#define ll long long
ll cont;

void imprime_binario(ll n){
	if (n>=2){
 		imprime_binario (n/2);
 			//printf("%lld ",n%2);
            if(n%2==1){
                cont++;
            }
 		}else{
 			//printf("%lld ",n);
            if(n%2==1){
                cont++;
 		}
    }
}
int main(){
    ll n;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++){
        imprime_binario(i);
    }
    printf("%lld",cont);
}
