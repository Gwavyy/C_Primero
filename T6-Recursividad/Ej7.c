/*
 * Programa:
 * Sinopsis: Calcular la sucesion de fibonacci hasta x
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 11/06/2026
 */

#include <stdio.h>
int fibonacci(int n);
int main() {
    unsigned int n;
    printf("----FIBONACCI----\n"
           "Introduce hasta donde quieres que se cacule: ");
    scanf("%u",&n);
    printf("%u",fibonacci(n));
}

int fibonacci(int n) {
    int valor = 0;
    if (n==0) valor = 1;
    else if (n==1) valor = 2;
    else {
        valor = fibonacci(n-1) + fibonacci(n-2);
    }
    return valor;
}
