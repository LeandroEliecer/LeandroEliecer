//Tarea del Aula -ac
#pragma GCC optimize("Ofast")

#include<iostream>
#include<algorithm>
#define optimize_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define en '\n'
using namespace std;

void suma(string a, string b){
    int ta = a.size(), tb = b.size(), dif;
    if(ta < tb){
        dif = tb - ta;
        reverse(a.begin(),a.end());
        while(dif--){
            a.pb('0');
        }
        reverse(a.begin(),a.end());
    }else{
        dif = ta - tb;
        reverse(b.begin(),b.end());
        while(dif--){
            b.pb('0');
        }
        reverse(b.begin(),b.end());
    }

    for(int i = 0; i < ta; i++){
        if(a[i] == '0' and b[i] == '0'){ a[i] = '0'; }
        else if(a[i] == '1' and b[i] == '1'){ a[i] = '2'; }
        else{ a[i] = '1'; }
    }
cout << a;
}

void mult(string a, string b){
    int tb = b.size();
    tb--;
    while(tb--){
        a.pb('0');
    }
cout << a;
}

int main(){
    optimize_io
    char c;
    string a, b;
    cin >> a >> c >> b;

    if(c == '+'){
        suma(a, b);
    }
    else{
        mult(a, b);
    }

return 0;
}
