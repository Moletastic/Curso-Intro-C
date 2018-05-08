#include <stdlib.h>
#include <stdio.h>

float resto(int a, int b){
    float c = a/b;
    c = c*b;
    return a-c;
}