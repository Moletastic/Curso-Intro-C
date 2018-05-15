#include <stdlib.h>
#include <stdio.h>

int promedio_pares(int n){

    int promedio = 0, cantidad = 0 ,aux;

    while(n>0){

        aux = n%10;
        
        if(aux%2==0){
            promedio+=aux;
            cantidad++;
        }

        n = n/10;

    }

    if(cantidad!=0){
        promedio = promedio / cantidad;
        return promedio;
    }

    return promedio;

}

int main(){
    
    printf("%d",promedio_pares(3456));

    return 0;
}