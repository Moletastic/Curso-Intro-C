#include <stdlib.h>
#include <stdio.h>

int main(){
    int seg, hh,mm,ss;
    printf("Ingresar segundos: ");
    scanf("%d",&seg);

    hh = seg/3600;
    ss = seg - hh*3600;
    mm = ss/60;
    ss = ss - mm*60;

    printf("%d equivalen a %d horas, %d minutos y %d segundos",seg,hh,mm,ss);

    return 0;
}