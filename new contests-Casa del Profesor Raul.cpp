//Casa del Profesor Raúl
#include<stdio.h>
#define ll long long
#define s(i) ((i)*((i)+1)/2)
using namespace std;

int32_t main(){
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;
    //cin >> n;
    scanf("%lld",&n);
    for(ll i = 3; i <= n; i++){
        //sol = s(i-1); sol1 = s(n) - s(i);
        if(s(i-1) == s(n) - s(i)){
            //cout << i; return 0;
            printf("%lld",i); return 0;
        }
    }
return 0;
}
