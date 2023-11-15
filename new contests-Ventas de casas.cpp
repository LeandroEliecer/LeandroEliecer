//Ventas de casas
#include<iostream>
#define optimize_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
typedef unsigned long long ull;

int main(){
    optimize_io
    ull n, t, cini, cfin, suma = 0; char oper;
    cin >> n;
    ull casas[n], sumando[n];

    for(int i = 1 ; i <= n; i++){
        cin >> casas[i]; suma += casas[i];
        sumando[i] = suma;
    }

    cin >> t;
    while(t--){
        cin >> oper;
        if(oper == 'U'){
            cin >> cini >> suma;
            casas[cini] +=suma;
            /*for(int j = cini; j <= n; j++){
                sumando[j] += suma;
            }*/suma = 0;
            for(int i = cini ; i <= n; i++){
                //cin >> casas[i];
                suma += casas[i];
                sumando[i] = suma;
            }
        }
        else{
            cin >> cini >> cfin;
           // if(cini == 1){cout << sumando[cfin] << '\n'; }
           // else{
                    //cout << sumando[cfin] - sumando[cini - 1] << '\n';//}
        }
        suma = 0;
    }
    for(int i = 1 ; i <= n; i++){
     //   cin >> casas[i]; suma += casas[i];
        cout << sumando[i] << '\n'; //= suma;
    }

return 0;
}
