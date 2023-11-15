//Dima
#include<iostream>
#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, i, cont = 0;
    cin >> n;
    int a[n], b[n] = {0};

    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    for(i = 0; i < n; i++){
        if(a[i] > b[i]){
            cont += a[i] - b[i];
            for(int j = i; j < n; j++)
                b[j] = a[i];
        }
        else if(a[i] < b[i]){
            cont += b[i] - a[i];
            for(int j = i; j < n; j++)
                b[j] = a[i];
        }
    }

    cout << cont;
return 0;
}
