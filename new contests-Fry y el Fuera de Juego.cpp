//Fry y el Fuera de Juego
#include<iostream>
#include<algorithm>
#define rep(i) for(int i = 0; i < 11; i++)
using namespace std;

int main(){
    int x, u, cont = 0;
    cin >> x;
    int g[11], d[11];

    rep(i){
        cin >> g[i];
    }
    rep(i){
        cin >> d[i];
    }

    sort(d, d + 11);

    u = g[x-1];
    rep(i){
        if(d[i] < u){
            cont++;
        }else{
            break;
        }
    }
    if (cont < 2){
        cout << "OFFSIDE";
    }
    else {
        cout << "GOAL";
    }

return 0;
}
