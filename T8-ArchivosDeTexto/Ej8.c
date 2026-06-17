/*
 * Programa:
 * Sinopsis: Programa que defina una funcion para escribir en un archivo de texto los numero primos menores de 1 al 100
 * , y que disponga de otra funcion para leer dicho fichero y escribir por pantalla esta lista de numeros primos.
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 17/06/2026
 */

#include <stdio.h>
void primosAlArchivo(FILE *destino);
void primosPorPantalla(FILE *origen);
int main(){
    FILE *destino = fopen("./T8-ArchivosDeTexto/primos1al100.txt","w");
    FILE *origen = fopen("./T8-ArchivosDeTexto/primos1al100.txt","r");
    if (destino == NULL) {
        printf("Error");
    }else {
        primosAlArchivo(destino);
        fclose(destino);
    }
    if (origen == NULL) {
        printf("Error");
    }else {
        primosPorPantalla(origen);
        fclose(origen);
    }
}

void primosAlArchivo(FILE *destino) {
    int cont = 0;
    for (int i = 2; i < 100; ++i) {
        cont = 0;
        for (int j = 1; j <= i; ++j) {
            if (i%j==0) {
                cont ++;
            }
        }
        if (cont==2) {
            fprintf(destino,"%d\n",i);
        }
    }
}

void primosPorPantalla(FILE *destino) {
    int c;
    while (fscanf(destino,"%d", &c) != EOF) {
        printf("%d\n",c);
    }
}
