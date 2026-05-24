#include <stdio.h>
#include <math.h>
/*
 * Programa:
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 24/05/2026
 */
int cuadrado(int n);
int cubo(int n);
int main(){
   int n;
   printf("Introduce un numero: ");
   scanf("%d",&n);
   printf("Cuadrado de %d: %d\n",n,cuadrado(n));
   printf("Cubo de %d: %d",n,cubo(n));
   return 0;
}

int cuadrado(int n) {
   return pow(n,2);
}

int cubo(int n) {
   return pow(n,3);
}