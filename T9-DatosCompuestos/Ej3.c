/*
 * Programa:
 * Sinopsis: Programa que calcule las notas de los alumnos de Programacion.
 *          - Si una nota es negativa == NP
 *          - Cada alumno tiene 3 notas: Practico de Febrero, Practico de Junio y Teorico de Junio
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 18/06/2026
 */
#include <iso646.h>
#include <stdio.h>
#include <stdlib.h>
#define ALUMNOS 13
#define NOTAS 3
int main(){
    printf("CALCULO MEDIA ALUMNOS: ");
    float clase[ALUMNOS][NOTAS];
    float media[ALUMNOS];
    for (int i = 0; i < ALUMNOS; ++i) {
        for (int j = 0; j < NOTAS; ++j) {
            float nota = 0;
            nota = rand()%14 - 3;
            clase[i][j] = nota;
        }
    }
    for (int i = 0; i < ALUMNOS; ++i) {
        float suma = 0;
        for (int j = 0; j < NOTAS; ++j) {
            suma = suma + clase[i][j];
        }
        media[i] = suma/NOTAS;
    }

    for (int i = 0; i < ALUMNOS; ++i) {
        printf("ALUMNO %d: \n",i + 1);

        for (int j = 0; j < NOTAS; ++j) {
            if (clase[i][j] < 0) {
                printf("Nota %d: NP\n",j+1);
            }else {
                printf("Nota %d: %.2f\n",j +1,clase[i][j]);
            }
        }
        if (media[i]<0) {
            printf("Nota media: NP");
        }else{
            printf("Nota media: %.2f\n",media[i]);
        }

    }
    return 0;
}
