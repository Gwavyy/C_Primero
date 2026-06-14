/*
 * Programa:
 * Sinopsis: Calcular el m.c.d mediante el algoritmo de euclides
 * Si (A > 0 y B > 0)
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 14/06/2026
 */

#include <stdio.h>

int calculoMCD(int n1,int n2);
int main(){
    int n1,n2;
    printf("Calculo del m.c.d a traves de euclides.\n"
           "Introduce primer parametro: ");
    scanf("%d",&n1);
    printf("introduce el segundo parametro: ");
    scanf("%d",&n2);
    if (n1>0 && n2>0) {
        printf("%d",calculoMCD(n1,n2));
    }
    else printf("Los nuemero deben ser mayores que 0");
    return 0;
}

int calculoMCD(int n1,int n2) {
    int a;
    while (n2!=0) {
        a = n1%n2;
        n1 = n2;
        n2 = a;
    }
    return n1;
}
