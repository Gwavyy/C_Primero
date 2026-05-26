#include <stdio.h>
/*
 * Programa:
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 25/05/2026
 */
char caracterASCII(int n);
int cuadrado(int n);
int cubo(int n);
void esPar(int n);
void mostrarResultados(int n);
int leerNumero();
int main(){
    int numero;
    numero = leerNumero();
    mostrarResultados(numero);
    return 0;
}

char caracterASCII(int n) {
    return n;
}

int cuadrado(int n) {
    return n * n;
}

int cubo(int n) {
    return n*n*n;
}
void esPar(int n) {
    if (n%2==0) printf("El %d es un numero par",n);
    else printf("El %d es un numero impar",n);
}
int leerNumero() {
    int n;
    do {
        printf("Introduce un numero para ver sus caracteristicas: \n");
        scanf(" %d",&n);
        if (n<32 || n>128) {
            printf("Numero no valido, debe estar entre los valores 32 y 128\n");
        }
    }while (n<32 || n>128);
    return n;
}
void mostrarResultados(int n) {
    printf("Sacando datos...\n");
    printf("El caracter ASCII correspondiente al %d es el %c\n",n,caracterASCII(n));
    printf("El cuadrado de %d es %d\n",n,cuadrado(n));
    printf("EL cubo de %d es %d.\n",n,cubo(n));
    esPar(n);
}