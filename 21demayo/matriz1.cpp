
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) { 

    const int N = 10;
    const int M = 10;
    int a[N][M];
    int i, j;

    int valor = 0;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {

            // Guarda el valor actual y despues le suma 1 hasta 99;
            a[i][j] = valor;
            valor = valor + 1;

        }
    }
    // para ver la matriz
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }



	return 0;
}