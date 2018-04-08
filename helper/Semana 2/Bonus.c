#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    
    int a,b,c;
    float discriminante, x1,x2;

    float i; // Parte imaginaria de la solucion, si el discriminante < 0

    printf("Ingrese valor de a: ");
    scanf("%d",&a);
    printf("Ingrese valor de b: ");
    scanf("%d",&b);
    printf("Ingrese valor de c: ");
    scanf("%d",&c);

    discriminante = (b*b) - (4*a*c);

    /* Tambien podemos usar la funcion pow(base,exponente) que retorna una potencia
    
    discriminante = pow(b,2) - (4*a*c);
    */

    if(discriminante < 0){
        x1 = (-1*b)/(2*a);
        i = sqrt(discriminante*-1)/(2*a);
        printf("Solucion Compleja 1 : %.2f + %.2fi",x1,i);                     
        printf("\nSolucion Compleja 2 : %.2f - %.2fi",x1,i);
    }

    else if(discriminante > 0){
        x1 = ((-1*b) + sqrt(discriminante))/(2*a);
        x2 = ((-1*b) - sqrt(discriminante))/(2*a);
        printf("Solucion 1 : %.2f",x1);             //%.2f muestra 2 decimales de nuestra variable float
        printf("\nSolucion 2 : %.2f",x2);

    }

    else{
        x1 = (-1*b)/(2*a);
        printf("Solucion Unica : %.2f",x1);
    }

    return 0;
}