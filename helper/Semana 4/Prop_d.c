#include <stdlib.h>
#include <stdio.h>

void es_primo(int n){
    int aux = 1, cont = 0;

    while(aux<=n){
        if(n%aux==0){
            cont++;
        }

        aux++;
    }

    if(cont>2){
        printf("%d no es un numero primo",n);
    }
    else{
        printf("%d es un numero primo",n);
    }

}

int main(){

    int n;
    printf("Ingresar un numero: ");
    scanf("%d",&n);    
    es_primo(n);
    return 0;
}