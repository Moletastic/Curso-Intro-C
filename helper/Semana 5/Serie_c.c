#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int n, termino_a = 2, termino_b = -3, aux = 1;
    printf("Ingresar cantidad de terminos: ");
    scanf("%d",&n);
    while(n>0){
        if(aux%2==0){
            printf("[%d] ",termino_b);
            termino_b = termino_b - 3;
        }
        else{
            printf("[%d] ", termino_a);
            termino_a = termino_a + 2;
        }
        aux++;
        n--;

    }

    return 0;
}
