//El salto del caballo
#include<iostream>
using namespace std;

bool f(int x1, int y1, int x2, int y2){
    if(x1 > 8 or x1 < 1){
        return 0;
    }
    else if(y1 >= y2 and x1 != x2){
       return 0;
    }
    else if(y1 == y2 and x1 == x2){
        return 1;
    }

    if(f(x1 + 1, y1 + 2, x2, y2) == 1) return 1;
    if(f(x1 + 2, y1 + 1, x2, y2) == 1) return 1;
    if(f(x1 - 1, y1 + 2, x2, y2) == 1) return 1;
    if(f(x1 - 2, y1 + 1, x2, y2) == 1) return 1;

return 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    string s = "yes", n = "no";

    if(f(x1, y1, x2, y2) == true)
        cout << s;
    else
        cout << n;

return 0;
}
