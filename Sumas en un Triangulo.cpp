//Sumas en un Triángulo
#include<iostream>
using namespace std;

const int maxn = 1050;
int a[maxn][maxn];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, sol = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cin >> a[i][j];
        }
    }

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            a[i-1][j] += max(a[i][j],a[i][j+1]);
        }
    }
    cout << a[1][1];

return 0;
}
