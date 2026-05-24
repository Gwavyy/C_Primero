#include <stdio.h>
#include<math.h>
#define PI 3.1416
/*
 * Programa:Pide radio mayor y menor y devuelve area de la circunferencia
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 11/05/2026
 */
int main(void){
    float rMayor,rMenor,area;
    printf("Introduce el radio mayor:");
    scanf("%f",&rMayor);
    printf("Introduce el radio menor:");
    scanf("%f",&rMenor);
    area = PI *(pow(rMayor,2)-pow(rMenor,2));
    printf("%.2f",area);
    return 0;
}