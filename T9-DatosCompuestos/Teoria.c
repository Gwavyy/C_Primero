/*
 * Programa:
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 18/06/2026
 */

#include <stdio.h>
#define MAX 10

int main(){
    int notas[3]; //Array: Coleccion de un numero fijo de datos del mismo tipo.
    int edad[5]; //Esto guarda 5 edades: edad[0],edad[1],edad[2],edad[3],edad[4]
    int numero[MAX]; //Esto es mejor que ir poniendo 10 por todas partes

    //Rellenar vectores con for:
    for (int i = 0; i < MAX; ++i) {
        numero[i] = i + 1;
    }

    return 0;
}
