#include <stdlib.h>
#include <stdio.h>

int main(){

    int n;
    float numero;
    int positivos = 0, negativos = 0;
    float promedio_positivo = 0.0, promedio_negativo = 0.0;

    printf("Ingresar cantidad de numeros: ");
    scanf("%d",&n);

    int i = 1;
    while(i<=n){
        printf("Ingresar numero [%d]: ",i);
        scanf("%f",&numero);
        
        if(numero<0.0){
            negativos++;
            promedio_negativo += numero;
        } else{
            positivos++;
            promedio_positivo += numero;
        }

        i++;
    }

    if(negativos != 0){
        promedio_negativo = promedio_negativo/negativos;
    }

    if(positivos != 0){
        promedio_positivo = promedio_positivo/positivos;
    }

    printf("El promedio de los %d numeros positivos es : %.2f",positivos,promedio_positivo);
    printf("\nEl promedio de los %d numeros negativos es : %.2f",negativos,promedio_negativo);

    return 0;
}