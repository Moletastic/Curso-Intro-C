#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int n, termino = 1, aux = 2, acumulador = 10; // acumulador = 1 - 10  100 - 1000
    printf("Ingresar cantidad de terminos: ");
    scanf("%d",&n);
    while(n>0){
        printf("[%d] ",termino);
        termino = aux*acumulador + termino;
        acumulador = acumulador * 10;
        aux++;
        n--;

    }

    return 0;
}