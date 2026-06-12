/*
 * Programa:
 * Sinopsis:
 * Escribe un programa que calcule el factorial de un nº entero leído desde el teclado dado.
 * El factorial de un número n se calcula tal que 0! = 1 y que n! = n * (n-1) * (n-2) * ... * 2 * 1.
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 11/06/2026
 */

#include <stdio.h>
int factorial(int n);
int main() {
    int n;
    printf("Introduce un numero entero para obtener su factorial: ");
    scanf("%d",&n);
    printf("Factorial de %d = %d",n,factorial(n));
}

int factorial(int n) {
    int resultado=1;
    for (int i = n; i > 0 ; i--) {
        resultado = resultado * i;
    }
    return resultado;
}
