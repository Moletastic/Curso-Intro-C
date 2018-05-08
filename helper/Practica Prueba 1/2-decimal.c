#include <stdlib.h>
#include <stdio.h>

float decimal(float a, float b){
    float exacto = a/b;
    int aprox = a/b;
    return exacto - aprox;
}