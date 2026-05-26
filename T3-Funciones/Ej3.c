/*
 * Programa: Perimetro y area de un cuadrado
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 26/05/2026
 */

#include <stdio.h>
#include <math.h>
const double PI = 3.1416;
double areaCuadrado(double lado);
double perimetroCuadrado(double lado);
double longitudCircunferenciaInscrita(double lado);
double romboInscrito(double lado);
double areaRomboInscrito(double lado);
double superficieCirculoInscrito(double lado);
int main(){
    double lado;
    unsigned int opcion;
    printf("Introduce el valor de un lado del cuadrado: ");
    scanf("%lf",&lado);
    do {
        printf("\n---OPCIONES---\n"
               "1. Area del cuadrado(cm)\n"
               "2. Perimetro del cuadrado\n"
               "3. Superficie del circulo inscrito\n"
               "4. Longitud de la circunferencia inscrita\n"
               "5. Perimetro del rombo inscrito\n"
               "6. Area del rombo inscrito\n"
               "0. Salir.\n");
        scanf(" %u",&opcion);
        switch (opcion) {
            case 1:
                printf("El area de un cuadrado de lado %.2lf cm son %.2lf cm2.\n",lado,areaCuadrado(lado));
                break;
            case 2:
                printf("El perimetro de un cuadrado de lado %.2lf cm son %.2lf cm.\n",lado,perimetroCuadrado(lado));
                break;
            case 3:
                printf("Superficie del circulo inscrito: %.2lf cm2\n", superficieCirculoInscrito(lado));
                break;
            case 4:
                printf("La longitud de la circunferencia inscrita del cuadrado de lado %.2lf es %.2lf.\n",lado,longitudCircunferenciaInscrita(lado));
                break;
            case 5:
                printf("El perimetro del rombo inscrito del cuadrado de lado %.2lf es %.2lf.\n",lado,romboInscrito(lado));
                break;
            case 6:
                printf("El area del rombo inscrito del cuadrado de lado %.2lf es %.2lf.\n",lado,romboInscrito(lado));
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default: printf("Opcion invalida\n");
        }

    }while (opcion!=0);
    return 0;
}

double areaCuadrado(double lado) {
    return lado * lado;
}

double perimetroCuadrado(double lado) {
    return lado*4;
}
double superficieCirculoInscrito(double lado) {
    double radio;

    radio = lado / 2;

    return PI * radio * radio;
}
double longitudCircunferenciaInscrita(double lado) {
    double radio;

    radio = lado / 2;

    return 2 * PI * radio;
}

double romboInscrito(double lado) {
    return 2 * sqrt(2) * lado;
}

double areaRomboInscrito(double lado) {
    return lado * lado / 2;
}