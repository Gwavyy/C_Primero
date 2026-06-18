/*
 * Programa:
 * Sinopsis: Se define como factorial creciente reducido (FCR) de un número N de orden "k"
 * como el cálculo del factorial del número en orden creciente de valores teniendo en cuenta sólo
 * "k" factores. Por ejemplo, el factorial ordinario de 5 sería 5! = 1*2*3*4*5 = 120, mientras que el FCR de 5 en orden 2 sería FCR(5,2) = 1*2 = 2.
 *  Se solicita implementar y documentar dos funciones FCR_iter y FCR_rec que implementen el cálculo del FCR para en general cualquier valor.
 *  Debe observarse que el valor de "orden" debe ser a lo sumo N (en este caso es el cálculo del factorial ordinario).
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 18/06/2026
 */

#include <stdio.h>

unsigned int FCR_iter(unsigned int orden);
unsigned int FCR_rec(unsigned int orden);

int main(){
    unsigned int n,orden,calculo_ite = 0,calculo_rec = 0;
    printf("Introduce un numero: ");
    scanf("%d",&n);
    printf("Introduce el orden para calcular el factorial reducido del numero anterior: ");
    scanf("%d",&orden);
    if (orden>n) {
        printf("El orden no puede ser mayor que el numero a calcular.");
    }else {
        calculo_ite = FCR_iter(orden);
        calculo_rec = FCR_rec(orden);

        printf("Calculo segun la version iterativa: %d\n",calculo_ite);
        printf("Calculo segun la version recursiva: %d",calculo_rec);
    }
    return 0;
}

unsigned int FCR_iter(unsigned int orden){
    unsigned int calculo=1;
    for (int i = 1; i <= orden; ++i) {
        calculo = calculo * i;
    }
    return calculo;
}

unsigned int FCR_rec(unsigned int orden) {
    unsigned int calculo =1;
    if (orden == 1) {
        calculo = 1;
    }else if (orden == 2) {
        calculo = 2;
    }else {
        calculo = orden * FCR_iter(orden - 1);
    }
    return calculo;
}