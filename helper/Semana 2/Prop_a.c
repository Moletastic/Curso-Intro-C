#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int a,b,c, mayor;

    printf("Ingrese valor de a: ");
    scanf("%d",&a);
    printf("Ingrese valor de b: ");
    scanf("%d",&b);
    printf("Ingrese valor de c: ");
    scanf("%d",&c);

    if(a<=b){

        if(b<=c){
            mayor = c;
        }

        else{
            mayor = b;
        }

    }
    else{
        if(a<=c){
            mayor = c;
        }
        else{
            mayor = a;
        }
    }

    printf("El numero mas grande es %d",mayor);

    return 0;
}