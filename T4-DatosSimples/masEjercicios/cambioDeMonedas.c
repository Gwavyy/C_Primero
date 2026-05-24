/*

Haz un programa que:

Lea 5 caracteres
Desplace cada letra +3 posiciones ASCII
Muestre mensaje original y cifrado

*/
#include <stdio.h>
#include <string.h>
int main() {
    char c1[6],c2[6];


    for (int i=0; i<5 ; i++) {
        printf("Introduce  caracter para cifrarlo:\n");
        scanf(" %c",&c1[i]);
        c2[i] = c1[i] +3;
    }

    c1[5] = '\0';
    c2[5] = '\0';


    printf("Original: %s\n",c1);
    printf("Ecriptado: %s",c2);

}
