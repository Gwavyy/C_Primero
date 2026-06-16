/*
 * Programa: Programa donde explico la teoria
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 16/06/2026
 */
#include <iso646.h>
#include <stdio.h>
#include <wchar.h>
//OPERACIONES CON ARCHIVOS DE TEXTO

/*
int main() {
    //1. DEFINICION DE VARIABLES FILE
    FILE *f, *g, *h;
    //2. APERTURAS DEL ARCHIVO && 3. R/W/ADD EN EL ARCHIVO

    f = fopen("datos.dat","r"); //abrir archivo en el directorio actual para leer informacion
    g = fopen("a:\\muestra.dat","w"); //abrir archivo con camino absoluto para erscribir informacion
    h = fopen("..\\agenda.dat","a"); //abrir archivo con camino relativo para añadir informacion

    //4. CIERRE DE ARCHIVO
    fclose(f);  //SIEMPRE SE DEBEN CERRAR LOS ARCHIVOS
    fclose(g);
    fclose(h);
} */

//OPERACIONES DE LECTURA Y ESCRITURA DE ARCHIVOS
int main() {
    FILE *pf;
    int c,a,b;
    //LECTURA
    /*
     *Modos de apertura:
     *  r -> leer archivo existente
     *  w -> escribir un archivo desde cero, si existe, borra el contenido
     *  a -> añadir al final del archivo
     *  r+ -> leer y escribir
     *  w+ -> leer y escribir, pero borra lo anterior
     *  a+ -> leer y añadir al final
     */
    pf = fopen("datos.dat","r");
    if (pf == NULL) {
        printf("No se puede abrir el archivo.");
    }else {
        c = fgetc(pf); //fget lee un caracter, por eso se hace uso de bucles(lee letra por letra)
        fscanf(pf,"%d %d",&a, &b); //fscanf lee datos ocn formato (numeros,palabras,etc)

        printf("Primer numero: %d\n",a);
        printf("Segundo numero: %d\n",b);
        while (c != EOF) { //EOF es END OF FILE
            printf("%c",c);
            c = fgetc(pf);
        }
        fclose(pf);
    }

    //ESCRITURA

    FILE *g;
    int edad = 23;
    g = fopen("salida.txt","w");
    if (g==NULL) {
        printf("El archivo no se puede abrir");
    }else {
        fputc('H',g); //fputc ESCRIBE UN CARACTER
        fputc('O',g);
        fputc('L',g);
        fputc('A',g);
        fputc('\n',g);

        fprintf(g,"Hola Guillermo\n"); //fprintf escribe un texto formateado
        fprintf(g,"%d",edad);

        fclose(g);

        feof(g);//COMPRUEBA SI YA SE HA ALCANZADO EL FINAL DEL ARCHIVO
    }

    //COPIAR UN ARCHIVO CARACTER A CARACTER
        FILE *origen;
        FILE *destino;
        int n;

        origen = fopen("./T8-ArchivosDeTexto/origen.txt","r");
        destino = fopen("./T8-ArchivosDeTexto/destino.txt","w");

        if (origen == NULL || destino == NULL) {
            printf("Error al abrir el archivo");
        }else {
            n = fgetc(origen);
            while (n!= EOF) {
                fputc(n,destino);
                n=fgetc(origen);
            }
            fclose(origen);
            fclose(destino);
        }


}






