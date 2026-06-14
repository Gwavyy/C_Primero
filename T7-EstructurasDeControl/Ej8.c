/*
 * Programa:
 * Sinopsis: Realiza un programa que multiplique dos nºs enteros mediante el algoritmo de la multiplicación rusa.
 * El algoritmo de la multiplicación rusa multiplica por 2 el multiplicando y divide por 2 el multiplicador hasta que el multiplicador toma el valor 1.

 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 14/06/2026
 */
#include <stdio.h>
int multiplicacionRusa(int n1,int n2);
int main(){
    int n1,n2;
    printf("Intorduce numero: ");
    scanf("%d",&n1);
    printf("Intorduce numero: ");
    scanf("%d",&n2);
    printf("%d",multiplicacionRusa(n1,n2));
    return 0;
}

int multiplicacionRusa(int n1,int n2) {
    int sumafinal=0;
    while (n2>0) {
        if (n2%2 != 0) {
            sumafinal = sumafinal + n1;
        }
        n1 = n1 * 2;
        n2 = n2 / 2;
    }
    return sumafinal;
}
