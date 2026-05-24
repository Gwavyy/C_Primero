#include <stdio.h>
enum CALENDARIO{ENERO=1,FEBRERO=2,MARZO=3,ABRIL=4,MAYO=5,JUNIO=6,JULIO=7,AGOSTO=8,SEPTIEMBRE=9,OCTUBRE=10,NOVIEMBRE=11,DICIEMBRE=12};
int main(void) {
    enum CALENDARIO miMes;

    miMes = OCTUBRE;
    miMes = miMes + 5;
    printf("%d",miMes);

    for (int i=1; i<14; i++) {
        miMes = i;
        printf("%d\n",miMes);
    };

};
