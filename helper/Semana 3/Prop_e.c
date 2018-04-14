#include <stdlib.h>
#include <stdio.h>

int funcion(int n){

    int primero = n/10000;

    if(primero%2==0){
        return n*2;
    }

    else if(primero%3==0){
        return n*3;
    }

    else{
        return primero;
    }

}

/*

// Como 6 cuenta con las 2 primeras condiciones, como alternativa podemos retornar el triple

int funcion_2(int n){

    int primero = n/10000;

    if(primero%2==0){

        if(primero%3==0){
            return n*3;
        }

        else{
            return n*2;
        }

    }

    else{
        return primero;
    }

}

*/

int main(){
    
    int numero;

    printf("Ingresar numero de 5 digitos: ");
    scanf("%d",&numero);

    printf("La funcion retorna: %d",funcion(numero));

    return 0;
}