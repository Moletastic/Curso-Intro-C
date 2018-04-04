#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int km; //También puede ser float

    printf("Ingresar kilometros: ");
    scanf("%d",&km);
    printf("%d km = %f millas nauticas",km,km*1.852);

    return 0;
}