/*
 * Programa:
 * Sinopsis: Programa que añada archivo de texto en otro destino
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 16/06/2026
 */
#include <iso646.h>
#include <stdio.h>
int main(){
    FILE *origen;
    FILE *destino;
    int c;

    origen = fopen("./T8-ArchivosDeTexto/origen_ej2.txt","r");
    destino =fopen("./T7-EstructurasDeControl/destino_ej4_T8.txt","a");
    if (origen==NULL || destino == NULL) {
        printf("Error");
    }else {
        c = getc(origen);
        while (c!= EOF) {
            putc(c,destino);
            c = getc(origen);
        }
        fclose(origen);
        fclose(destino);
    }
    return 0;
}