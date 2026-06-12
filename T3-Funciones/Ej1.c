/* Programa:  
Descripcion:
1. Realizar un programa que realice las siguientes tareas. Debe separarse claramente en
funciones distintas las partes que deben leer valores, realizar cálculos y ofrecer
resultados. Guardar el código con el nombre ej3_1.c.
a) pide una cantidad en kbytes y muestra su equivalente en bytes
b) pide una cantidad en Mbytes y muestra su equivalente en bytes
c) pide una cantidad en horas y muestra su equivalente en segundos
d) pide una cantidad en áreas y muestra su equivalente en metros cuadrados
e) pide unas cantidades de Hectáreas, áreas y centiáreas y muestra su equivalente en
metros cuadrados.
f) pide unas cantidades de semanas, días, horas, minutos y segundos y muestra su
equivalente en segundos
g) pide una cantidades de segundos y muestra su equivalente en minutos y el resto
en segundos
h) pide una cantidad en pesetas y muestra su equivalente en euros
i) pide una cantidad en euros y muestra su equivalente en pesetas
Resultados: 
Autor: Guillermo Gomez
Version: 1.0        Fecha: mayo de 2026 */
#include <stdio.h>
int kbytesTobytes();
int main() {
    printf(" bytes: %d",kbytesTobytes());
}
int kbytesTobytes() {
    int kbytes;
    printf("Introduce Kbytes: ");
    scanf("%d",&kbytes);
    return kbytes*1000;
}