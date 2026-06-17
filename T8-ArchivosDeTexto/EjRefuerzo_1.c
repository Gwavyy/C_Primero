/*
 * Programa:
* Sinopsis: Una asociación lúdica solicita un programa en C para generar combinaciones para jugar
* a la lotería primitiva. Una combinación es un grupo de seis valores sin decimales comprendidos
* entre 1 y 49, ambos incluidos. El programa debe generar de forma aleatoria cada una de las
* combinaciones, asegurando que cada una de ellas contiene exactamente los seis valores y que
* son únicos en cada combinación (no hay repeticiones). Cada vez que se ejecute el programa
* debe generarse un fichero denominado combinaciones.txt que debe contener al menos 25
* combinaciones. Guarda el código con el nombre ej8P_1.c. Nota: puede ser de utilidad la función
* rand() presente en la librería stdlib.h
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 17/06/2026
 */

#include <stdio.h>
#include <stdlib.h>
int estaRepetido(int combinacion[], int cantidad, int numero);
int main() {
    printf("GENERADOR LOTERIA DE LA PRIMITIVA: ");

    FILE *destino = fopen("./T8-ArchivosDeTexto/combinaciones.txt", "w");
    int combinacion[6];
    int num;

    if (destino == NULL) {
        printf("error");
    } else {
        for (int i = 0; i < 25; ++i) {
            for (int j = 0; j < 6; ++j) {
                do {
                    num = 1 + rand() % 49;
                } while (estaRepetido(combinacion, j, num));

                combinacion[j] = num;
            }

            fprintf(destino, "Combinacion %d: ", i + 1);

            for (int j = 0; j < 6; ++j) {
                fprintf(destino, "%d ", combinacion[j]);
            }

            fprintf(destino, "\n");
        }

        fclose(destino);
        printf("Fichero generado correctamente");
    }

    return 0;
}


int estaRepetido(int combinacion[], int cantidad, int numero) {
    int repetido = 0;
    for (int i = 0; i < cantidad; ++i) {
        if (combinacion[i] == numero) {
            repetido=1;
        }
    }
    return repetido;
}