#include<iostream>
using namespace std;

int main(){
	int m, mod = 1e9+7;
	cin >> m;
	int dp[m][2];
	dp[0][0] = 1;
	dp[0][1] = 0;
	dp[1][0] = 0;
	dp[1][1] = 1;
	
	for(int i = 2; i <= m; i++){
		for(int j = 0; j <= 1; j++){
			if(j == 0){
				dp[i][j] = (dp[i-1][j+1] + dp[i-2][j+1]) % mod;
			}else{
				dp[i][j] = (dp[i-1][j-1] + dp[i-2][j-1]) % mod;
			}
		}
	}
	
	cout << dp[m][1];
return 0;
}
