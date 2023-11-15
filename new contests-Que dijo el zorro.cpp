//Que dijo el zorro
#include<iostream>
#include<vector>
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define en '\n'
using namespace std;

int main(){
    optimize
 	int t, j, p, f;
 	string a, aux, ani;
 	cin >> t;

 	while(t--){
        /**Quitar in getline al enviar al DMOJ*/
        getline(cin, a);
        getline(cin, a); aux.clear();
        vector<string> vs;

        for(int i = 0; i < a.size(); i++){
            if(a[i] == ' '){
                vs.push_back(aux);
                aux.clear();
                continue;
            }else{
                aux.push_back(a[i]);
            }
        }
        vs.push_back(aux);

        while(cin >> aux and aux != "what"){
            cin >> ani >> ani;
            for(int i = 0; i < vs.size(); i++){
                if(vs[i] == ani){
                    vs[i] = "000";
                }
            }
        }
        for(int i = 0; i < vs.size(); i++){
            if(vs[i] !=  "000"){
                cout << vs[i];
                if(i != vs.size() -1)
                    cout << ' ';
            }
        }
        cout << en;
 	}
return 0;
}

/**
2
toot woof wa ow ow ow pa blub blub pa toot pa blub pa pa ow pow toot
dog goes woof
fish goes blub
elephant goes toot
seal goes ow
what does the fox say?
toot woof wa ow ow ow pa blub blub pa toot pa blub pa pa ow pow toot
dog goes woof
fish goes blub
elephant goes toot
seal goes ow
what does the fox say?
*/


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
    cin >> t;

    while(t--){
        getline(cin, a);
        getline(cin, a); z = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == 'Z' or a[i] == 'z'){
                z++;
                if(z == 3){
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