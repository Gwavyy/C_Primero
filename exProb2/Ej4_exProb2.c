/*
 * Programa:
 * Sinopsis:
 * Dado el email de un alumno, por ejemplo abc1234@alu.ubu.es, se conoce como ordinal
 * al número de 4 dígitos que antecede al dominio, en el caso del ejemplo, 1234.
 *
 * Se define una función CRC como la suma aritmética de los resultados parciales de aplicar
 * a cada dígito expresado en binario una función XOR con la máscara 9, expresada en binario.
 *
 * Para el ejemplo, se trata de sumar los valores 8 + 11 + 10 + 13 = 42,
 * que son los resultados en decimal de los XOR aplicados; en este caso, el valor CRC es 42.
 *
 * Se solicita diseñar y documentar una función que reciba el ordinal de tu propio email
 * y obtenga el valor del CRC.
 *
 * Debes aportar en el comentario normalizado de la función, y como comentario al final,
 * el valor del CRC resultante para tu caso.
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 15/06/2026
 */

#include <iso646.h>
#include <stdio.h>
unsigned int ordinalToBinario(int ordinal);
int main(){
    printf("Valor CRC de ggm1017@alu.ubu.es: ");
    printf("%d",ordinalToBinario(1017));
}
unsigned int ordinalToBinario(int ordinal) {
    int separado;
    unsigned int crc=0;
    for (int i = 0; i < 4; ++i) {
        separado = ordinal%10;
        crc = crc + (separado^9);
        ordinal = ordinal/10;
    }
    return crc;
}
