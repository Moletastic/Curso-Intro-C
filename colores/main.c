#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>

#define BLANCO 7
#define ROJO 12
#define AMARILLO 14
#define AZUL 9

void setColor(HANDLE hConsole, int color){
    SetConsoleTextAttribute(hConsole, color);
}


void checkPromedio(float notas[], int n, HANDLE hConsole){
    int i;
    float nota;
    float promedio;
    for(i = 0; i<n; i++){
        nota = notas[i];
        if(nota<4.0){
            setColor(hConsole,ROJO);
        }
        else if(nota==4.0){
            setColor(hConsole,AMARILLO);

        }
        else{
            setColor(hConsole,AZUL);
        }
        printf("[%.2f] ",nota);
        promedio += nota;
    }
    promedio = promedio / n;

    setColor(hConsole,BLANCO);
    printf("\nPromedio Final: ");
    if(promedio<4.0){
        setColor(hConsole,ROJO);
    }
    else if(promedio==4.0){
        setColor(hConsole,AMARILLO);

    }
    else{
        setColor(hConsole,AZUL);
    }
    printf("%.2f",promedio);
}


int main(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD defecto;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    defecto = consoleInfo.wAttributes;

    float notas[4];
    notas[0] = 4.1;
    notas[1] = 3.5;
    notas[2] = 5.6;
    notas[3] = 4.0;
    int n = 4;
    checkPromedio(notas, n, hConsole);
    setColor(hConsole,defecto);

    return 0;
}