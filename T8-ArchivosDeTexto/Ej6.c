/*
 * Programa:
 * Sinopsis: 6. Realizar un programa en C que 'encripte' un fichero de texto en otro sustituyendo cada carácter de cada línea por su siguiente en la tabla ASCII.
 *  Como modificación de esto, que sustituya cada carácter de cada línea por n más en la tabla ASCII (n=3 es el conocido como Cifrado del César). Guardar el código con el nombre ej8_6.c.
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 17/06/2026
 */
#include <iso646.h>
#include <stdio.h>
void cifradoCesar(FILE *origen, FILE *destino, int desplazamiento);
int main(){
    FILE *origen = fopen("./T8-ArchivosDeTexto/Ejercicio6.txt","r");
    FILE *destino = fopen("./T8-ArchivosDeTexto/Cifrado_ej6-txt","w");


    if (origen == NULL || destino == NULL) {
        printf("error al abrir el archivo");
        fclose(origen);
        fclose(destino);
    }else {
        cifradoCesar(origen,destino,3);

        fclose(origen);
        fclose(destino);
    }
    return 0;
}

void cifradoCesar(FILE *origen, FILE *destino, int desplazamiento) {
    int c;
    c = getc(origen);
    while (c != EOF) {
        putc(c + desplazamiento, destino);
        printf("Puntero destino: %p\n",destino);
        c = getc(origen);
    }
}

