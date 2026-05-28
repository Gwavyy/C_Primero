/*
 * Programa:
 * Sinopsis: Programa que valide una fecha:
 * Permite su lectura con una o varias sentencias para el dia, el mes y el año.
 * Detectar si la fecha es valdia o no
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 27/05/2026
 */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void leerFecha(int *dia, int *mes, int *ano);
bool calcularBisiesto(int ano);
bool esValida (int dia,int mes,int ano);
int main(){
    int dia,mes,ano;
    leerFecha(&dia,&mes,&ano);
    if (esValida(dia,mes,ano)) printf("Fecha valida\n");
    else printf("Fecha no valida\n");
    return 0;
}

void leerFecha(int *dia, int *mes, int *ano) {
    printf("Introduce el dia: ");
    scanf(" %d",dia);
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

bool esValida(int dia, int mes, int ano)
{
    if (ano <= 0 || ano >= 5000) {
        return false;
    }

    if (mes < 1 || mes > 12) {
        return false;
    }

    if (dia < 1) {
        return false;
    }

    if (mes == 1 && dia <= 31) return true;
    if (mes == 3 && dia <= 31) return true;
    if (mes == 5 && dia <= 31) return true;
    if (mes == 7 && dia <= 31) return true;
    if (mes == 8 && dia <= 31) return true;
    if (mes == 10 && dia <= 31) return true;
    if (mes == 12 && dia <= 31) return true;

    if (mes == 4 && dia <= 30) return true;
    if (mes == 6 && dia <= 30) return true;
    if (mes == 9 && dia <= 30) return true;
    if (mes == 11 && dia <= 30) return true;

    if (mes == 2 && calcularBisiesto(ano) && dia <= 29) return true;
    if (mes == 2 && !calcularBisiesto(ano) && dia <= 28) return true;

    return false;
}