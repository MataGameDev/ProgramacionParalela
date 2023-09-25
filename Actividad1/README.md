# ProgramacionParalela # Actividad 1

Primero, el código define dos matrices de 10x10 llamadas matrizA y matrizB. Estas matrices se inicializan con números del 1 al 10 en cada fila y columna. Luego, verifica si el número de columnas en matrizA es igual al número de filas en matrizB. Si no son iguales, muestra un mensaje de error y finaliza el programa.

Después, se crea una tercera matriz llamada producto para almacenar el resultado de la multiplicación de las dos matrices.

El proceso de multiplicación se realiza utilizando tres bucles anidados. 

El primer bucle for (variable a) se utiliza para iterar a través de las columnas de la matriz matrizB.

Luego, dentro del bucle a, se utiliza un bucle for (variable i) para recorrer las filas de la matriz matrizA.

Dentro del bucle i, se declara una variable suma inicializada a 0. Esta variable se utiliza para acumular la suma de productos de elementos de matrizA y matrizB.

Luego, se utiliza un tercer bucle for (variable j) para recorrer las columnas de matrizA.

Dentro del bucle j, se realiza la multiplicación de los elementos correspondientes de matrizA y matrizB, y el resultado se suma a la variable suma.

Finalmente, el valor calculado en suma se asigna a la matriz producto en la posición [i][a].

Después de completar la multiplicación, el código imprime la matriz producto resultante en la consola.


//multiplicar 2 matrices de 10x10

#include <stdio.h>

#define FILAS_MATRIZ_B 10
#define COLUMNAS_MATRIZ_B 10
#define FILAS_MATRIZ_A 10
#define COLUMNAS_MATRIZ_A 10


int main(void) {

    int matrizA[FILAS_MATRIZ_A][COLUMNAS_MATRIZ_A] = {
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
    };
    int matrizB[FILAS_MATRIZ_B][COLUMNAS_MATRIZ_B] = {
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
            {1,2,3,4,5,6,7,8,9,10},
    };

    if (COLUMNAS_MATRIZ_A != FILAS_MATRIZ_B) {
        printf("Columnas de matriz A deben ser igual a filas de matriz B");
        return 0;
    }
    //Lugar en donde se almacena el resultado
    int producto[FILAS_MATRIZ_B][COLUMNAS_MATRIZ_B];

    // Necesitamos hacer esto por cada columna de la segunda matriz (B)
    for (int a = 0; a < COLUMNAS_MATRIZ_B; a++) {
        // Dentro recorremos las filas de la primera (A)
        for (int i = 0; i < FILAS_MATRIZ_A; i++) {
            int suma = 0;
            // Y cada columna de la primera (A)
            for (int j = 0; j < COLUMNAS_MATRIZ_A; j++) {
                // Multiplicamos y sumamos resultado
                suma += matrizA[i][j] * matrizB[j][a];
            }
            // Lo acomodamos dentro del producto
            producto[i][a] = suma;
        }
    }

    // Recorrer producto
    printf("Imprimiendo producto\n");
    for (int i = 0; i < FILAS_MATRIZ_B; i++) {
        for (int j = 0; j < COLUMNAS_MATRIZ_B; j++) {
            printf("%d ", producto[i][j]);
        }
        printf("\n");
    }
}

¿Como funciona una Matriz?

Una matriz es un arreglo de números:

Matriz 2x3 
Una matriz
(Ésta tiene 2 filas y 3 columnas)

Multiplicar una matriz por un solo número es fácil:

Multiplicación de una Matriz por una Constante

Éstas son las operaciones:
2×4=8	2×0=0
2×1=2	2×-9=-18
Llamamos al número ("2" en este caso) un escalar, por lo que esto se llama "multiplicación escalar".

Multiplicar una matriz por otra matriz
Pero para multiplicar una matriz por otra matriz necesitamos hacer el "producto punto" de filas y columnas ... ¿qué significa eso? Veamos con un ejemplo:

Para hallar la respuesta para la 1era fila y 1era columna:

Multiplicación de una Matriz producto punto

El "Producto Punto" es cuando multiplicamos los miembros coincidentes, luego sumamos:

(1, 2, 3) • (7, 9, 11) = 1×7 + 2×9 + 3×11
    = 58

Emparejamos los primeros miembros (1 y 7), los multiplicamos, del mismo modo para los segundos miembros (2 y 9) y los terceros miembros (3 y 11), y finalmente los sumamos.

¿Quieres ver otro ejemplo? Aquí está para la 1era fila y la 2da columna:

Multiplicación de matrices, siguiente entrada

(1, 2, 3) • (8, 10, 12) = 1×8 + 2×10 + 3×12
    = 64

Podemos hacer lo mismo para la 2da fila y la 1era columna:

(4, 5, 6) • (7, 9, 11) = 4×7 + 5×9 + 6×11
    = 139

Y para la 2da fila y la 2da columna:

(4, 5, 6) • (8, 10, 12) = 4×8 + 5×10 + 6×12
    = 154

Y obtenemos:

[58   64]
[139 154]

Multiplicación de matrices terminada

¡LISTO!


Este código en C realiza la multiplicación de dos matrices de 10x10 (matrizA y matrizB) y almacena el resultado en la matriz "producto". A continuación, se comentan las partes clave del código:

Inclusión de bibliotecas:

#include <stdio.h>
Se incluye la biblioteca estándar de C que permite la entrada y salida estándar, necesaria para utilizar funciones de entrada/salida como printf.

Definición de constantes:

#define FILAS_MATRIZ_B 10
#define COLUMNAS_MATRIZ_B 10
#define FILAS_MATRIZ_A 10
#define COLUMNAS_MATRIZ_A 10
Se definen constantes para el tamaño de las matrices A y B. En este caso, ambas matrices son de 10x10, pero estas constantes permiten cambiar fácilmente el tamaño de las matrices en el futuro si es necesario.

Declaración de matrices:

int matrizA[FILAS_MATRIZ_A][COLUMNAS_MATRIZ_A] = { ... };
int matrizB[FILAS_MATRIZ_B][COLUMNAS_MATRIZ_B] = { ... };
Se declaran e inicializan las matrices "matrizA" y "matrizB" con valores específicos. Ambas matrices tienen un tamaño de 10x10 y contienen valores del 1 al 10.

Verificación de dimensiones de las matrices:

if (COLUMNAS_MATRIZ_A != FILAS_MATRIZ_B) {
    printf("Columnas de matriz A deben ser igual a filas de matriz B");
    return 0;
}
Se verifica que el número de columnas en la matriz A sea igual al número de filas en la matriz B, ya que esta es una condición necesaria para que la multiplicación de matrices sea posible. Si esta condición no se cumple, se muestra un mensaje de error y el programa termina.

Cálculo de la multiplicación de matrices:


int producto[FILAS_MATRIZ_B][COLUMNAS_MATRIZ_B];
Se declara la matriz "producto" que almacenará el resultado de la multiplicación de matrices.



for (int a = 0; a < COLUMNAS_MATRIZ_B; a++) {
    for (int i = 0; i < FILAS_MATRIZ_A; i++) {
        int suma = 0;
        for (int j = 0; j < COLUMNAS_MATRIZ_A; j++) {
            suma += matrizA[i][j] * matrizB[j][a];
        }
        producto[i][a] = suma;
    }
}
Se utiliza un bucle anidado para calcular la multiplicación de matrices. El bucle externo itera a través de las columnas de la matriz B, el bucle intermedio recorre las filas de la matriz A, y el bucle interno realiza la multiplicación y suma de los elementos correspondientes de las matrices A y B, almacenando el resultado en la matriz "producto".

Impresión del resultado:

printf("Imprimiendo producto\n");
for (int i = 0; i < FILAS_MATRIZ_B; i++) {
    for (int j = 0; j < COLUMNAS_MATRIZ_B; j++) {
        printf("%d ", producto[i][j]);
    }
    printf("\n");
}
Finalmente, se recorre la matriz "producto" y se imprime en la consola el resultado de la multiplicación de matrices. Cada número en la matriz "producto" se imprime en la pantalla seguido de un espacio, y se agrega una nueva línea al final de cada fila para que la salida sea legible.

