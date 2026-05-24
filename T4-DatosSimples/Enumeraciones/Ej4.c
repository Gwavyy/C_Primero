#include <stdio.h>
enum Meses{ENERO=1,FEBRERO=2,MARZO=3,ABRIL=4,MAYO=5,JUNIO=6,JULIO=7,AGOSTO=8,SEPTIEMBRE=9,OCTUBRE=10,NOVIEMBRE=11,DICIEMBRE=12};
/*
 * Programa: Pide numero de 1 al 12 y lo convierte en mes
 * DEBE USAR SWITCH
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 11/05/2026
 */

int main(void) {
    int opcion;
    enum Meses mimes = 0;
    do {
        printf("Introduce un numero del 1 al 12 para ver el mes correspondiente: ");
        scanf("%d",&opcion);
        switch (opcion) {
            case ENERO:
                printf("ENERO\n");
                break;
            case FEBRERO:
                printf("FEBRERO\n");
                break;
            case MARZO:
                printf("MARZO\n");
                break;
            case ABRIL:
                printf("ABRIL\n");
                break;
            case MAYO:
                printf("MAYO\n");
                break;
            case JUNIO:
                printf("JUNIO\n");
                break;
            case JULIO:
                printf("JULIO\n");
                break;
            case AGOSTO:
                printf("AGOSTO\n");
                break;
            case SEPTIEMBRE:
                printf("SEPTIEMBRE\n");
                break;
            case OCTUBRE:
                printf("OCTUBRE\n");
                break;
            case NOVIEMBRE:
                printf("NOVIEMBRE\n");
                break;
            case DICIEMBRE:
                printf("DICIEMBRE\n");
                break;
            default:
                printf("No valido\n");
                break;

        }
    }while (opcion < 13 && opcion > 0);

}