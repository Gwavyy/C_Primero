/*
 * Programa:
 * Sinopsis: Define una función, de cálculo, en C, que:
 * - reciba un valor natural que represente una cantidad en segundos
 * - calcule y devuelva el total de horas, minutos o décimas de segundos de manera separada según se indique
 *
 * Si se ejecuta esa función con el siguiente programa, la salida por pantalla debe ser la de la tabla de abajo.
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 15/06/2026
 */
#include <stdio.h>
unsigned int calculaFracciones(char magnitud,unsigned int segundos);
int main() {
    printf("%u segundos son %u horas \n", 8000, calculaFracciones('h', 8000));
    printf("%u segundos son %u horas \n", 1500, calculaFracciones('h', 1500));
    printf("%u segundos son %u minutos\n", 3200, calculaFracciones('m', 3200));
    printf("%u segundos son %u décimas\n", 357, calculaFracciones('d', 357));

    return 0;
}

/*
 * Salida esperada:
 *
 * 8000 segundos son 2 horas
 * 1500 segundos son 0 horas
 * 3200 segundos son 53 minutos
 * 357 segundos son 3570 décimas
 */

unsigned int calculaFracciones(char magnitud,unsigned int segundos){
    unsigned int decimas = 10;
    unsigned int horas = 3600;
    unsigned int minutos = 60;
    unsigned int conversion = 0;
    switch (magnitud) {
        case 'h':
            conversion = segundos/horas;
        break;
        case 'm':
            conversion = segundos/minutos;
        break;
        case 'd':
            conversion = segundos*decimas;
        break;
        default:
            printf("La magnuituds introducida es incorrecta.");
        break;
    }
    return  conversion;
}