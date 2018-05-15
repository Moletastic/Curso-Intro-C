#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int primer_digito(int n){

    int cantidad = 0, aux = n, primer_d;

    while(aux>0){
        aux = aux / 10;
        cantidad++;
    }

    primer_d = n/pow(10,cantidad-1); 

    return primer_d;

}

int main(){
    
    printf("%d",primer_digito(3451));

    return 0;
}