//Divisibilidad por 3
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a[3],sum = 0;
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);

    for(int i = 0; i < 3; i++){
        if(a[i] % 3 == 0){cout << a[i]; return 0;}
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum = a[i] + a[j];
            if( sum % 3 == 0){cout << a[i] << a[j]; return 0;}
        }
    }

    cout << a[0] << a[0] << a[0];
return 0;
}
