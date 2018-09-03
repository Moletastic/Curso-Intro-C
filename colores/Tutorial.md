# Colores para aplicaciones de consola

Para utilizar en colores en aplicaciones de consola
es necesario tener en cuenta que se harán uso de funciones
y estructuras con propiedades que contengan información
de la terminal que estemos ocupando. Si no se tiene
conocimientos de lo que son las estructuras (struct) en C
tomar lo siguiente como dogma de Fe.

Aclaración: Es posible cambiar los colores de la terminal
manualmente o utilizando el comando de system:
    
```c
system("COLOR FC");
```
... pero resultaría en un cambio global sin mayor personalización.

## Obtener información de la consola

```c
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    WORD defecto = consoleInfo.wAttributes;
}

```
Lo que estamos haciendo es obtener la información del 
buffer de la consola para manipular los atributos del texto.
Es importante mencionar que debemos de guardar el estado
inicial de la consola en una estructura WORD para reestablecer el estado de la consola una vez que cambiemos los colores mostrados.

## Establecer color
```c
SetConsoleTextAttribute(HANDLE hConsole, int color);
```
Esta función recibirá como parámetro el handle de la consola que guardamos en la variable hConsole y un color
representado como un valor entero. Por ende para usar un color solamente tendriamos que llamar a la función con el valor de nuestro color.


```c
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    WORD defecto = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, 1);
    printf("Color nuevo!\n");
    return 0;
}

```
Veriamos un color nuevo en la terminal, sin embargo tambien notariamos que esta conserva esta configuración incluso despues de cerrar nuestro programa. Para evitar eso es que usaremos nuestra configuracion guardada en la variable defecto, pasandosela para reestablecer los colores normales. Finalmente tendriamos algo asi.

```c
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    WORD defecto = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, 1);
    printf("Color nuevo!\n");
    SetConsoleTextAttribute(hConsole,defecto);
    printf("Color normal");
    return 0;
}

```

## Tabla de Colores
| Valor | Color |
| ----- | ----- |
|   0   | Negro |
|   1   | Azul  |
|   2   | Verde |
|   3   | Celeste|
|   4   | Rojo|
|   5   | Magenta|
|   6   | Amarillo|
|   7   | Blanco|
|   8   | Negro 2 |
|   9   | Azul 2  |
|   10   | Verde 2 |
|   11  | Celeste 2|
|   12   | Rojo 2|
|   13   | Magenta 2|
|   14   | Amarillo 2|
|   15   | Blanco 2|
|   ... | Otros      |


Existen tambien valores numéricos que representan un color de letra con un color de fondo distinto de negro.

## Sugerencias

- Usar colores como MACROS para asociar el nombre del color con su valor numérico, aprovechando su uso global en el código.
    ```c
    #define AZUL 1
    #define ROJO 4
    #define AMARILLO 6
    ...
    SetConsoleTextAttribute(hConsole, AZUL);
    ```
- Utilizar una función como por ejemplo:
    ```c
    void setColor(HANDLE hConsole, int color){
        SetConsoleTextAttribute(hConsole, color);
    }
    ...
    setColor(hConsole, ROJO);
    ```

