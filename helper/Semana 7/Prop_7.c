#include <stdlib.h>
#include <stdio.h>

int main(){

    int n_notas = 0;
    float nota, promedio = 0.0;
    float porcentaje;
    float acumulador_porcentual = 0.0;
    printf("Ingresar cantidad de notas: ");
    scanf("%d",&n_notas);

    int i = 1;

    while(i<=n_notas){
        printf("Ingresar nota [%d]: ",i);
        scanf("%f",&nota);
        
        do{
            printf("Ingresar porcentaje de valoracion para la nota [%d]: ",i);
            scanf("%f",&porcentaje);
        }while(porcentaje + acumulador_porcentual > 100.0);


        acumulador_porcentual += porcentaje;
        promedio += nota*porcentaje/100.0;
        i++;
    }

    printf("Promedio final : %.2f\n",promedio);

    if(promedio>=4.0){
        printf("Aprobado");
    }
    else{
        if(promedio>=3.5){
            printf("Va a examen");
        }
        else{
            printf("Reprobado");
        }
    }

    return 0;
}