//Fedor y el Nuevo Juego
#include<iostream>
using namespace std;

int f(int n){
    int cont = 0;
    while(n){
        n = n & (n-1);
        cont++;
    }
return cont;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, k, v, c = 0;
    cin >> n >> m >> k;
    int p[m+1];

    for(int i = 0; i <= m; i++){
        cin >> p[i];
    }
    v = f(p[m]);

    for(int i = 0; i < m; i++){
        if(abs(f(p[i] - v) <= k))c++;
    }

    cout << c;
return 0;
}
