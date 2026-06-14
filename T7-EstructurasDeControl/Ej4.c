/*
 * Programa:
 * Sinopsis:
 * Escribe un programa en C que calcule las combinaciones de m elementos tomados de n en n.
 * Se calcula como el número combinatorio m sobre n, como el factorial de m dividido entre el
 * producto del factorial de n y el factorial de la diferencia de m - n
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 11/06/2026
 */
#include <stdio.h>
int factorial(int m);
double calculoFinal(int factM,int factN,int factResta);
int main() {
    int m,n;
    printf("----CALCULO COMBINACIONES DE M ELEMENTOS----\n"
           "Introduce el primer parametro(N elementos del grupo a combinar: ");
    scanf("%d",&m);
    printf("Introduce de elementos que quieres combinar: ");
    scanf("%d",&n);
    int factorialM = factorial(m);
    int factorialN = factorial(n);
    int factorialResta = factorial(m-n);
    if (m>=n) {
        printf("Resultado: %.2f",calculoFinal(factorialM,factorialN,factorialResta));
    }else {
        printf("El numero de elementos a combinar no puede ser mayor que el grupo total.");
    }
}

int factorial(int m) { //El factorial de un número n se calcula tal que 0! = 1 y que n! = n * (n-1) * (n-2) * ... * 2 * 1.
    int resultadoFactorial = 1;
    for (int i = m; i > 0; i--) {
        resultadoFactorial = resultadoFactorial * i;
    }
    return resultadoFactorial;
}

double calculoFinal(int factM,int factN,int factResta) {
    double combinacion=(double)factM/(factN * factResta);
    return combinacion;
}
