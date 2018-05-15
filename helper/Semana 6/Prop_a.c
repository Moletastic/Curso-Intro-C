#include <stdlib.h>
#include <stdio.h>

void Fibonacci(int n){

    int res, aux = 2, previo= 1;

    if(n>0){
        printf("[1] ");
    }

    if(n>1){
        printf("[1] ");
    }

    if(n>2){
        printf("[2] ");
    }

    while(n>3){
        res = aux + previo;
        printf("[%d] ",res);
        previo = aux;
        aux = res;
        n--;
    }

}

int main(){
    
    int n;
    printf("Ingresar cantidad de terminos: ");
    scanf("%d",&n);
    Fibonacci(n);

    return 0;
}