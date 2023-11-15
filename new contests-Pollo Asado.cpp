//Pollo Asado
#include<iostream>
#define en '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, x;
    bool pass = false;
    cin >> t;

    while(t--){
        cin >> x;
        if(x % 3 == 0 or x % 7 == 0 and x > 5 ){cout << "YES" << en; continue;}
        else {
            if(x > 5 and x != 3){
                for(int i= 3; i <= 100; i += 3){
                    for(int j = 7; j <= 100;j += 7){
                        if(i + j == x){cout << "YES" << en; pass = true; break;}
                    }
                    if(pass == true){break;}
                }
            }
            if(pass == false){cout << "NO" << en;}
            pass = false;
        }
    }
return 0;
}
