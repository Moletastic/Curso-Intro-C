#include <stdlib.h>
#include <stdio.h>

int main(){

    float manzanas = 168.75, mantequilla = 18.75, azucar = 37.5, migas = 25, leche = 37.5;
    int personas;

    printf("Ingresar cantidad de personas: ");
    scanf("%d",&personas);

    printf("Se necesitan:\n");
    printf("- %.2f gramos de manzanas\n",manzanas*personas);
    printf("- %.2f gramos de mantequilla\n",mantequilla*personas);
    printf("- %.2f gramos de azucar\n",azucar*personas);
    printf("- %.2f gramos de migas de pan\n",migas*personas);
    printf("- %.2f gramos de mililitros de leche\n",leche*personas);


    return 0;
}