# Vectores (Arrays o Arreglos) en C

 Los vectores son una zona de almacenamiento de datos
 en serie con las que es posible agrupar elementos en una única variable
 donde pueden ser referenciados por el índice de su posicion en este.


## Declaración

Declarar un vector en C consta del uso de la siguiente estructura:
```
<tipo de dato> <nombre de variable> [<dimension>]
```

Asi pues tendriamos algo asi:
```c
int numeros[4];
```
Una vez se establezca la dimensión, C reservará la cantidad de espacios indicada como dimensión a modo de índices, sin embargo C comenzará la reserva de espacios desde 0, por ende los espacios de los que dispondremos serán:
```
numeros[0] 
numeros[1] 
numeros[2] 
numeros[3] 
```
Por ende cabe aclarar que el índice mayor de un vector es
(dimensión - 1). Tratar de acceder a un índice mayor generará obtención de espacios de memoria que no tienen relación con lo que estamos almacenando.

Para establecer valores debemos hacer referencia a los índices reservados de nuestro vector, estos deben ser del mismo tipo que hayamos declarado en nuestro vector.

```c
int numeros[4];
numeros[0] = 21;
numeros[1] = 15;
numeros[2] = 16;
numeros[3] = 34;
```
Otro ejemplo
```c
float notas[5];
notas[0] = 3.4;
notas[1] = 5.4;
notas[2] = 4.6;
notas[3] = 6.0;
notas[4] = 5.3;
```
Una manera de declarar rapidamente un vector y sus valores es la siguiente:
```c
float notas[] = { 3.4 , 5.4 , 4.6 , 6.0 , 5.3 };
```
C por su cuenta reservará los espacios en memoria y los índices para la cantidad de datos que estemos declarando. Esto es útil para testear funciones y ahorrar tiempo usado en declarar el valor de cada índice.

## Recorrer un vector

Los vectores en C por si solos no nos pueden entregar su dimensión o tamaño basados en sus datos, lo que hace necesario el uso de una variable que preserve dicha información. Por ende para recorrer un vector, no solo debemos contar con el sino que una variable que nos mencione cuantos índices habremos de revisar en un ciclo.
Ejemplo:
```c
int numeros[4];
numeros[0] = 21;
numeros[1] = 15;
numeros[2] = 16;
numeros[3] = 34;

int dimension = 4;
int i;

for(i = 0; i<dimension ; i++){
    printf("[%d] ",numeros[i]); // los [ ] de [%d] solo son decoración...
}
```

¿Pero que ocurre si necesitamos asignarles datos a un vector en tiempo de ejecución?

## Asignar valores a un vector
El procedimiento sería similar al anterior, debemos recorrer cada uno de los índices reservados y asignarles valores a la posición correspondiente usando un bucle

```c
int numeros[4];
int dimension = 4;
int i;

for(i = 0; i<dimension ; i++){
    printf("Ingresar valor de [%d]: ", i ]); // aqui también
    scanf("%d",&numeros[i]);
}
```

### ¿ Podriamos pedirle al usuario que fije el mismo la dimensión del vector ?

Si y No. Podriamos pedirle al usuario que ingrese la cantidad de los datos que desea pero desafortunadamente la mayoría de compiladores de C requiere que la declaración de los vectores posea una constante como en este caso

```c
int numeros[4];
```
Las VLA (Variable-length array) de algunos compiladores permiten la asignación "dinámica" de la dimensión de un vector, tal que asi: 
```c
int dimension;
printf("Ingresar dimension del vector: ");
scanf("%d",&dimension);
int numeros[dimension];
```
Sin embargo no todos los compiladores poseen VLA. Omitiendo el uso de punteros, la única manera de realizar esta tarea sería declarar un arreglo con una dimensión mayor a la que esperemos que el usuario nos ingrese, tal que asi
```c
int numeros[70];
int dimension;
printf("Ingresar dimension del vector: ");
scanf("%d",&dimension);
```
Si en este caso el usuario nos ingresa una dimension de 5, simplemente podremos asignar valores hasta el índice 4 (recordar asunto entre dimensión e índice mayor) dejando 65
índices reservados sin utilizar. No es lo más óptimo, pero para su uso previo al conocimiento de punteros y estructuras más complejas resulta funcional.


## Uso en funciones

Para enviar un vector como parámetro en una función la sintaxis a seguir seria la siguiente:

```c
void mostrarArreglo(int numeros[], int dimension);
int sumarValores(int numeros[], int dimension);
float promedio(float numeros[], int dimension);
void mostrarNombre(char nombre[], int dimension);
```
Solo debemos agregar "[ ]" para referenciar un vector.

### ¿ Podriamos hacer una función que retorne un vector ?
Sin el uso de punteros no es posible, pues dentro de todo, los vectores no son más que punteros a cierto tipo de valores.

### Recordar

```c
int numeros[4];
numeros[0] = 21;
numeros[1] = 15;
numeros[2] = 16;
numeros[3] = 34;
numeros[4] = 55; // NO!!!!! 
```