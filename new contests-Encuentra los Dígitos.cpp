//Encuentra los Dígitos
#pragma GCC optimize("Ofast")

#include<iostream>
#include<string.h>
#define optimize_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define ordenar(a,n) sort(a, a + n)
#define en '\n'
using namespace std;

int main(){
    optimize_io
    long long t, n, num = 0, cont = 0;
    char a[10];
    cin >> t;

    while(t--){
        cin >> n;
        sprintf(a,"%lld",n);

        for(int i = 0; i < strlen(a); i++){
            num = a[i] - 48;
            if(num == 0){continue;}
            if(n % num == 0){cont++;}

        }
        cout << cont << en;
        cont = 0;
    }

return 0;
}
