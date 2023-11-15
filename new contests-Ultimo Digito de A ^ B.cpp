//Robot desobediente
#include<iostream>
#define en '\n'
using namespace std;
typedef unsigned long long ull;

ull binpow (ull a, ull b) {
    ull res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}




int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ull t;
    cin >> t;
    ull a[t], b[t];

    for(int i = 0; i < t; i++){
        cin >> a[i] >> b[t];
    }
    for(int i = 0; i < t; i++){
        cout << binpow(a[i], b[i]) << en;
    }


return 0;
}
