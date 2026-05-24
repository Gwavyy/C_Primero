/* Programa:  
Descripcion: Haz un programa que:

Pida dos números reales
Muestre:
suma
resta
multiplicación
división
potencia
raíz cuadrada del primero
Resultados: 
Autor: Guillermo Gomez
Version: 1.0        Fecha: mayo de 2026 */
#include <stdio.h>
#include <math.h>
int main () {
    int opcion;
    float n1,n2;

    do {
        printf("----------CALCULADORA CIENTIFICA----------\n"
           "1. Suma\n"
           "2. Resta\n"
           "3. Multiplica\n"
           "4. Division\n"
           "5. Raiz Cuadrada\n"
           "6. Salir\n");
        scanf(" %d",&opcion);
        switch (opcion) {
            case 1:
                printf("Introduce sumando 1: ");
                scanf(" %f",&n1);
                printf("Introduce sumando 2: ");
                scanf(" %f",&n2);
                printf("%.2f + %.2f = %.2f\n",n1,n2,n1+n2);
                break;
            case 2:
                printf("Introduce restaurando 1: ");
                scanf(" %f",&n1);
                printf("Introduce restaurando 2: ");
                scanf(" %f",&n2);
                printf("%.2f - %.2f = %.2f\n",n1,n2,n1-n2);
                break;
            case 3:
                printf("Introduce multiplicando 1: ");
                scanf(" %f",&n1);
                printf("Introduce multiplicando 2: ");
                scanf(" %f",&n2);
                printf("%.2f * %.2f = %.2f\n",n1,n2,n1*n2);
                break;
            case 4:
                printf("Introduce division 1: ");
                scanf(" %f",&n1);
                printf("Introduce division 2: ");
                scanf(" %f",&n2);
                printf("%.2f / %.2f = %.2f\n",n1,n2,n1/n2);
                break;
            case 5:
                printf("Introduce raiz Cuadrada: ");
                scanf(" %f",&n1);
                printf("Raiz cuadrada de %.2f = %.2f\n",n1,sqrt(n1));
                break;
            case 6:
                printf("Hasta luego!");
                return 0;
            default:
                printf("Opcion no valida\n");
                break;
        }
    }while (opcion!=0);

}