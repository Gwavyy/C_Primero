#include <stdio.h>
enum Moneda{EURO = 1,USD = 2,GBP = 3,JPY = 4};
/*
 * Programa:
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 11/05/2026
 */

int main(void)
{
    enum Moneda monedaOrigen,monedaDestino;
    double cantidad,euros = 0,resultado = 0;
    do {
        printf("ELIGE MONEDA ORIGEN:\n"
               "1. EUR\n"
               "2. USD\n"
               "3. GBP\n"
               "4. JPY\n");

        scanf("%d",&monedaOrigen);
        printf("ELIGE MONEDA DESTINO:\n"
               "1. EUR\n"
               "2. USD\n"
               "3. GBP\n"
               "4. JPY\n");
        scanf("%d",&monedaDestino);
        printf("Cantidad: ");
        scanf("%lf",&cantidad);
        switch (monedaOrigen) {
            case EURO:
                euros = cantidad;
                break;
            case USD:
                euros = cantidad/1.1416;
                break;
            case GBP:
                euros = cantidad/0.8860;
                break;
            case JPY:
                euros = cantidad / 124.3400;
                break;
            default:
                printf("Opcion fuera de rango.");
                break;
        }

        switch (monedaDestino) {
            case EURO:
                resultado = euros;
            break;
            case USD:
                resultado = euros * 1.1416;
            break;
            case GBP:
                resultado = euros * 0.8860;
            break;
            case JPY:
                resultado = euros * 124.3400;
            break;
            default:
                printf("Opcion fuera de rango.");
            break;
        }
        printf("Conversion %.2f son %.2f\n",cantidad,resultado);
    } while (monedaOrigen < 1 || monedaOrigen > 4 ||
         monedaDestino < 1 || monedaDestino > 4);
    return 0;
}