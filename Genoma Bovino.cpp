//Genoma Bovino
#include<iostream>
#include<vector>
#define st string
#define vs vector<string>
#define pb push_back
#define save_1 for(i = 0; i < n; i++){ cin >> cad; m.push_back(cad);}
#define save_2 for(i = 0; i < n; i++){ cin >> cad; nm.push_back(cad);}
using namespace std;

st solve, solve1;

void compare(st a, st b, int pos){
    solve.pb(a[pos]);
    solve1.pb(b[pos]);
}

bool solucion(){
    for(int r = 0; r < solve.size(); r++){
        for(int u = 0; u < solve1.size(); u++){
            if(solve[r] == solve1[u]){
                return false;
            }
        }
    }
return true;
}

int main(){
    int n, l, i, j, cont = 0; st cad;
    cin >> n >> l;
    vs m;
    vs nm;
    save_1 save_2

    for(j = 0; j < l; j++){
        for(i = 0; i < n; i++){
            compare(m[i], nm[i], j);
        }
        if(solucion() == true){
            //cout << j; return 0;
            cont++;
        }

        solve.clear();
        solve1.clear();
    }
    cout << cont;
return 0;
}






/*
#include<iostream>
#define optimize_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define en '\n'
using namespace std;

int main(){
    optimize_io
    string a;
    cin >> a;
    int n = a.size(), cont = 0;

    for(int i = n-1; i >= 0; i--){
        if(a[i] == '(' ){
                if(i == n-1){cout << ')'; return 0;}
                for(int j = i; j < n; j++){
                    if(a[j] == '('){cont++;}
                    else if(a[j] == ')'){cont--;}
                }
                if(cont != 0){cout << ')'; return 0;}
           }
        else if(a[i] == '{'){
            if(i == n-1){cout << '}'; return 0;}
                for(int j = i; j < n; j++){
                    if(a[j] == '{'){cont++;}
                    else if(a[j] == '}'){cont--;}
                }
                if(cont != 0){cout << '}'; return 0;}
        }
        else if (a[i] == '['){
            if(i == n-1){cout << ']'; return 0;}
                for(int j = i; j < n; j++){
                    if(a[j] == '['){cont++;}
                    else if(a[j] == ']'){cont--;}
                }
                if(cont != 0){cout << ']'; return 0;}
        }
    }
    return 0;
}
*/
