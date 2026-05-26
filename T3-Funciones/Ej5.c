#include <stdio.h>
/*
 * Programa:Tabla datois astronomicos
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 26/05/2026
 */
const double PI = 3.1416;
double calcularLongitudOrbita(int radio);
void mostrarTabla();
enum Planetas{MERCURIO,VENUS,TIERRA,MARTE,JUPITER,SATURNO,URANO,NEPTUNO};

int main(){
    mostrarTabla();
    return 0;
}

void mostrarTabla(enum Planetas) {
    int radios[] = {39,72,100,152,520,954,1919,3006};
    char planetas[][10] = {"Mercurio","Venus","Tierra","Marte","Jupiter","Saturno","Urano","Neptuno"};
    printf("| Planeta | Radio orbital(UA) | Longitud de la orbita |\n");
    printf("|---------|-------------------|-----------------------|\n");
    for (int i = MERCURIO; i <= NEPTUNO; ++i) {
        printf("| %s | %d | %.2lf |\n",planetas[i],radios[i],calcularLongitudOrbita(radios[i]));;
    }

}

double calcularLongitudOrbita(int radio) {
    return 2 * PI * radio;
}