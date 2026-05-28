/*
 * Programa: Detector año bisiesto
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 26/05/2026
 */

#include <stdio.h>
int leerAno();
void calcularBisiesto(int ano);
int main(){
    int ano;
    ano = leerAno();
    calcularBisiesto(ano);
    return 0;
}
int leerAno() {
    int ano;
    printf("Introduce el año: ");
    scanf("%d",&ano);
    return ano;
}

void calcularBisiesto(int ano) {
    if ((ano % 4==0 && ano %100 != 0) || ano % 400 == 0) {
        printf("Año bisiesto\n");
    }else {
        printf("Año no bisiesto");
    }

}