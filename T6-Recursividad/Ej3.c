/*
 * Programa:
 * Sinopsis: Hacer un programa que pida un número con decimales y otro natural y llame a una
  función recursiva que eleve el primero al segundo (con tantas multiplicaciones como el
  exponente)
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 08/06/2026
 */

#include <stdio.h>
float elevar(float n1, int n2);
int main(){
    float n1;
    int n2;
    printf("Introduce dos numeros para elevar el primero al segundo\n"
           "Primer numero(con decimales): ");
    scanf("%f",&n1);
    printf("Segundo numero(entero): ");
    scanf("%d",&n2);
    printf("Resultado: %.2f",elevar(n1,n2));
    return 0;
}

float elevar(float n1, int n2) {
    if (n2==0) {
       return 1;
    }
    return n1 * elevar(n1,n2 -1);
}
