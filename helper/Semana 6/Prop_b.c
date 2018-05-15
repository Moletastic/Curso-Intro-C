#include <stdlib.h>
#include <stdio.h>

void n_primos(int n){

    int numero = 2, aux,aux2, cantidad = 0;

    while(n>0){
        aux = numero;
        aux2 = aux;
        while(aux2>0){
            if(aux%aux2==0){
                cantidad++;
            }
            aux2--;
        }
        
        if(cantidad<3){
            printf("[%d] ",numero);
            n--;
        }
        cantidad = 0;
        numero++;
    }

}

int main(){
    
    n_primos(15);

    return 0;
}