#include <cuda.h>
#include <curand.h>
#include <stdio.h>
//Por José Miguel Ruiz Mata
#define X 1024 
#define Y 1024
#define PADDING 5

__global__ void sumColumns(float *matrix, float *sums, int width, int height, int padding) {

  int col = blockIdx.x;
  int row = threadIdx.x;

  float sum = 0;

  for (int i = 0; i < height; i++) {
    int index = (i * (width + 2*padding)) + col + padding;
    sum += matrix[index];
  }

  sums[col] = sum;
}

int main() {

  int size = X * (Y + 2*PADDING);
  float *matrix, *sums;

  cudaMallocManaged(&matrix, size * sizeof(float));
  cudaMallocManaged(&sums, X * sizeof(float));

  curandGenerateUniform(curandGenerator_t, matrix, size);

  dim3 threads(Y);
  dim3 blocks(X);

  sumColumns<<<blocks, threads>>>(matrix, sums, X, Y, PADDING); 

  cudaDeviceSynchronize();

  cudaFree(matrix);
  cudaFree(sums);

  return 0;
}

/*Este código crea una matriz de X*Y con valores aleatorios utilizando curand. Luego le hace padding agregando PADDING filas arriba y abajo.

La función kernel sumColumns suma los valores de cada columna en paralelo. Cada thread se encarga de una fila.

Luego se llama al kernel con X bloques (uno por columna) y Y threads por bloque.

Finalmente se libera la memoria y se sincroniza antes de terminar.

Se pueden modificar X, Y y PADDING para probar diferentes tamaños de matriz y padding.*/
