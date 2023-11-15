//Suma con pares
#include<iostream>
#include<algorithm>
#define ll long long
#define en '\n'
#define ud unsigned
#define rep(i,n) for(ud ll i = 0; i < n; i++)
#define rrep(j,n) for(ud ll j = 0; j < n; j++)
using namespace std;

ud ll n,x,cont;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    ud ll a[n];

    for(ud ll i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x;
    sort(a, a + n);

    //for(ud ll i = 0; i < n; i++){
        //for(ud ll j = 0; j < n; j++){
           // if(a[i] >= x and a[j] >= x){ break;}
       rep(i,n){
           rrep(j,n){
            if (a[i] >= x){
                    cout << cont/2;
                    return 0;
            }
            //else if (a[i] >= x and a[j] > 0 or a[i] > 0 and a[j] >= x){ break;}
            else if (a[i] + a[j] == x){ cont++; break;}
        }
    }
    cout << cont/2;
    return 0;
}
