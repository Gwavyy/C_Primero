/*
 * Programa:
 * Sinopsis: Programa que muestre el contenido de fichero de texto por pantalla. Paginando cada 24 lineas(mirando los fines de linea)
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 16/06/2026
 */
#include <iso646.h>
#include <stdio.h>
int main(){
    FILE *origen;
    int c;
    int lineas = 0;
    origen = fopen("./T8-ArchivosDeTexto/origen_ej2.txt","r");
    if (origen==NULL) {
        printf("Error");
    }else {
        c = getc(origen);
        while (c != EOF) {
            putchar(c);

            if (c == '\n') {
                lineas++;
                if (lineas == 24) {
                    printf("pulsa ENTER para continuar...\n");
                    getchar();
                    lineas=0;
                }
            }
            c=getc(origen);

        }
        fclose(origen);
    }
    return 0;
}