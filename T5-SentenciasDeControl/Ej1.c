/*
 * Programa:
* Sinopsis: Escribir un programa en C que pida un carácter y nos diga si es:
    • un carácter de control
    • un dígito
    • una letra mayúscula
    • una letra típica del alfabeto españo
    • una letra típica del alfabeto
    • un carácter acentuado

    int isascii(int c) //Verdadero si c ∈[0..127]
    int ispunct(int c) //Verdadero si iscntrl(c) o isspace(c)
    int iscntrl(int c) //Verdadero si c ∈[0..31] ∪ {127}
    int isspace(int c) //Verdadero si c ∈{espacio, tabulador, retorno de carro, nueva línea, tabulador vertical, o salto de página}
    int isalnum(int c) //Verdadero si isdigit(c) o sialpha(c)
    int isdigit(int c) //Verdadero si c ∈ ['0'..'9']
    int isxdigit(int c) //Verdadero si c ∈ ['0'..'9'] ∪ ['A'..'F' ] ∪ [ 'a'..'f']
    int isalpha(int c) //Verdadero si c ∈ ['A'..'Z' ] ∪ [ 'a'..'z']
    int isupper(int c) //Verdadero si c ∈ ['A'..'Z' ]
    int islower(int c) //Verdadero si c ∈ [ 'a'..'z']
    int isprint(int c) //Verdadero si c ∈[32..126]
    int isgraph(int c) //Verdadero si c ∈[33..126]
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 26/05/2026
 */

#include <stdio.h>
#include <ctype.h>
char leerCaracter(char c);
int esCaractercontrol() ;
int main() {
    char c;

    printf("Introduce un caracter: ");
    scanf("%c", &c);

    if (iscntrl(c)) {
        printf("Es un caracter de control.\n");
    }

    if (isdigit(c)) {
        printf("Es un digito.\n");
    }

    if (isupper(c)) {
        printf("Es una mayuscula.\n");
    }

    if (c == 'ñ' || c == 'Ñ') {
        printf("Es un caracter tipico del alfabeto espanol.\n");
    }

    if (c == 'ç' || c == 'Ç') {
        printf("Es un caracter tipico del alfabeto frances.\n");
    }

    if (c == 'á' || c == 'é' || c == 'í' || c == 'ó' || c == 'ú' ||
        c == 'Á' || c == 'É' || c == 'Í' || c == 'Ó' || c == 'Ú' ||
        c == 'à' || c == 'è' || c == 'ù' ||
        c == 'À' || c == 'È' || c == 'Ù') {
        printf("Es un caracter acentuado.\n");
        }

    return 0;
}
