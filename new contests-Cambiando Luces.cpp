//Cambiando luces
#include<iostream>
using namespace std;
//typedef unsigned long long ull;
const int maxn = 501;
bool vacas[maxn] = {false};

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, oper, s, e, cont = 0;
    cin >> n >> m;

    while(m--){
        cin >> oper >> s >> e;
        if(oper == 0){
            for(int i = s; i <= e; i++){
                if(vacas[i] == false){vacas[i] = true;}
                else{vacas[i] = false; }
            }
        }
        else{
            for(int i = s; i <= e; i++){
                if(vacas[i] == true){cont++; }
            }
            cout << cont << '\n';
            cont = 0;
        }
    }
return 0;
}
