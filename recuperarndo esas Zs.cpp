#include<iostream>
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define en '\n'
using namespace std;

int main(){
    optimize
    int t, z = 0;
    string a,sol = "Perry saves the day!", solve = "Time to take a nap.";
    cin >> t;
    cin.ignore();

	while(t--){
        getline(cin,a); z = 0;
		for(int i = 0; i < a.size(); i++){
            if(a[i] == 'Z' or a[i] == 'z'){
                z++;
                if(z == 3) break;
            }
		}

		if(z >= 3){
			cout << solve << en;
		}else{
			cout << sol << en;
		}
		a.clear();
    	z = 0;
	}

return 0;
}
