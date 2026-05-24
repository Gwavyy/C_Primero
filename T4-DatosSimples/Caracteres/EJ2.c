#include<stdio.h>
/*
PIDE TEMPERATURA EN CELSIUS(FLOAT) Y CONVIERTA A FAHRENHEIT
 */
int main() {
    float celsius;
    printf("introduce temperatura en Celsius: ");
    scanf("%f",&celsius);
    float fahrenheit = ((celsius *9)/5) + 32;
    printf("%.2f", fahrenheit);
}