#include <stdlib.h>
#include <stdio.h>

void FizzBuzz(int n){
    if(n%3==0){
        if(n%5==0){
            printf("FizzBuzz");
        }
        else{
            printf("Fizz");
        }
    }
    else{
        if(n%5==0){
            printf("Buzz");
        }
        else{
            printf("%d",n);
        }
    }
}