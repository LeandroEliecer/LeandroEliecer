//Clasificando Palíndromos
#include<bits/stdc++.h>
#define en '\n'
using namespace std;

int main(){
    int n, tam;
    string a, cad1, cad2, aux1, aux2;

    cin >> n;
    int solve[n];

    for(int p = 0; p < n; p++){
        a.clear();
        cad1.clear(); cad2.clear();
        aux1.clear(); aux2.clear();

        cin >> a;
        tam = a.size();

        reverse(a.begin(), a.end());
        cad1 = a;
        reverse(a.begin(), a.end());

        if(a == cad1){
            solve[p] = 1; cad1.clear(); continue;
        }
        else{
            cad1.clear();
            for(int i = 0; i < tam; i++){
                cad1.push_back(a[i]);

                for(int j = i + 1; j < tam; j++){
                    cad2.push_back(a[j]);
                }

                reverse(cad1.begin(), cad1.end());
                reverse(cad2.begin(), cad2.end());
                aux1 = cad1;
                aux2 = cad2;
                reverse(cad1.begin(), cad1.end());
                reverse(cad2.begin(), cad2.end());

                if(cad1 == aux1 and cad2 == aux2){
                    solve[p] = 2; continue;
                }
                cad2.clear();
                aux1.clear();
                aux2.clear();
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(solve[i] == 1){
            cout << "palindrome" << en;
        }
        else if(solve[i] == 2){
            cout << "bi-palindrome" << en;
        }
        else{
            cout << "non-palindrome" << en;
        }
    }
return 0;
}
