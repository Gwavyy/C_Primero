/*
 * Programa:
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 28/05/2026
 */
#include <stdio.h>
#include <stdbool.h>

int leerSenales()
{
    int senales;

    printf("Introduce el conjunto de senales entre 0 y 255: ");
    scanf("%d", &senales);

    return senales;
}

bool hayAlarma(int senales)
{
    if ((senales & 7) == 0) return true;       // 00000111
    if ((senales & 14) == 0) return true;      // 00001110
    if ((senales & 28) == 0) return true;      // 00011100
    if ((senales & 56) == 0) return true;      // 00111000
    if ((senales & 112) == 0) return true;     // 01110000
    if ((senales & 224) == 0) return true;     // 11100000

    return false;
}

int main()
{
    int senales;

    senales = leerSenales();

    if (hayAlarma(senales)) {
        printf("Debe dispararse la alarma\n");
    } else {
        printf("No debe dispararse la alarma\n");
    }

    return 0;
}