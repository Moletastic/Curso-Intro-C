#include <stdlib.h>
#include <stdio.h>


int contar_divisores(int n){
    int aux = 1, cont = 0;
    while(aux<=n){

        if(n%aux==0){
            cont++;
        }
        aux++;
    }
    return cont;
}

int main(){
    
    int n, cont;
    printf("Ingresar numero: ");
    scanf("%d",&n);
    cont = contar_divisores(n);
    
    printf("%d tiene %d divisores",n,cont);

    return 0;
}