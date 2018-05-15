#include <stdlib.h>
#include <stdio.h>

int suma_impares(int n){
    int suma = 0, aux;

    while(n>0){
        aux = n%10;
        
        if(aux%2!=0){
            suma+=aux;
        }

        n = n/10;

    }

    return suma;

}

int main(){

    printf("%d",suma_impares(12545));
    

    return 0;
}