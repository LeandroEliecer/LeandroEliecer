//Árbol de palabras
#include<iostream>
#include<algorithm>
#include<vector>
#define mp make_pair
#define pb push_back
using namespace std;

vector<int> parents;
int dsu_find(int v){
    if(v == 0) return v;
    else return parents[v] = dsu_find(parents[v]);
}

bool dsu_union(int a, int b){
    a = dsu_find(a); b = dsu_find(b);
    if(a != b){
        parents[a] = b;
        return true;
    }
    return false;
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, k, sol;
	cin >> n >> k;
	string a, n1, n2;
	vector<string> s;

	vector< pair <int, pair<string, string> > > g;
	for(int i = 0; i < n; i++){
		cin >> a;
		s.pb(a);
	}

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int f = 0; f < k; f++){
                n1 = s[i]; n2 = s[j];
                sol += (int) (n1[f] - n2[f]) - '0';
            }
            g.pb(mp(sol,mp(n1,n2))); sol = 0;
        }
    }


return 0;
}
