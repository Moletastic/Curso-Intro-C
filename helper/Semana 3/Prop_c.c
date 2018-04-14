#include <stdlib.h>
#include <stdio.h>


int invertir_extremos(int n){

    int primero = n/1000;
    int ultimo = n%10;
    
    n = n - ultimo;
    n = n - primero*1000;

    n = n + primero;
    n = n + ultimo*1000;

    return n;

}

int main(){
    
    int numero;

    printf("Ingresar numero de 4 digitos: ");
    scanf("%d",&numero);

    printf("El numero invertido es: %d",invertir_extremos(numero));

    return 0;
}