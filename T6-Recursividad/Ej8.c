/*
 * Programa:
 * Sinopsis:
 *
 * Un capo mafioso ha inventado una estafa piramidal. Ha creado una sociedad de inversión, a la que pertenece
 * él solo en principio. Cada socio (pater) debe captar dos nuevos socios (sólo dos), a los que denomina “brazo derecho”
 * y “brazo izquierdo”. La cuota de entrada en la sociedad es de 5 euros al mes para cada nuevo socio. Cada socio antiguo
 * debe aportar a su “pater” 2,5 euros al mes más el 10% de su propia recaudación si se trata de su brazo derecho, o del
 * 8% si se trata de su brazo izquierdo. Generar un programa en C que calcule lo recaudado por el “capo” en un mes cualquiera,
 * conocido el número total de socios. Se supone que cada nuevo socio se convierte en “pater” en el mes siguiente, incorporando a sus dos “brazos”.
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 11/06/2026
 */
//Cada socio debe captar 2 socios mas
//Cuota de entrada de 5 euros al mes
//Cada socio da a su pater 2,5 euros al mes + 10% (brazo derecho) o 8%(brazo izquierdo)
//Calcular lo que genera el capo en un mes cualquiera
#include <stdio.h>
double calculoGanacias(int mes);
int main() {
    unsigned int mes;
    printf("Bienvenido jefe, introduce el mes del que quieras ver las ganacias: ");
    scanf("%u",&mes);
    printf("Ganancias: %.2f",calculoGanacias(mes));
}
double calculoGanacias(int mes) {
    double brazoIzquierdo=5,brazoDerecho=5,pater=0;
    if (mes == 1) {
        pater = 2.5 + brazoDerecho*0.10 + (2.5 + brazoIzquierdo*0.08);
    }else{
        pater = 2.5 + calculoGanacias(mes-1)*0.10 + (2.5 + calculoGanacias(mes - 1)*0.08);
    }
    return pater;
}