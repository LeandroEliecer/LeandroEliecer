//Enchufes Eléctricos
#include<iostream>
using namespace std;

int main(){
    int n, a, o, suma = 0;
    cin >> n;
    int solve[n];

    for(int i = 0;i < n; i++){
        cin >> a;
        for(int j = 0; j < a; j++){
            cin >> o;
            suma += o;
        }
        solve[i] = suma + 1 - a;
        suma = 0;
    }
    for(int i = 0; i < n; i++){
        cout << solve[i] << endl;
    }
return 0;
}
