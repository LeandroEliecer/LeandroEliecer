//El gusanillo
#include<iostream>
#define ll long long
using namespace std;

int main(){
    ll r, d, p, cont = 0;
    cin >> r >> d >> p;


    for(ll i = 0; i <= r; i += d ){
        if(i % p == 0){cont++; }
    }

    /* >> cont = 1
    for(ll i = 0; i <= r; i += d ){
        for(ll j = p; j <= r; j += p){
            if(i == j){cont++; }
        }
    }*/
    cout << cont;

return 0;
}
