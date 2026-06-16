/*
 * Programa:
 * Sinopsis:
 *
 * @autor: Guillermo Gomez
 * @version: 1.0
 * @date: 16/06/2026
 */
#include<stdio.h>
#define MENU "Menu:...\n Introduce una opcion"
int main(){

        char op;
        unsigned int cmp=0;
        do{
            printf(MENU);
            op = getchar();
            switch(op){
                case'1': printf("Ejecuta el caso 1\n");
                cmp++;
                break;
                case'2': printf("Ejecuta el caso 2\n");
                cmp++;
                break;
                case'3': printf("Ejecuta el caso 3\n");
                cmp++;
                break;
                case'4': printf("Ejecuta el caso 4\n");
                cmp++;
                break;
                case' ':
                case'\n': cmp++;
                case'0': cmp++;
                break;
                default: printf("error");
            }
        }while(op != '0');
        printf("Caso 0: Salir cmp: %u \n", cmp);
}