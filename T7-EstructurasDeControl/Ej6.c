/*
 * Programa:
 * Sinopsis: Introducir un nº por teclado y escribir todos los nuemros perfectos comprendidos entre el 1 y dicho numero.
 * Un nº perfecto es aquel igual a la suma de todos sus divisores excepto el mismo. Ej: 6 = 3+2+1
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 14/06/2026
 */

#include <stdbool.h>
#include <stdio.h>

bool isPerfect(int n);
int main(){
    int n;
    printf("Introduce un numero N para saber cuantos numero de 1 a N son perfectos: ");
    scanf("%d",&n);
    for (int i = 1; i < n; ++i) {
        if (isPerfect(i) == true) {
            printf("%d\n",i);
        }
    }
    return 0;
}

bool isPerfect(int n) {
    int sumaTotal=0;
    for (int i = 1; i < n; ++i) {
        if (n%i==0) {
            sumaTotal += i;
        }
    }
    if (sumaTotal == n) {
        return true;
    }return false;
}
