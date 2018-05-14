#include <stdlib.h>
#include <stdio.h>

int sumar_divisores(int n){
    int aux = 1, sum = 0;
    while(aux<=n){

        if(n%aux==0){
            sum += aux;
        }

        aux++;
        
    }

    return sum;
}

int main(){
    
    int n, sum;
    printf("Ingresar numero: ");
    scanf("%d",&n);
    sum = sumar_divisores(n);
    printf("La suma de los divisores de %d es %d",n,sum);

    return 0;
}