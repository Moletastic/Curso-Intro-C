#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
int main(){
    
    int hh,mm,ss;

    printf("Ingrese horas (hh): ");
    scanf("%d",&hh);
    printf("Ingrese minutos (mm): ");
    scanf("%d",&mm);
    printf("Ingrese segundos (ss): ");
    scanf("%d",&ss);

    while(1){
        printf("%d:%d:%d \n",hh,mm,ss);
        ss++; //ss = ss + 1
        if(ss>59){
            ss = 0;
            mm++;

            if(mm>59){
                mm = 0;
                hh++;

                if(hh>23){
                    hh = 0;
                }
            }
        }
        
        sleep(1);
    }


    return 0;
}