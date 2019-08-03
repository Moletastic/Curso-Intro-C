#include <stdlib.h>
#include <stdio.h>

int MCM(int a, int b, int c){
    int n = a;
    int mcm = 1;
    while(n>0){
        if(a%n==0 && b&n==0 && c&n==0){
            mcm = n;
        }
        n--;
    }
    return mcm;
}

int main(){

    printf("El minimo comun multiplo de %d, %d y %d es %d",2,4,6,MCM(2,4,6));

    return 0;
}