#include <stdlib.h>
#include <stdio.h>

/*  1.  Realizar un programa donde se ingrese un número e imprima por pantalla resultados basados en
        los numeros antecesores del numero ingresado hasta llegar a el (1 , 2 , ... , numero), 
        con las siguientes especificaciones:
        
        - Si el numero es par deben imprimirse por pantalla todas las multiplicaciones generadas por sus
        antecesores y el mismo
        - Si el numero es impar deben imprimirse por pantalla todas las divisiones generadas por sus
        antecesores y el mismo

        ej: [input] : numero = 5
            [output] :  1 / 1 = 1
                        2 * 1 = 2
                        2 * 2 = 4
                        1 / 3 = 0.33
                        2 / 3 = 0.66
                        3 / 3 = 1
                        4 * 1 = 4
                        4 * 2 = 8
                        4 * 3 = 12
                        4 * 4 = 16
                        1 / 5 = 0.2
                        2 / 5 = 0.4
                        3 / 5 = 0.6
                        4 / 5 = 0.8
                        5 / 5 = 1
*/


int main(){
    
    int numero, i,j;
    printf("Ingresar numero: ");
    scanf("%d",&numero);
    i = 1;

    while(i<=numero){
        if(i%2==0){
            printf("numero: %d\n", i);
            j = 1;
            while(j<=i){
                printf("%d * %d = %d\n",j,i,j*i);
                j++;
            }
        }
        else{
            printf("numero: %d\n", i);
            j = 1;
            while(j<=i){
                printf("%d / %d = %f\n",j,i,(j*1.0)/(i*1.0));
                j++;
            }
        }
        i++;
    }

    return 0;
}

/*  2.  Realizar función antro(int edad) que recibe como parámetro el entero edad e imprime un mensaje según
        el valor de esta:

        - Si la edad es 18 se imprime "Puedes pasar"
        - Si la edad es mayor que 18 se imprime "Puedes pasar (te sobran n años)", 
        siendo n el numero de años que tiene de sobra
        - Si la edad es menor que 18 pero mayor o igual que 14 se imprime "Aun te faltan n años",
        siendo n el numero de años faltantes para ingresar
        - Si la edad es inferior a 14, invitar -- cordialmente -- a retirarse
 */

void antro(int edad){

    if(edad==18){
        printf("Puedes pasar");
    }
    else{
        if(edad>18){
            printf("Puedes pasar (te sobran %d años)", edad - 18);
        }
        else{
            if(edad>=14){
                printf("Aun te faltan %d años", 18 - edad);
            }
            else{
                printf("Porfavor, vuelve a tu casa");
            }
        }
    }

}