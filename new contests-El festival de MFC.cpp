//El festival de MFC
#include<iostream>
using namespace std;
/*
11 2
2 3 3 2 4 3 4 1 2 3 2
*/
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, k, menor, cont = 0, solve = 0;
	bool f = false;
	cin >> n >> k;
	int s[n];

	for(int i = 0; i < n; i++){
		cin >> s[i];
        if(s[i] == k and s[i-1] == k){f = true;}
        if(s[i] == k){cont++;}
	}
	if(f == true){
        cout << 0; return 0;
	}
	if(cont == 1){
        cout << -1; return 0;
	}
	else{
	    cont = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == k){
                if(solve == 0 and cont > 0){solve = cont; }
                else{ if(cont > 0){solve = min(solve, cont);} }
                cont = 0;
            }
            else{cont++; }
        }

	}
    cout << solve;
return 0;
}
