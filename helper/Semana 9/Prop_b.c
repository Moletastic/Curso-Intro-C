#include <stdlib.h>
#include <stdio.h>

int Fibonacci(int n){

    int res, aux = 2, previo= 1;
    int numero;
    if(n==1){
        numero = 1;
    }

    if(n==2){
        numero = 1;
    }

    if(n==3){
        numero = 2;
    }

    while(n>=4){
        res = aux + previo;
        previo = aux;
        aux = res;
        n--;
        numero = res;
    }
    return numero;

}

int main(){

    printf("El %d termino es %d",7,Fibonacci(7));

    return 0;
}