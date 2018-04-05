#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int n;

    printf("Ingresar valor del numero: ");
    scanf("%d",&n);

    printf("El doble y triple de %d, es %d y %d respectivamente",n,n*2,n*3);
    printf("%d",(void*)&n);
    return 0;
}