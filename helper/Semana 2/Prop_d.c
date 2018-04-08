#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    
    int a,b,c;
    float discriminante;

    printf("Ingrese valor de a: ");
    scanf("%d",&a);
    printf("Ingrese valor de b: ");
    scanf("%d",&b);
    printf("Ingrese valor de c: ");
    scanf("%d",&c);

    discriminante = (b*b) - (4*a*c);

    if(discriminante < 0){
       printf("Existen 2 soluciones complejas");
    }

    else if(discriminante > 0){
        printf("Existen 2 soluciones");

    }

    else{
        printf("Existe una unica solucion");
    }

    return 0;
}