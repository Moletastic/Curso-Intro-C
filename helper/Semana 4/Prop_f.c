#include <stdlib.h>
#include <stdio.h>

void son_primos_relativos(int a, int b){

    int mayor,menor,aux = 1, cont = 0;
    
    if(a<=b){
        mayor = b;
        menor = a;
    }

    else{
        mayor = a;
        menor = b;
    }

    while(aux<menor){
        if(mayor%aux==0 && menor%aux==0){
            cont++;
        }
        aux++;
    }

    if(cont>1){
        printf("%d y %d no son primos relativos",a,b);       
    }
    else{
        printf("%d y %d son primos relativos",a,b);
    }


}

int main(){
    
    int a,b;
    printf("Ingresar primer numero: ");
    scanf("%d",&a);
    printf("Ingresar segundo numero: ");
    scanf("%d",&b);
    son_primos_relativos(a,b);

    return 0;
}