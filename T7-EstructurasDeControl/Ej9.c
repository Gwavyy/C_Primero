/*
 * Programa:
 * Sinopsis: Realizar un programa que genere el triángulo de Tartaglia. Cada elemento donde i es la fila y j la columna,
 * empezando a numerar por 0, cumple que es igual al producto de j elementos desde el i descendentemente partido el producto
 * de los j primeros números, esto es: el elemento de la columna 3 fila 4 es (4*3*2)/(1*2*3), el elemento de la columna 4 fila
 * 6 es (6*5*4*3)/(1*2*3*4), equivale a las combinaciones de 6 elementos tomados de 4 en 4.

 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 14/06/2026
 */
#include <stdio.h>
void mostrarTartaglia(int filas);
int calculo(int filas, int columnas);
int main(){
    int filas;
    printf("Introduce el numero de filas que quieres que tenga el tirangulo de tartaglia: ");
    scanf("%d",&filas);
    if (filas > 0) {
        mostrarTartaglia(filas);
    }else printf("Debe tener al menos una fila.");
    return 0;
}

void mostrarTartaglia(int filas) {
    int suma=1;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j <=i; ++j) {
            printf("%d",calculo(i,j));
        }
        printf("\n");
    }

}

int calculo(int filas, int columnas) {
    int numerador=1;
    int denominador=1;
    int resultado=0;

    for (int i = 1; i <= columnas; ++i) {
        numerador = numerador * (filas - i + 1);
        denominador = denominador * i;
    }

    resultado = numerador/denominador;
    return resultado;
}