#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int a,b,c;

    printf("Ingrese valor de Lado a: ");
    scanf("%d",&a);
    printf("Ingrese valor de Lado b: ");
    scanf("%d",&b);
    printf("Ingrese valor de Lado c: ");
    scanf("%d",&c);

    if(c<(a+b) && a<(c+b) && b<(c+a)){
        printf("Las medidas indicadas generan un triangulo");
    }
    else{
        printf("Las medidas indicadas son invalidas");
    }

    return 0;
}