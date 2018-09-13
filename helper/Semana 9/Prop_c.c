#include <stdlib.h>
#include <stdio.h>

int sumaFib(int n){
    
    int res, aux = 2, previo= 1;
    int suma = 0;
    if(n>0){
        suma += 1;
    }

    if(n>1){
        suma += 1;
    }

    if(n>2){
        suma += 2;
    }

    while(n>3){
        res = aux + previo;
        previo = aux;
        aux = res;
        n--;
        suma += res;
    }
    return suma;

}

int main(){

    printf("La suma de los %d primeros terminos es : %d",5,sumaFib(5));

    return 0;
}