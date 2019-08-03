#include <stdlib.h>
#include <stdio.h>

int main(){

    int positivos = 0;
    float promedio = 0.0;
    int negativos = 0;
    int multiplicatoria = 0;
    int pares = 0;
    int divs_ocho = 0;
    int minimo = 99999;
    int cantidad = 0;
    int numero = 1;

    while(numero!=0){
        printf("Numeros ingresados : %d\nIngresar numero: ",cantidad);
        scanf("%d",&numero);

        if(numero!=0){
            cantidad++;
            if(numero%2==0){
                pares++;
                if(numero%8==0){
                    divs_ocho++;
                }
            }

            if(numero>0){
                positivos++;
                promedio += numero;
            }
            else{
                negativos++;
                if(multiplicatoria != 0){
                    multiplicatoria*=numero;
                }
                else{
                    multiplicatoria = numero;
                }
            }

            if(numero<minimo){
                minimo = numero;
            }
        }
        system("cls");
    }

    if(positivos!=0){
        promedio = promedio / positivos;
    }

    printf("La cantidad de enteros positivos es %d, cuyo promedio es %.2f\n",positivos,promedio);
    printf("La cantidad de negativos es %d, cuya multiplicatoria es %d\n",negativos,multiplicatoria);
    printf("La cantidad de pares son %d, donde %d de ellos son divisibles por 8\n",pares,divs_ocho);
    printf("La cantidad minima es %d y la cantidad total de datos es %d\n",minimo,cantidad);

    return 0;
}