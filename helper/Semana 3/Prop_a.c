#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int a,b,c,d,e, suma=0;

    printf("Ingrese valor de a: ");
    scanf("%d",&a);
    printf("Ingrese valor de b: ");
    scanf("%d",&b);
    printf("Ingrese valor de c: ");
    scanf("%d",&c);
    printf("Ingrese valor de d: ");
    scanf("%d",&d);
    printf("Ingrese valor de e: ");
    scanf("%d",&e);

    if(a%2!=0){
        suma+= a;
    }

    if(b%2!=0){
        suma+= b;
    }
    
    if(c%2!=0){
        suma+= c;
    }

    if(d%2!=0){
        suma+= d;
    }

    if(e%2!=0){
        suma+= e;
    }

    printf("La suma de impares es %d", suma);
    
    return 0;
}