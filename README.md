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



