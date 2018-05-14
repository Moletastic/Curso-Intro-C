#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int n, aux = 1, termino = 1;
    printf("Ingresar cantidad de terminos: ");
    scanf("%d",&n);
    while(n>0){
        printf("[%d] ",termino);
        aux++;
        termino = termino*10 + aux;
        n--; 
    }

    return 0;
}