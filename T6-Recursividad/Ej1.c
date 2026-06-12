/*
 * Programa:
 * Sinopsis: Funcion recursiva que imprima numero en base 1
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 28/05/2026
 */

#include <stdio.h>
void baseUno(unsigned int n);
int main(){
    unsigned int n;
    printf("Inrtroduce numero natural para representarlo en base 1: ");
    scanf("%d",&n);
    baseUno(n);
    return 0;
}

void baseUno(unsigned int n) {
    if (n>0) {
        printf("| ");
        n--;
        baseUno(n);
    }
}