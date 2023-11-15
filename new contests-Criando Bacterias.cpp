//Criando Bacterias
#pragma GCC optimize("Ofast")

#include<iostream>
#include<math.h>
#define optimize_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


int main(){
    optimize_io
    int x, cont = 0;
    cin >> x;
    /*a = floor(log2(x));
    cout << a;*/
    while(x > 1){
        while(x%2 == 0){x/=2;}
        if(x%2 != 0){
            x--;cont++;
        }
    }
    if(cont == 0){cont = 1;}
    cout << cont;
}
