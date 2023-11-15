// !Encontrando esas Zs¡
#pragma GCC optimize("Ofast")

#include<iostream>
#define optimize_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define ordenar(a,n) sort(a, a + n)
#define en '\n'
using namespace std;

int main(){
    optimize_io
    bool pass = false;
    int t, z = 0;
    string a, sol = "Perry saves the day!", solve = "Time to take a nap.";
    cin >> t; t++;

    while(t--){
        getline(cin, a); z = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == 'Z' or a[i] == 'z'){
                z++;
                if(z >= 3){
                    pass = true; break;
                }

            }
        }
        if(pass == false and z != 0 ){
            cout << sol << en;
        }else if (pass == true and z != 0){
            cout << solve << en;
            pass = false;
        }
    }

return 0;
}

/*
Input example:
3
Zebras are my favorite animal!
The zombie zookeeper is surprisingly good with the zebras.
Fuzzy wuzzy was a bear.
*/
