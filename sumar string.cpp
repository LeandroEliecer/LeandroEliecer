//Pepe y los palillos
#include <bits/stdc++.h>
#define en '\n'
using namespace std;

string suma(string num1, string num2) {
    if (num1.length() > num2.length()){
        swap(num1, num2);
    }

    string resultado = "";
    int n1 = num1.length(), n2 = num2.length();
    int diferencia = n2 - n1;
    int sobra = 0;

    for (int i = n1-1; i >= 0; i--){
        int suma = ((num1[i]-'0') + (num2[i + diferencia] - '0') + sobra);
        resultado.push_back(suma%10 + '0');
        sobra = suma/10;
    }

    for (int i = n2-n1-1; i >= 0; i--){
        int suma = ((num2[i]-'0') + sobra);
        resultado.push_back(suma%10 + '0');
        sobra = suma/10;
    }

    if (sobra){
        resultado.push_back(sobra + '0');
    }
    reverse(resultado.begin(), resultado.end());

    return resultado;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    string num1, num2;

    cin >> num1;
    cin >> num2;

    cout << suma(num1, num2) << en;
    return 0;
}
