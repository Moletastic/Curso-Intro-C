#include <stdlib.h>
#include <stdio.h>

int extremo_izquierdo(int n){

    return n/1000;

}

int main(){
    
    int numero;

    printf("Ingresar numero de 4 digitos: ");
    scanf("%d",&numero);

    printf("El numero invertido es: %d",extremo_izquierdo(numero));

    return 0;
}