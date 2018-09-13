#include <stdlib.h>
#include <stdio.h>

void menu(){
    int opc = 0;
    int dato = 0;
    while(opc!=4){

        printf("  Menu  \n");
        printf("1. Ingreso de dato\n");
        printf("2. Mostrar el doble\n");
        printf("3. Mostrar el triple\n");
        printf("4. Salir\n");
        printf("Ingresar opcion: ");
        scanf("%d",&opc);

        system("cls");
        if(opc == 1){
            printf("Ingresar dato: ");
            scanf("%d",&dato);
            system("pause");
            system("cls");
        }
        else if(opc == 2){
            printf("El doble de %d es %d\n",dato,dato*2);
            system("pause");
            system("cls");
        }
        else if(opc == 3){
            printf("El triple de %d es %d\n",dato,dato*3);
            system("pause");
            system("cls");
        }
        else if(opc == 4){
            system("cls");
        }
        else{
            printf("Comando fuera de rango...\n");
            system("pause");
            system("cls");
        }
    }

    printf("Saliendo...");
}

int main(){

    menu();

    return 0;
}