#include <stdlib.h>
#include <stdio.h>

int es_primo(int n){
    int aux = 1, cont = 0;

    while(aux<=n){
        if(n%aux==0){
            cont++;
        }

        aux++;
    }

    if(cont>2){
        return 0;
    }
    else{
        return 1;
    }

}

int main(){

    int a,b, aux, cont = 0;
    printf("Ingresar intervalo inferior: ");
    scanf("%d",&a);
    printf("Ingresar intervalo superior: ");
    scanf("%d",&b);    
    aux = a;
    while(aux<b){
        cont += es_primo(aux);
        aux++;
    }
    printf("En el intervalo [%d,%d] hay %d numeros primos",a,b,cont);


    return 0;
}