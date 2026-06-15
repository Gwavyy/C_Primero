/*
 * Programa:
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 15/06/2026
 */

#include <stdio.h>
void mostrarMenu();
void tableroVacio();

int main(){
    mostrarMenu();
    return 0;
}

void mostrarMenu() {
    int opcion;
    do {
        printf("-----TUTORIAL AJEDREZ------\n"
          "1. Tablero vacio\n"
          "2. Tablero de incio\n"
          "3. Modo situacion\n"
          "4. Modo demo\n"
          "5. Lista de movimientos\n"
          "6. Salir del programa\n"
          "Elige una opcion: ");
        scanf("%d",&opcion);
        switch (opcion) {
            case 1:
                tableroVacio();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                printf("Saliendo...");
                break;
            default:
                printf("Opcion incorrecta.");
                break;
        }
    }while (opcion!=6);
}

void tableroVacio() {

    int numero=8;
    printf("  a b c d e f g h\n");
    for (int fila = 1; fila < 9; ++fila) {
        printf("%d",numero);
        numero --;
        for (int columna = 1; columna < 9; ++columna) {
            if ((fila + columna)%2==0) printf("  ");
            else printf(" *");
        }
        printf("\n");
    }
}
