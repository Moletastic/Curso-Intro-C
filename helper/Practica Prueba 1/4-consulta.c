#include <stdlib.h>
#include <stdio.h>


void consulta(char a, char b, int x, int y){
    
    if(x==0 && y==0){
        printf("Ambas mascotas no tienen nada ");
    }

    else if(x==1 && y==1){
        printf("Ambas mascotas necesitan atencion ");
    }

    else{
        if(a!=b){
            if(x==1){
                if(a=='g'){
                    printf("Solo el gato necesita atencion");
                }
                else{
                    printf("Solo el perro necesita atencion");
                }       
            }

            else{
                if(b=='g'){
                    printf("Solo el gato necesita atencion");
                }
                else{
                    printf("Solo el perro necesita atencion");
                }
            }
        }

        else{
            if(x==1){
                if(a=='g'){
                    printf("Solo un gato necesita atencion");
                }
                else{
                    printf("Solo un perro necesita atencion");
                }       
            }

            else{
                if(b=='g'){
                    printf("Solo un gato necesita atencion");
                }
                else{
                    printf("Solo un perro necesita atencion");
                }
            }
        }
    }
}