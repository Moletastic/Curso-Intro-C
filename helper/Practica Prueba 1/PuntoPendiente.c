#include <stdlib.h>
#include <stdio.h>

int main(){

    int x1,y1,x2,y2,x3,y3;
    printf("Ingresar x1: ");
    scanf("%d",&x1);
    printf("Ingresar y1: ");
    scanf("%d",&y1);
    printf("Ingresar x2: ");
    scanf("%d",&x2);
    printf("Ingresar y2: ");
    scanf("%d",&y2);

    printf("Ingresar abcisa del punto: ");
    scanf("%d",&x3);
    printf("Ingresar ordenada del punto: ");
    scanf("%d",&y3);

    

    if((x2-x1)!=0){
        int m = ((y2-y1)/(x2-x1));
        int y_aux = (m*x3) - (m*x1) +y1;

        if(y_aux == y3){
            printf("El punto pertenece a la recta\n");
        }
        else if(y_aux > y3){
            printf("El punto se encuentra debajo de la recta\n");
        }
        else{
            printf("El punto se encuentra encima de la recta\n");
        }

    }
    else{
        printf("Esta recta es totalmente vertical\n");

        /* Esto es un plus */
        if(x3==x2){
            printf("El punto pertenece a la recta\n");
        }
        else if(x3>x2){
            printf("El punto se encuentra a la derecha de la recta\n");
        }
        else{
            printf("El punto se encuentra a la izquierda de la recta\n");
        }
    }

    return 0;
}