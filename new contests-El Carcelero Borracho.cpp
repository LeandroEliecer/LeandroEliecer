//El Carcelero Borracho
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, n, a, cont = 0;
    cin >> t;

    while(t--){
        a = 1;
        cin >> n;
        bool solve[n];
        for(int i = 0; i <= n; i++){solve[i] = false;}
        while(a <= n){
            for(int i = a; i <= n; i += a){
                if(solve[i] == false){solve[i] = true;}
                else {solve[i] = false;}
            }
            a++;
        }
        for(int i = 1; i <= n; i++){
            if(solve[i] == true){cont++;}
        }
        cout << cont << '\n'; cont = 0;
    }

return 0;
}

/*int main(){
    int t, cont = 0;
    cin >> t;
    int n[t];

    for(int i = 0; i < t; i++){
        cin >> n[i];
    }

    for(int i = 0; i < t; i++){
        cont = 0;
        bool ar[ n[i] ];

        //first round:
        for(int j = 0; j < n[i]; j++){
            ar[j] = true;
        }

        //second round:
        for(int a = 1; a <= n[i]; a += 2){
            if(ar[a] == false){
                ar[a] = true;
            }
            else {
                ar[a] = false;
            }
        }

        //third round:
        for(int e = 2; e < n[i]; e += 3){
            if(ar[e] == false){
                ar[e] = true;
            }
            else{
                ar[e] = false;
            }
        }

        for(int q = 0; q <= n[i]; q++){
            if(ar[q] == true){
                cont++;
            }
        }
        cout << cont << endl;
    }

return 0;
}*/
