#include <stdlib.h>
#include <stdio.h>

int countPrimos(int a, int b){

    int n = a;
    int primos = 0;
    int divisores = 0;
    int divisor;
    while(b>=n){
        divisor = 1;
        while(n>=divisor){
            if(n%divisor==0){
                divisores++;
            }
            divisor++;
        }
        if(divisores<=2){
            primos++;
        }
        divisores = 0;
        divisor = 1;
        n++;
    }
    return primos;
}

int main(){

    printf("En el intervalo [%d,%d] hay %d numeros primos",10,38,countPrimos(10,38));

    return 0;
}