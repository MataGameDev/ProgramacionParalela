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
