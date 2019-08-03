#include <stdlib.h>
#include <stdio.h>

int MCD(int a, int b){

    int n = 1;
    int mcd = 1;
    while(a>=n){
        if(a%n==0 && b%n==0){
            mcd = n;
        }
        n++;
    }
    return mcd;
}

int main(){

    printf("El maximo comun divisor entre %d y %d es %d",32,8,MCD(32,8));
    return 0;
}