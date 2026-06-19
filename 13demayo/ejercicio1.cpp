#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    char color;

    printf("ingrese la letra de su color favorito\n");
    scanf(" %c", &color);

    switch (color) {
    case 'a':
    case 'A':
        printf("AZUL\n");
        break;

    case 'r':
    case 'R':
        printf("ROJO\n");
        break;

    case 'b':
    case 'B':
        printf("BLANCO\n");
        break;


    case 'v':
    case 'V':
        printf("VERDE\n");
        break;

    default:
        printf("NEGRO\n");
        break;
    }
    

        

    return 0;
}