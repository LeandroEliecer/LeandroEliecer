//Fardos de Heno
//#include<bits/stdc++.h>
#include<iostream>//Quit
#include<algorithm>//Quit
#define ll long long
#define ud unsigned
using namespace std;

int main(){
	ud ll n, medio = 0, cont = 0;
	cin >> n;
	ud ll p[n];

	for(int i = 0; i < n; i++){
		cin >> p[i];
		medio += p[i];
	}
	medio /= n;
    sort(p, p + n);

    for(int i = 0; i < n; i++){
        for(int j = n - 1; j >= 0; j--){
            if (i < j){
                if (p[i] == medio and p[j] == medio){break; }
                else if (p[i] < medio and p[j] > medio){
                    while (p[j] > medio){
                        if (p[i] == medio){break; }
                        p[i]++;
                        p[j]--;
                        cont++;
                    }
                }
                else if(p[i] == medio){break; }
                else if(p[j] == medio){continue; }
            }
            else{
                cout << cont;
                return 0;
            }
        }
    }

	cout << cont;
	return 0;
}
