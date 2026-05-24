#include<stdio.h>
/*
HACER UN PROGRAMA QUE PIDA UN CARACTER AL USUARIO
MOSTRAR:
        CARACTER INTRODUCIDO
        CODIGO ASCII EN DECIMAL
        SIGUIENTE CARACTER ASCII
        CARACTER ANTERIOR EN ASCII
*/
int main(){
        char c;
        do {
                printf("Introduce una letra: ");
                scanf("%c", &c);
        }while (c < 'A' || (c > 'Z' && c < 'a') || c > 'z');

        printf("%c\n",c);
        printf("%d\n",c);
        printf("%c\n",c+1);
        printf("%c\n",c-1);



}