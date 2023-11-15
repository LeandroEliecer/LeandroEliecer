//Sasha y la merienda
#include<stdio.h>

int max(int a, int b){
    return a > b ? a : b;
}

int main(){
    int n, c, e = 0, cont = 0, me = -1e5;
    scanf("%d %d",&n,&c);
    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if((e + a[j]) == c){cont++; break;}
            else if((a[j] + e) < c){e += a[j]; cont++;}
            else if((a[j] + e) > c){continue;}
        }
        me = max(me, cont);
        cont = e = 0;
    }

    printf("%d",me);
return 0;
}
