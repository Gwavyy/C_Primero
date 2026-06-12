/*
 * Programa: Natural a b1
 * Sinopsis: Hacer un programa que pida un número natural y llame a una función recursiva que
   imprima el número en binario.
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 06/06/2026
 */

#include <stdio.h>
void naturalToBinario(unsigned int n);
int main(){
    unsigned int n;
    printf("Introduce un nuemro natural para representarlo en binario: ");
    scanf("%u",&n);
    naturalToBinario(n);
    return 0;
}

void naturalToBinario(unsigned int n) {
    if (n>1) {
        naturalToBinario(n/2);
    }
        printf("%u", n % 2);

}
