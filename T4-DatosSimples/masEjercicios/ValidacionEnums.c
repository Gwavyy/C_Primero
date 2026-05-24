/* Programa:  
Descripcion: Ejercicio 9 — Validación con enums

Programa para encuesta:

Guardar:

sexo
estado civil
edad
situación laboral
Resultados: 
Autor: Guillermo Gomez
Version: 1.0        Fecha: mayo de 2026 */
#include <stdio.h>
int main() {
    enum sexo{HOMBRE,MUJER};
    enum estadoCivil{SOLTERO,CASADO,DIVORCIADO};
    enum sitacionLaboral{EN_PARO,EMPLEADO,ESTUDIANTE,NINI,JUBILADO,DESEMPLEADO};
    int edad,opcion1,opcion2,opcion3;
    printf("---------------REGISTRO CIVIL---------------\n"
           "INTRODUCE SEXO\n"
           "1. HOMBRE\n"
           "2. MUJER\n");
    scanf(" %d",&opcion1);
    printf("Introduce edad: ");
    scanf(" %d",&edad);
    printf("INTRODUCE ESTADO CIVIL\n"
           "1. Soltero\n"
           "2. Casado\n"
           "3. Divorciado\n");
    scanf(" %d",&opcion2);
    printf("Introduce sitacion laboral:\n"
           "1. EN_PARO\n"
           "2. EMPLEADO\n"
           "3. ESTUDIANTE\n"
           "4. NINI\n"
           "5. JUBILADO\n"
           "6. DESEMPLEADO\n");

       scanf(" %d",&opcion3);

       //if (edad<19 && opcion3 == 6)
}