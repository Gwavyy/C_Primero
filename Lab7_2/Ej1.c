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
void tableroInicio();
void modoSituacion();
void modoDemo(unsigned int filaTorre,unsigned int columnaTorre);
char obtenerCasilla(int fila,int columna);
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
                tableroInicio();
                break;
            case 3:
                modoSituacion();
                break;
            case 4:
                unsigned int filaTorre,columnaTorre;
                printf("Indica la primera coordenada de la torre: ");
                scanf("%u",&filaTorre);
                if (filaTorre>8 || filaTorre<1) {
                    printf("Esa fila no existe en el tablero, puedes verlo en la opcion 1. Tablero vacio");
                    break;
                }
                printf("Introduce la segunda coordenada de la torre: ");
                scanf("%u",&columnaTorre);
                if (columnaTorre>8 || columnaTorre<1) {
                    printf("Esa columna no existe en el tablero, puedes verlo en la opcion 1. Tablero vacio");
                    break;
                }
                modoDemo(filaTorre,columnaTorre);
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

void modoDemo(unsigned int filaTorre,unsigned int columnaTorre) {

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

void tableroInicio() {
    int numero=8;
    char pieza='*';
    printf("  a b c d e f g h\n");
    for (int filas = 1; filas < 9; ++filas) {
        printf("%d",numero);
        numero--;
        for (int columnas = 1; columnas < 9; ++columnas) {
            if (filas == 8) {
                switch (columnas) {
                    case 1:
                        case 8:
                        pieza = 'T';
                        break;
                    case 2:
                        case 7:
                        pieza = 'C';
                        break;
                    case 3:
                        case 6:
                        pieza = 'A';
                        break;
                    case 4:
                        pieza = 'D';
                        break;
                    case 5:
                        pieza = 'R';
                        break;
                }
            }else if (filas==7 || filas == 2){
                    pieza = 'P';
            }else if (filas == 1) {
                switch (columnas) {
                    case 1:
                        case 8:
                        pieza = 'T';
                    break;
                    case 2:
                        case 7:
                        pieza = 'C';
                    break;
                    case 3:
                        case 6:
                        pieza = 'A';
                    break;
                    case 4:
                        pieza = 'R';
                    break;
                    case 5:
                        pieza = 'D';
                    break;
                }
            }else {
                if (((filas + columnas)%2==0)){
                    pieza = ' ';
                }else pieza = '*';
            }
            printf(" %c",pieza);
        } printf("\n");
    }
}

void modoSituacion() {
    int numero=8;
    printf("   a  b  c  d  e  f  g  h\n");
    for (int fila = 1; fila < 9; ++fila) {
        printf("%d",numero);
        numero --;
        for (int columna = 1; columna < 9; ++columna) {
            printf("  %c",obtenerCasilla(fila,columna));
        }
        printf("\n");
    }

}

char obtenerCasilla(int fila,int columna) {
    char casilla=' ';
    if (fila == 6 && columna == 3) {
        casilla='C';
    }else if (fila == 6 && columna == 2) {
        casilla = 'P';
    }else if (fila == 4 && columna == 5) {
        casilla = 'P';
    }else if (fila == 3 && columna == 3) {
        casilla = 'C';
    }else {
        if ((fila + columna)%2 == 0) {
            casilla=' ';
        }else casilla = '*';
    }
    return casilla;
}

