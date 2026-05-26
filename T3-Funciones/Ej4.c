#include <stdio.h>
/*
 * Programa:Tabla de multiplicar
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 26/05/2026
 */
int leerNumero();
void mostrarTabla(int n);
int main(){
    int n;
    n = leerNumero();
    mostrarTabla(n);
    return 0;
}

int leerNumero() {
    int n;
    printf("Introduce un numero para mostrar su tabla de multiplicar: ");
    scanf("%d",&n);
    return n;
}

int multiplicarTabla(int n,int multiplicador) {
    return n * multiplicador;
}

void mostrarTabla(int n) {
    for (int i = 1; i < 11; ++i) {
        printf("%d x %d = %d | ",n,i,multiplicarTabla(n,i));
    }
}