#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int a,b,c;

    printf("Ingrese valor de a: ");
    scanf("%d",&a);
    printf("Ingrese valor de b: ");
    scanf("%d",&b);
    printf("Ingrese valor de c: ");
    scanf("%d",&c);

    if(a%3==0 && a%5==0 && b%3==0 && b%5==0 && c%3==0 && c%5==0){
       printf("Todos son divisibles por 3 y 5"); 
    }
    else{
        printf("Alguno de los numeros no cumple los requisitos");
    }

    return 0;
}