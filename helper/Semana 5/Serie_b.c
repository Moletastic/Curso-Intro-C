#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int n, termino = 5;
    printf("Ingresar cantidad de terminos: ");
    scanf("%d",&n);
    while(n>0){
        printf("[%d] ",termino);
        termino = termino*10 + 5;
        n--;

    }

    return 0;
}
