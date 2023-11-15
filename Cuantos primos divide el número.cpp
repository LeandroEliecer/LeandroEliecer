#include <iostream>
using namespace std;

const int MAX =1000;
bool primos[MAX+1];

//Algoritmo Criba de Eratóstenes:
void iniciar_criba(){
    for(int i=0;i<=MAX;i++) //asignar inicialmente todos los numeros
    primos[i]=true; //como primos
    primos[0]=primos[1]=false; //excepto el 0 y el 1
        for(int i=2;i<=MAX;i++){ //empezar desde el 2
            if(primos[i]){ //verificar que no halla sido marcado
                for(int j=i+i;j<=MAX;j=j+i){
                    primos [j]= false;//marcar los multiplos
                }
            }
        }
 }

 int main(){
    iniciar_criba();
    int arreglo[168],cont=0,t,conta=0;
    scanf("%d",&t);
    int casos[t];

    for(int i=0;i<t;i++){
        scanf("%d",&casos[i]);
    }

   for(int a=2;a<1000;a++){
        if(primos [a]==1){
            arreglo[cont]=a;
            cont++;
        }
   }

   for(int i=0;i<t;i++){
        for(int r=0;r<cont;r++){
            if(casos[i]%arreglo[r]==0){
                conta++;
            }
            if(arreglo[r]>casos[i]){break;}
        }
        printf("%d\n",conta);
        conta=0;
    }

 return 0;
}
