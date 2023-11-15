//Bolos bovinos
#include <iostream>
using namespace std;

int main(){
    int n;
	cin >> n;
	int a[n+1][n+1];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            cin >> a[i][j];
    }

    for(int i = n; i > 1; i--){
        for(int j = i; j >= 1; j--){
            if(j == 1)
                a[i][j] += max(a[i+1][j],a[i+1][j+1]);
            else
                a[i][j] += max(a[i+1][j-1],a[i+1][j]);
        }
    }

    cout << a[2][1] << " " << a[1][1];
return 0;
}

/*
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5
*/



/*int main(){
    int n;
	cin >> n;
	int a[n+1][n+1], dp[n+1];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            cin >> a[i][j];
    }

    for(int i = 1; i <= n; i++){
        dp[i]= a[n][i];
    }

    for(int i = 1; i < n; i++){
        for(int j = 1; j < i-1; j++){
            dp[j] += max(a[i+1][j+1],a[i+1][j+2]);
        }
    }
    for(int i= 1; i <= n; i++){
        cout << dp[i] + (a[1][1]*2) <<" ";
    }
return 0;
}*/


/*int main(){
    int n;
	cin >> n;
	int a[n+1][n+1], dp[n+1];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            cin >> a[i][j];
    }

    for(int i = 1; i <= n; i++){
        dp[i]= a[n][i];
    }

    for(int i = n-1; i > 1; i--){
        for(int j = i; j >= 1; j--){
            if(j != 1){
                dp[j] = max(dp[j],dp[j-1]) + a[i+1][j-1];
            }
            else{
                dp[j] = max(dp[j],dp[j+1]) + a[i+1][j+1];
            }
        }
    }
    for(int i= 1; i <= n; i++){
        cout << dp[i] << " ";
    }

return 0;
}*/
