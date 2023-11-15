//Lavando los Platos
#include<iostream>
#include<stack>
#define ll long long
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    optimize
 	ll n, i, c, d, aux;
 	cin >> n;
    stack<ll> pila;
    stack<ll> labados;
    stack<ll> secados;

    for(i = n; i >= 1; i--){
        pila.push(i);
    }

    while(secados.size() < n){
        cin >> c >> d;
        if(c == 1){
            while(d--){
                aux = pila.top();
                pila.pop();
                labados.push(aux);
            }
        }
        else{
            while(d--){
                aux = labados.top();
                labados.pop();
                secados.push(aux);
            }
        }
    }
    while(secados.size() != 0){
        cout << secados.top() << '\n';
        secados.pop();
    }
return 0;
}
