/*
 * Programa:
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 26/05/2026
 */
#include <stdbool.h>
#include <stdio.h>
void leerEnteros(int* mes,int *ano);
bool calcularBisiesto(int ano);
void mostrarDias(int ano,int mes);
int main(){
    unsigned int mes,ano;
    leerEnteros(&mes,&ano);
    mostrarDias(ano,mes);
    return 0;
}
void leerEnteros(int *mes,int *ano) {
    printf("Introduce el mes: ");
    scanf(" %d",mes);
    printf("Introduce el año: ");
    scanf(" %d",ano);
}
bool calcularBisiesto(int ano) {
    if ((ano % 4==0 && ano %100 != 0) || ano % 400 == 0) {
        return true;
    }
        return false;
    }
void mostrarDias(unsigned int ano,unsigned int mes) {
    if (mes==1) printf("Enero tiene 31 dias\n");
    if (mes == 2 && calcularBisiesto(ano)) printf("Febrero tiene 29 dias\n");
    if (mes == 2 && !calcularBisiesto(ano)) printf("Febrero tiene 28 dias\n");
    if (mes==3) printf("Marzo tiene 31 dias\n");
    if (mes==4) printf("Abril tiene 30 dias\n");
    if (mes==5) printf("Mayo tiene 31 dias\n");
    if (mes==6) printf("Junio tiene 30 dias\n");
    if (mes==7) printf("Julio tiene 31 dias\n");
    if (mes==8) printf("Agosto tiene 31 dias\n");
    if (mes==9) printf("Septiembre tiene 30 dias\n");
    if (mes==10) printf("Octubre tiene 31 dias\n");
    if (mes==11) printf("Noviembre tiene 30 dias\n");
    if (mes==12) printf("Diciembre tiene 31 dias\n");

    if (mes < 1 || mes > 12) printf("Mes incorrecto\n");
}
