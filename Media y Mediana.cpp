//Media y Mediana
#include <iostream>
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define en '\n'
using namespace std;
typedef long long ll;

/*int countSetbits(int n){
    int cont = 0;
    while(n){
        n = n & (n-1);
        cont++;
    }
    return cont;
}*/

/*bool is_set(int n, int x){
    return (n >> x)& 1;
}*/

int main(){
    optimize
    /*ll a, b, r = 0;
	do{
        cin >> a >> b;
        if(a == 0 and b == 0){break;}
        r = b - a ;
         cout << a - r << en;
	}while(a != 0 and b != 0);*/

    int a;
    cin >> a;
    a = a & (a-1);

    cout << a;
}
