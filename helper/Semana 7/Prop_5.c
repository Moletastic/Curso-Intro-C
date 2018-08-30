#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

    float grados, radianes;
    printf("Ingresar radianes : ");
    scanf("%f",&radianes);

    // Usando la constante M_PI de la libreria math.h
    //grados = (radianes*180)/(M_PI);

    // Usando pi = 3.1416
    grados = (radianes*180)/(3.1416);
    
    printf("%f",grados);

    return 0;
}