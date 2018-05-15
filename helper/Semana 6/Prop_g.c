#include <stdlib.h>
#include <stdio.h>


int Clave(int a, int b){

    int aux, aux2, clave = 0;

    while(a>0 || b>0){

        aux = a%10;
        aux2 = b%10;

        if(aux>=aux2){
            clave = clave*10 + aux;
            a = a/10;
        }
        else{
            clave = clave*10 + aux2;
            b = b/10;
        }

    }

    return clave;

}

int main(){
    

    printf("%d",Clave(1237,1234));


    return 0;
}