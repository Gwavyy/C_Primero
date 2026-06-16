/*
 * Programa:
 * Sinopsis: Realizar un programa que copie un archivo de texto fuente en otro destino
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 16/06/2026
 */

#include <stdio.h>
int main(){
    FILE *origen;
    FILE *destino;
    int c;
    origen = fopen("./T8-ArchivosDeTexto/origen.txt","r");
    destino = fopen("./T8-ArchivosDeTexto/destino.txt","w");

    if (origen == NULL || destino == NULL) {
        printf("Error");
    }else {
        c=fgetc(origen);
        while (c != EOF) {
            fputc(c,destino);
            c=fgetc(origen);
        }
        fclose(origen);
        fclose(destino);
    }

    return 0;
}