#include <stdlib.h>
#include <stdio.h>

int main(){
    
    float farenheit,celsius;
    printf("Ingresar grados farenheit: ");
    scanf("%f",&farenheit);
    celsius = (farenheit - 32.0)/1.8;
    printf("%.2f [grados F] = %.2f [grados C]",farenheit,celsius);

    return 0;
}