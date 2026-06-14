/*
 * Programa:
 * Sinopsis: Programa que permita saber si unmero introducido por teclado es primo.
 * 3 test a aplicar:
 * 1º- Afirmar si es o no divisible por algun numero desde 2 hasta n - 1
 * 2º- Afirmar si que N es primo dividiendo hasta N/2
 * 3º- Probar hasta la raiz cuadrada de 9
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 14/06/2026
 */
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool metodo1(int n);
bool metodo2(int n);
bool metodo3(int n);
int main(){
    int n;
    printf("Comprobar si un nuemro es primo: ");
    scanf("%d",&n);
    if (metodo1(n)==true && metodo2(n)==true && metodo3(n)==true) {
        printf("El numero %d es primo",n);
    }else printf("El numero %d no es primo.",n);
    return 0;
}

bool metodo1(int n) {
    for (int i = 2; i < n; ++i) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

bool metodo2(int n) {
    for (int i = 2; i <= n/2; ++i) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

bool metodo3(int n) {
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}