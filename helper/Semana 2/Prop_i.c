#include <stdlib.h>
#include <stdio.h>

int main(){
    
    float alcotest;

    printf("Ingresar valor del alcotest: ");
    scanf("%f",&alcotest);

    if(0.8f<alcotest){
        printf("Usuario en estado de ebriedad");
    }

    else if(alcotest<=0.8f && alcotest>=0.3f){
        printf("Usuario bajo influencia del alcohol");
    }

    else{
        printf("Sin observacion");
    }

    return 0;
}