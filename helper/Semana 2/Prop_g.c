#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int precio, cuotas, monto;
    printf("Ingresar precio del producto: ");
    scanf("%d",&precio);
    printf("Ingresar cantidad de cuotas: ");
    scanf("%d",&cuotas);

    if(cuotas>=3){
        precio = precio-(precio*0.05);
    }

    if(cuotas>1){
        printf("El precio a pagar es de $%d, pagado en %d cuotas de $%d",precio,cuotas,precio/cuotas);
    }
    else{
        printf("El precio a pagar es de $%.2f",precio - (precio*0.25));
    }


    return 0;
}