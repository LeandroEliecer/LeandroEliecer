//Cortes al tablero de ajedrez
#include<stdio.h>

int main(){
    int n,s=1,suma=0;
    scanf("%d",&n);

    for(int i=1;i<n;i++){
        if(i%2==0){
            suma+=s;
        }
        else{
            s+=1;
            suma+=s;
        }
    }
    printf("%d",suma+2);
}
