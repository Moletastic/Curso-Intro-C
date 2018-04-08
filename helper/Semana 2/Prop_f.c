#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int edad;
    float peso,altura, imc;

    printf("Ingrese edad: ");
    scanf("%d",&edad);
    printf("Ingrese peso en kilos: ");
    scanf("%f",&peso);
    printf("Ingrese altura en metros: ");
    scanf("%f",&altura);

    imc = peso/(altura*altura);

    if(edad>=18 && edad<=24){

        if(imc<18){
            printf("Bajo peso");
        }

        else if (imc>24){
            printf("Sobre peso");
        }

        else{
            printf("Normal");
        }

    }

    else if(edad>=25 && edad<=34){

        if(imc<20){
            printf("Bajo peso");
        }

        else if (imc>25){
            printf("Sobre peso");
        }

        else{
            printf("Normal");
        }
    }

    else if(edad>=35 && edad<=44){

        if(imc<21){
            printf("Bajo peso");
        }

        else if (imc>26){
            printf("Sobre peso");
        }

        else{
            printf("Normal");
        }
    }

    else if(edad>=45 && edad<=54){

        if(imc<22){
            printf("Bajo peso");
        }

        else if (imc>27){
            printf("Sobre peso");
        }

        else{
            printf("Normal");
        }
    }

    else if(edad>=55 && edad<=64){

        if(imc<23){
            printf("Bajo peso");
        }

        else if (imc>28){
            printf("Sobre peso");
        }

        else{
            printf("Normal");
        }
    }

    else if(edad>=65){

        if(imc<24){
            printf("Bajo peso");
        }

        else if (imc>29){
            printf("Sobre peso");
        }

        else{
            printf("Normal");
        }
    }

    else{
        printf("Edad fuera de rango");
    }


    return 0;
}