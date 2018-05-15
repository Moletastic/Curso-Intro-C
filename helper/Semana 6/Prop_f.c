#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int centrales(int n){
    
    int primer_d, ultimo_d, cantidad = 0, aux = n;

    while(aux>0){
        aux = aux/10;
        cantidad++;                      // 4
    }

    primer_d = n/pow(10,cantidad-1);     // 1
    ultimo_d = n%10;                     // 4
    n = n - ultimo_d;                    // 1234 - 4 = 1230
    aux = primer_d * pow(10,cantidad-1); // 1 * 10^(4-1) = 1000
    n = n - aux;                         // 1230 - 1000 = 230
    n = n / 10;                          // 230/10 = 23

    return n;

}

int main(){
    
    int n = 1234;

    printf("%d",centrales(n));

    return 0;
}