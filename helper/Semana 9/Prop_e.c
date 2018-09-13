#include <stdlib.h>
#include <stdio.h>

void showFilas(int n){
    int aux;
    while(n>0){
        aux = n;
        while(aux>0){
            printf("%d",aux);
            aux--;
        }
        printf("\n");
        n--;
    }
}

int main(){

    showFilas(6);

    return 0;
}