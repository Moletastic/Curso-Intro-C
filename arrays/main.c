#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

//  Despliega por pantalla el índice y valor de los elementos del array 
void showArray(int array[], int dimension){
    printf("\nshowArray()\n");
    int i;
    for(i = 0; i<dimension; i++){
        printf("[%d] -> %d\n",i,array[i]);
    }
}

//  Despliega por pantalla el índice y valor de los elementos pares del array 
void getPares(int array[], int dimension){
    printf("\ngetPares()\n");
    int i;
    for(i = 0; i<dimension; i++){
        if(array[i]%2==0){
            printf("\n[%d] -> %d",i,array[i]);
        }
    }
}


//  Obtiene el promedio de un array de notas(decimales) y retorna TRUE(1) si la nota es 
//  superior o igual a 4, caso contrario retorna FALSE(0)  
int checkPass(float notas[], int dimension){
    int i;
    float promedio = 0;
    for(i = 0;i<=dimension;i++){
        promedio += notas[i];
    }
    promedio = promedio / dimension;
    
    /* if(promedio>=4.0){
        return 1;
    }
    else{
        return 0;
    } */
    
    return (promedio>=4.0) ? TRUE : FALSE;
}

// Despliega el array de char en secuencia
void showNombre(char nombre[],int dimension){
    printf("\nshowNombre()\n");
    int i;
    for(i = 0; i<dimension; i++){
        printf("%c",nombre[i]);
    }
}

// Retorna TRUE(1) si el numero ingresado es primo, de lo contrario retorna FALSE(0)
int checkPrimo(int n){
    int divisores = 0;
    int i = 1;
    while(n>=i){
        if(n%i==0){
            divisores++;
        }
        i++;
    }
    if(divisores<=2){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

// Despliega los números primos encontrados en el array de enteros
void showPrimos(int numeros[], int dimension){
    int i;
    for(i = 0; i<dimension; i++){
        if(checkPrimo(numeros[i])==TRUE){
            printf("[%d] -> %d\n",i,numeros[i]);
        }
    }
}

// Retorna el promedio de un array de numeros decimales
float getPromedio(float datos[], int dimension){
    int i;
    float promedio = 0;
    for(i = 0; i<dimension; i++){
        promedio += datos[i];
    }
    promedio = promedio/dimension;

    return promedio;
}

// Retorna la varianza de un array de numeros decimales
float getVarianza(float datos[], int dimension){

    float promedio = getPromedio(datos,dimension);
    float varianza = 0.0, aux = 0.0;
    int i;
    
    for(i = 0; i<dimension; i++){
        aux = datos[i] - promedio;
        varianza += pow(aux,2);
    }
    varianza = varianza / dimension;
    return varianza;
}

int main(){

    int numeros[] = {4,5,6,7,1,2,33};
    
    char gato[] = {'C','h','e','s','t', 'e', 'r','\0'};
    char nombre[] = "Moletastic"; // C asignará automáticamente el carácter '\0' al final

    float notas[4];
    notas[0] = 4.5;
    notas[1] = 6.5;
    notas[2] = 3.4;
    notas[3] = 5.5;

    //showNombre(nombre,10);

    // También podemos imprimir una cadena de texto con %s
    //printf("\n%s",gato);
    return 0;
}