//Breed Counting
#include<iostream>
using namespace std;

const int maxn = 1e5+1;
int a[maxn][3];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, q, l, r, s, n1 = 0, n2 = 0, n3 = 0;
    cin >> n >> q;

    for(int i = 1; i <= n; i++){
        cin >> s;
        if(s == 1) n1++;
        if(s == 2) n2++;
        if(s == 3) n3++;
        a[i][0] = n1; a[i][1] = n2; a[i][2] = n3;
    }

    while(q--){
        cin >> l >> r;

        if(l == 1){
            cout << a[r][0] << " " << a[r][1] << " " << a[r][2] << '\n';
        }
        else{
            n1 = a[r][0] - a[l-1][0]; n2 = a[r][1] - a[l-1][1]; n3 = a[r][2] - a[l-1][2];
            cout << n1 << " " << n2 << " " << n3 << '\n';
        }
    }

return 0;
}
