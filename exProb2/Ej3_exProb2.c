/*
 * Programa:
 * Sinopsis: Un fondo de inversión ofrece hasta un 8% de rendimiento del capital invertido,
 * con algunas peculiaridades.
 *
 * - El capital se debe invertir por años completos en un plazo de 10 años.
 * - El primer año no aporta rendimiento, y el segundo y tercer año aporta un 1,5% anual.
 * - Del cuarto al décimo el interés se incrementa en un 1% anual; es decir,
 *   2,5% para el cuarto año, 3,5% para el quinto y finalmente un 8% para el décimo.
 * - No puede retirarse la inversión antes del tercer año y del tercero al noveno
 *   puede retirarse, perdiendo el interés de ese año.
 * - Finalmente, el capital resultante se retira tras el décimo año.
 *
 * Como se describe, el capital obtenido tras cada año se reinvierte con los intereses
 * obtenidos, generando una "bola" que capitaliza de manera compuesta
 * (los intereses de un período generan también intereses en el período siguiente).
 *
 * Se pide desarrollar y documentar una función recursiva en C que permita calcular
 * el rendimiento del fondo en cada año, teniendo en cuenta si se mantiene la inversión
 * o si se desea reintegrar la suma obtenida y por tanto rescatar el fondo.
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 15/06/2026
 */

#include <stdio.h>

double rendimientoFondo(unsigned int inversion,unsigned int ano,char seRetira);

// ofrece el rendimiento del fondo tras el año que se considere,
// teniendo en cuenta si se retira o se mantiene
// @param
// @return

int main() {
    printf("El rendimiento tras el primer año de %u es : %.0f\n", 1000, rendimientoFondo(1000,1,'N'));
    printf("El rendimiento tras el segundo año de %u sin retirar es : %.0f\n", 1000, rendimientoFondo(1000,2,'N'));
    printf("El rendimiento tras el segundo año de %u retirando el fondo es : %.0f\n", 1000, rendimientoFondo(1000,2,'S'));

    return 0;
}

/*
 * Salida esperada:
 *
 * El rendimiento tras el primer año de 1000 es : 1000
 * El rendimiento tras el segundo año sin retirar de 1000 es : 1050
 * El rendimiento tras el segundo año retirando el fondo de 1000 es : 0
 */
double rendimientoFondo(unsigned int inversion, unsigned int ano, char seRetira) {
    double ganancias;
    double porcentaje;

    if (ano == 1) {
        return inversion;
    }

    if (seRetira == 'S' && ano < 3) {
        return 0;
    }

    ganancias = rendimientoFondo(inversion, ano - 1, 'N');

    if (seRetira == 'S') {
        return ganancias;
    }

    if (ano == 2 || ano == 3) {
        porcentaje = 1.015;
    } else if (ano == 10) {
        porcentaje = 1.08;
    } else {
        porcentaje = 1.0 + ((ano - 2) + 0.5) / 100.0;
    }

    ganancias = ganancias * porcentaje;

    return ganancias;
}