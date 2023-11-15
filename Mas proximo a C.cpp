//Más próximo a C
#include<iostream>
#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a[3], v1, v2, sol, dif = 1e9;
    cin >> a[0] >> a[1] >> a[2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            v1 = a[i] + a[j];
            v2 = a[i] * a[j];
            if(dif > abs(v1 - a[2])){dif = abs(v1 - a[2]); sol = v1;}
            if(dif > abs(v2 - a[2])){dif = abs(v2 - a[2]); sol = v2;}
        }
    }
    cout << sol;

return 0;
}
