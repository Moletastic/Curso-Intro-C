#include <stdlib.h>
#include <stdio.h>

/*
    Realizar la funcion FizzBuzz(int n) que recibe como parametro
    un numero entero n, que imprime por pantalla "Fizz" si el numero es 
    divisible por 3, "Buzz" si el numero es divisible por 5, "FizzBuzz" si 
    es divisible por 3 y por 5, o imprime el mismo numero en otro caso

*/

void FizzBuzz(int n){
    if(n%3==0){
        if(n%5==0){
            printf("FizzBuzz");
        }
        else{
            printf("Fizz");
        }
    }
    else{
        if(n%5==0){
            printf("Buzz");
        }
        else{
            printf("%d",n);
        }
    }
}

/*
    Realizar la funcion decimal(float a, float b) que recibe como parametro 2 numeros
    que pueden tener decimales, y retorna la parte decimal de la division entre a y b
*/

float decimal(float a, float b){
    float exacto = a/b;
    int aprox = a/b;
    return exacto - aprox;
}


/*
    Realizar un programa que pida por pantalla 2 coordenadas x,y para el plano cartesiano,
    luego ingresar un punto mediante otra coordenada,imprimiendose por pantalla 
    su ubicacion respecto a la pendiente que generan las primeras 2 coordenadas

*/

void punto_en_pendiente(){
    int x1,y1,x2,y2;
    int x3,y3;
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
}



void consulta(char a, char b, int x, int y){
    
    if(x==0 && y==0){
        printf("Ambas mascotas no tienen nada ");
    }

    else if(x==1 && y==1){
        printf("Ambas mascotas necesitan atencion ");
    }

    else{
        if(a!=b){
            if(x==1){
                if(a=='g'){
                    printf("Solo el gato necesita atencion");
                }
                else{
                    printf("Solo el perro necesita atencion");
                }       
            }

            else{
                if(b=='g'){
                    printf("Solo el gato necesita atencion");
                }
                else{
                    printf("Solo el perro necesita atencion");
                }
            }
        }

        else{
            if(x==1){
                if(a=='g'){
                    printf("Solo un gato necesita atencion");
                }
                else{
                    printf("Solo un perro necesita atencion");
                }       
            }

            else{
                if(b=='g'){
                    printf("Solo un gato necesita atencion");
                }
                else{
                    printf("Solo un perro necesita atencion");
                }
            }
        }
    }
}

float resto(int a, int b){
    float c = a/b;
    c = c*b;
    return a-c;
}

int main(){
    
    printf("%.2f",decimal(15.5,8.2));

    return 0;
}