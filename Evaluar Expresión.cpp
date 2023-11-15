//Evaluar Expresión
#include <bits/stdc++.h>
using namespace std;

	int cont,longitud;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	char expresion[400];
	cin >> expresion;
	longitud = strlen(expresion);
	
		for(int i = 0; i < longitud; i++){
			if (expresion[i] == '+'){
				cont++;
			}
			else if(expresion[i]=='-'){
				cont--;
			}
		}
	printf("%d",cont/2);
}
