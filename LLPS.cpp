//LLPS
#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    char m = 'a'; int n = s.size(), cont = 0;

    for(int i = 0; i < n; i++){
        m < (s[i]) ? m = (s[i]) : m = m;
    }

    for(int i = 0; i < n; i++){
        if(s[i] == m) {cont++;}
    }
    s.clear();

    while(cont--){
        s += (char) m;
    }
    cout << s;

return 0;
}
