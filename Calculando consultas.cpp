//Calculando consultas
#include<iostream>
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define en '\n'
using namespace std;
//const int maxn = 5e5+25;
//int a[maxn], abi[maxn];

int32_t main(){
    int n, q, v = 1e9;
    cin >> n >> q;
    int a[n+1], m[n+1]; m[0] = 1e9;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        v = min(v,a[i]);
        if(v == a[i]){
            m[i] = v;
        }
    }

    while(q--){

    }

return 0;
}
