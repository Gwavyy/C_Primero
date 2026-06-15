/*
 * Programa: Pregunta de alternativas
 * Sinopsis: Usando los conceptos vistos en los cinco primeros temas en la asignatura
   (tipos de datos básicos, funciones y alternativas)

 * Completa el siguiente programa para que la salida por pantalla sea:
 *
 * Hoy no es monday, tengo cita con el médico el jueves y su cumpleaños es el sunday.
 * Define el tipo de datos enumerado para los días de la semana, el prototipo y la definición de la función enunciada,
 * que tiene que funcionar para los 7 casos, sin tocar el main. Las etiquetas TO DO, en inglés, indican donde falta código por hacer.
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 15/06/2026
 */

#include <stdio.h>

//TIPOS TODO
enum DiasSemana{LUN,MAR,MIE,JUE,VIE,SAB,DOM};
enum Idioma{ING,ESP};
//PROTOTIPOS
int escribeDia(enum DiasSemana dia, enum Idioma idioma);

int main() {
    printf("Hoy no es ");
    escribeDia(LUN, ING);
    printf(", tengo cita con el medico el ");
    escribeDia(JUE, ESP);
    printf(" y su cumpleaños es el ");
    escribeDia(DOM, ING);
    return 0;
}

/* función que escribe el nombre del día de la semana en inglés o español
@param dia Dia de la semana que se quiere mostrar
@param idioma Idioma en el que se quiere mostrar el dia
@return /salida el ordinal del día de la semana */
int escribeDia(enum DiasSemana dia, enum Idioma idioma) {
    if (idioma == ESP) {
        switch(dia) {
            case LUN:
                printf("lunes");
                break;
            case MAR:
                printf("martes");
                break;
            case MIE:
                printf("miercoles");
                break;
            case JUE:
                printf("jueves");
                break;
            case VIE:
                printf("viernes");
                break;
            case SAB:
                printf("sabado");
                break;
            case DOM:
                printf("domingo");
                break;
            default:
                printf("dia incorrecto");
                break;
        }
    }else if (idioma==ING){
        switch(dia) {
            case LUN:
                printf("monday");
                break;
            case MAR:
                printf("tuesday");
                break;
            case MIE:
                printf("wednesday");
                break;
            case JUE:
                printf("thursday");
                break;
            case VIE:
                printf("friday");
                break;
            case SAB:
                printf("saturday");
                break;
            case DOM:
                printf("sunday");
                break;
            default:
                printf("dia incorrecto");
                break;

        }
    }
    return 0;
}