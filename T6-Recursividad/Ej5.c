/*
 * Programa:
 * Sinopsis:
     * Se necesita una función matemática recursiva que ofrezca el valor futuro de un fondo de inversión
     * ligado a las cosechas de arroz. Por cada euro invertido, se obtiene como rendimiento cada mes par siguiente
     * (mes 2,4, 6...siguientes) un 10% del saldo disponible, y cada mes impar (mes 1,3,5...siguientes) un 5% del saldo
     * disponible más la suma de los saldos de los dos últimos meses. Cada final de mes se capitaliza la inversión, de
     * forma que se obtiene el saldo inicial más los intereses del mes. Los dos primeros meses se obtiene un valor lineal
     * de 1 y 2 euros respectivamente. Generar un programa en C que calcule el rendimiento de un capital pedido por teclado
     * a un número de meses que también debe solicitarse.
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
    scanf("%lf",&capitalInicial);
    printf("Introduce el numero de meses a invertir: ");
    scanf("%d",&meses);
    double valorPorEuro = calculo(meses) * capitalInicial;
    printf("Inversion: %.2f",valorPorEuro);
    return 0;
}

double calculo(int meses) {
    double valor=0;
    if (meses==1) {
        valor = 1;
    }
    else if (meses==2) {
        valor = 2;
    }
    else if (meses%2==0) {
        valor = calculo(meses-1) * 1.10;
    }
    else {
        valor = calculo(meses-1) * 1.05 + calculo(meses-2);
    }
    return valor;
}

