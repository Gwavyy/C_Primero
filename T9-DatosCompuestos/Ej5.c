/*
 * Programa:
 * Sinopsis: 5. Realizar un programa en C que seleccione aleatoriamente una combinación de valores de la lotería Primitiva (6 números entre 1 y 49)
 * en un total de 100 intentos y ofrezca la combinación formada por los valores que con más alta frecuencia se repiten.
 * Realizar el mismo ejercicio para los valores de menor frecuencia de aparición.
 * En el caso de empates a nivel de frecuencias, se deberá desempatar eligiendo aquel valor que haya aparecido más en los primeros sorteos que en los últimos.
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 18/06/2026
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMEROS 49
#define INTENTOS 100
#define TAM_COMBINACION 6

int generarCombinacion(int combinacion[]);
int main() {
    int frecuencia[NUMEROS + 1]={0};


    srand(time(NULL));

    return 0;
}
int generarCombinacion(int combinacion[]) {

}