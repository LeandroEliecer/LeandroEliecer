//Interés Bancario
#include<bits/stdc++.h>
using namespace std;

int main(){
	long double R,M,Y;
	long long H;
	cin>>R>>M>>Y;	
	R=R+100;
	R=round(R);
	R=R/100;

	for(int i=0;i<Y;i++){
		M=M*R;
	}
	H=floor(M);
	cout<<H;
}
