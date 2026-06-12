/* Programa:
 * Descripcion:
 * Un cultivo de bacterias crece en su población de forma exponencial (y(k) = y(k) -1 + e^1) durante los primeros x=10
 * minutos de vida y decrece desde el minuto 11 respecto a otra función formulada como (y(k) = y(k)-1e^-1/x).
 * Crear una función recursiva que ofrezca la población esperada de bacterias a un minuto solicitado al usuario.
 * Nota: en algún momento la colonia de bacterias se extingue.
 * Resultados:
 * Autor: Guillermo Gomez
 * Version: 1.0
 * Fecha: mayo de 2026
 *
 */
#include <stdio.h>
#include <math.h>
#define poblacionInicial 100
unsigned int calculoPoblacion(unsigned int minutos);
int main() {
    unsigned int minutos,poblacion;
    printf("Introduce el minuto en el que quieras comprobar la poblacion de bacterias: ");
    scanf("%u",&minutos);
    poblacion = calculoPoblacion(minutos);
    if (poblacion == 0) printf("La poblacion en el minuto %u se ha extincto.",minutos);
    else printf("Poblacion en el minuto %u: %u",minutos,poblacion);
}

unsigned int calculoPoblacion(unsigned int minutos) {
    unsigned int poblacionCalculada = 0;
    if (minutos == 1) {
        poblacionCalculada = poblacionInicial;
    }else if (minutos > 1 && minutos < 11) {
        poblacionCalculada = calculoPoblacion(minutos-1) + exp(minutos);
    }else {
        poblacionCalculada = calculoPoblacion(minutos - 1)*exp(-1.0/minutos);
    }
    return poblacionCalculada;
}