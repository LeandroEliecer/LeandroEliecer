//Festival de Lectura de las Pulgas
#include<bits/stdc++.h>
using namespace std;
long long M,B,T;
int main(){
	char palabra[10000];
	cin.getline(palabra,10000,'\n');
	T=strlen(palabra);
	for(int i=0;i<T;i++){
		if(palabra[i] =='A'){
			M++;	
		}
		else if(palabra[i]=='E'){
			M++;
		}
		else if(palabra[i]=='I'){
			M++;
		}
		else if(palabra[i]=='O'){
			M++;
		}
		else if(palabra[i]=='U'){
			M++;
		}
		else{
			B++;
		}
	}
	printf("%lld %lld ",M,B);
}
