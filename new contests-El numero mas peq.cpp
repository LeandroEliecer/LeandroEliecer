//El número más pequeño
#include<iostream>
#define en '\n'
using namespace std;
typedef unsigned long long ull;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ull a[3],b[3],c[3];

    for(ull i = 0; i < 3; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    for(ull i = 0; i < 3; i++){
        for(ull j = 1; j < 1000000000; j++){
            if(j != a[i] and j != b[i] and j != c[i] and j != a[i] + b [i] + c[i] and j != a[i] + b[i] and j != b [i] + c[i] and j != a[i] + c[i]){
                cout << j << en; break;
            }
        }
    }

return 0;
}
