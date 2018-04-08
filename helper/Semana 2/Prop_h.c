#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int horas;
    printf("Ingresar cantidad de horas en la PC: ");
    scanf("%d",&horas);

    if(horas>=6){
        printf("El adolescente es un Adicto!");
    }

    else if(horas<6 && horas>=3){
        printf("El adolescente es un Fanatico!");
    }

    else if(horas<3){
        printf("El adolescente es Prudente");
    }

    else{
        printf("Fuera de rango");
    }

    return 0;
}