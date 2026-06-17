/*
 * Programa:
 * Sinopsis: Programa que cuente los caracteres, palabra y lineas de un fichero.
 * Al mismo tiempo, generar un fichero denominado diccionario.txt donde almacene todas las palabras encontradas(una palabra por linea)
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
    int caracteres=0;
    int palabras=0;
    int lineas=0;
    int dentroPalabra = 0;
    origen = fopen("./T8-ArchivosDeTexto/origen_ej5.txt","r");
    destino = fopen("./T8-ArchivosDeTexto/diccionario.txt","w");

    if (origen==NULL || destino == NULL) {
        printf("Error");
    }else {
        c = getc(origen);
        while (c != EOF) {
            caracteres ++;
            if (c=='\n') {
                lineas ++;
            }
            if (c != ' ' && c != '\n' && c != '\t') {
                putc(c,destino);
                if (dentroPalabra == 0) {
                    palabras++;
                    dentroPalabra=1;
                }
            }else {
                if (dentroPalabra==1) {
                    putc('\n',destino);
                    dentroPalabra=0;
                }
            }
            c = getc(origen);
        }
        fclose(origen);
        fclose(destino);
    }
    printf("Numero de caracteres: %d\n",caracteres);
    printf("Numero de palabras: %d\n",palabras);
    printf("Numero de lineas: %d\n",lineas);
    return 0;
}