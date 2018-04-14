#include <stdlib.h>
#include <stdio.h>

int analisis(int a, int b){
    int primero_a = a/100;
    int primero_b = b/100;

    if(primero_a%2!=0 && primero_b%2!=0){
        return primero_a + primero_b;
    }

    else if(primero_a%2==0 && primero_b%2==0){
        return primero_a * primero_b;
    }

    else{
        if(primero_a>=primero_b){
            return primero_a;
        }
        else{
            return primero_b;
        }
    }

}


int main(){

    int n1,n2;

    printf("Ingresar numero de 3 digitos: ");
    scanf("%d",&n1);
    printf("Ingresar otro numero de 3 digitos: ");
    scanf("%d",&n2);

    printf("La funcion analisis retorna: %d",analisis(n1,n2));

    return 0;
}