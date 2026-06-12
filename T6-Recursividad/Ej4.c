/*
 * Programa:
 * Sinopsis: Hacer un programa que pida dos numeros naturales y muestre el resultado de una funcion
 * recursiva que calcula las combinaciones de tantos elementos como reperesente el primer numero tomados tantas veces como diga el segundo

 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 11/06/2026
 */

int main(){
    
    return 0;
}

int combinaciones(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }

    return combinaciones(n - 1, k - 1) + combinaciones(n - 1, k);
}