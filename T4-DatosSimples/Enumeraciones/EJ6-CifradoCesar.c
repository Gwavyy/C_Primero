
#include<stdio.h>
/*
 * Programa: Lee 5 caracteres , desplaza cada letra 3 posiciones ASCII y muestra los dos mensajes
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 14/05/2026
 */

int main(void){
    char original[6],cifrado[6];  //6 huecos: [0][1][2][3][4][5]
    for (int i = 0; i < 5; i++) {
        printf("Introduce el caracter %d/5: ",i + 1);
        scanf(" %c",&original[i]);
        cifrado[i] = original[i] + 3;
    }
    original[5]='\0';
    cifrado[5]='\0';
    printf("%s\n",original);
    printf("%s\n",cifrado);
}