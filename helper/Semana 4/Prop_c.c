#include <stdlib.h>
#include <stdio.h>

void es_perfecto(int n){
    int aux = 1, sum = 0;
    
    while(aux<n){
        if(n%aux==0){
            sum += aux;
        }
        aux++;
    }

    if(sum==n){
        printf("%d es un numero perfecto",n);
    }
    else{
        printf("%d no es un numero perfecto",n);
    }
}

int main(){
    
    int n;
    printf("Ingresar numero: ");
    scanf("%d",&n);
    es_perfecto(n);

    return 0;
}