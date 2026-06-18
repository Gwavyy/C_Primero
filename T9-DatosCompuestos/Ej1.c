/*
 * Programa:
 * Sinopsis:
 * Realizar un programa en C que permita la suma de dos matrices.
 * Descomposición modular del problema:
       • Lectura una matriz
            o Petición de las dimensiones de la matriz
            o Lectura de los datos de la matriz
       • Lectura otra matriz
            o Petición de las dimensiones de la matriz
            o Lectura de los datos de la matriz
       • Comprobar si se pueden sumar
            • Calcular la suma
       • Mostrar los resultado
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 18/06/2026
 */

#include <stdio.h>

int main(){
     int filasM1,filasM2,columnasM1,columnasM2;
     printf("Suma de matrices: \n"
            "---MATRIZ UNO---\n"
            "Filas de la primera columna: ");
     scanf("%d",&filasM1);
     printf("Columnas de la primera matriz: ");
     scanf("%d",&columnasM1);
     printf("Filas de la segunda columna: ");
     scanf("%d",&filasM2);
     printf("Columnas de la segunda matriz: ");
     scanf("%d",&columnasM2);
     int m1[filasM1][columnasM1],m2[filasM2][columnasM2];
     if (filasM1==filasM2 && columnasM1==columnasM2) {
          int suma[filasM1][columnasM1];
          for (int i = 0; i < filasM1; ++i) {
               for (int j = 0; j < columnasM1; ++j) {
                   suma[i][j] = m1[i][j] + m2[i][j];
               }
          }
          printf("Suma de las matrices: \n");
          for (int i = 0; i < filasM1; ++i) {
               for (int j = 0; j < columnasM1; ++j) {
                    printf("  %d",suma[i][j]);
               }
               printf("\n");
          }
     }else {
          printf("Los rangos de las matrices son diferentes, no se pueden sumar");
     }

     return 0;
}
