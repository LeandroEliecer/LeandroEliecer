//Nota Musical
#include<iostream>
using namespace std;

int main(){
	int n, q, sum = 0, a = 0, r;
	cin >> n >> q;

	int b[n], p[q];

	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	for(int i = 0; i < q; i++){
		cin >> p[i];
	}
    for(int i = 0; i < q; i++){
        for(int j = 0; j < n; j++){
            sum += b[j]; a++;

            for(int k = 0; k <= sum - 1; k++){
                if(p[i] == k){r = k; cout << a <<" "; break; }
            }
            if(p[i] == r){break; }
        }
        sum = 0;
        a = 0;
    }

return 0;
}
