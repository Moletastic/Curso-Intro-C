#include <stdlib.h>
#include <stdio.h>

int main(){
    
    float e,tiempo,g=9.81;

    printf("Ingresar tiempo (seg) en que el objeto tarde en caer: ");
    scanf("%f",&tiempo);
    e = (1.0/2.0)*g*tiempo*tiempo;
    printf("La altura desde la que cae es: %.2f metros",e);
    return 0;
}