#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int a,b,c, medio;

    printf("Ingrese valor de a: ");
    scanf("%d",&a);
    printf("Ingrese valor de b: ");
    scanf("%d",&b);
    printf("Ingrese valor de c: ");
    scanf("%d",&c);

    if((b<a && a<c) || (b<a && a<c)){
        medio = a;
    }

    else if((a<b && b<c) || (c<b && b<a)){
        medio = b;
    }

    else if((a<c && c<b) || (b<c && c<a)){
        medio = c;
    }
    else{
        medio = a; //Se infiere que 2 numeros son iguales, por ende toma un valor por defecto
    }

    printf("El numero intermedio es %d",medio);

    return 0;
}