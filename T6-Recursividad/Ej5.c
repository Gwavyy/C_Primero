/*
 * Programa:
 * Sinopsis: Funcion matemática recursiva que ofrezca el valor futuro de un fondo de inversion ligado a las cosechas de arroz.
 *           Por cada euro invertido se obtiene un 10% de rendimiento los siguientes meses pares y un 5% los impares.
 *           Cada final de mes se capitaliza la inversion, de forma que se obtiene el saldo inicial mas los intereses del mes. Los dos primeros meses se obrtiene un valor lineal de 1 y 2 euros respectivamente
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 11/06/2026
 */

#include <stdio.h>
double calculo(int meses);
int main(){
    double capitalInicial;
    int meses;
    printf("-------FONDO DE INVERSIONES-------\n");
    printf("Introduce el capital inicial: ");
    scanf("%f",&capitalInicial);
    printf("Introduce el numero de meses a ionvertir: ");
    scanf("%d",&meses);
    double valorPorEuro = calculo(meses);
    return 0;
}

double calculo(int meses) {
    double valor = 0;
    if (meses == 1) {
        valor = 1;
    }else if (meses == 2) {
        valor = 2;
    }else {
        if (meses%2==0) {
            valor = calculo(meses - 1)*1.10;
        }else {
            valor = calculo(meses - 1)*1.05 + calculo(meses - 2);
        }
    }
    return valor;
}

