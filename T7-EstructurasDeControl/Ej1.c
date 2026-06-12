/*
 * Programa:
 * Sinopsis:
 * Escribe un programa que presente, mediante bucles, las tablas de sumar en base 10, de multiplicar en base 10,
 * de sumar en base 16 y de multiplicar en base 16, tablas que deben generarse para valores del 1 al 9.
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 11/06/2026
 */
#include <stdio.h>
void base10();
void mostrarMenu();
void base16();
int main() {
    mostrarMenu();
}

void mostrarMenu() {
    unsigned int opcion;
    do {
        printf("------TABLAS DE SUMAR Y MULTIPLICAR-------\n"
               "1. En base 10\n"
               "2. En base 16\n"
               "0. Salir\n");
        scanf("%u",&opcion);
        switch (opcion) {
            case 1:
                base10();
                break;
            case 2:
                base16();
                break;
            case 0:
                printf("Hasta luego!");
                break;
            default:
                printf("Opcion incorrecta...");
                break;

        }
    }while (opcion!=0);
}

void base10() {
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 10; ++j) {
            printf("%d + %d = %d\n",i,j,i+j);
        }
    }
}

void base16() {
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 10; ++j) {
            printf("%x + %x = %x\n",i,j,i+j);
        }
    }
}