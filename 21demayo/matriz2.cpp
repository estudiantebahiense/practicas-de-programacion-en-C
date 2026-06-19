

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    const int N = 10;
    const int M = 10;
    int a[N][M];
    int i, j;

    // 1. Cargamos la matriz exactamente igual que en el ejercicio anterior (0 a 99)
    int valor = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            a[i][j] = valor;
            valor = valor + 1;
        }
    }

    // --- AQUÍ EMPIEZA EL NUEVO EJERCICIO ---

    int suma_parcial = 0;
    int k; // k va a representar cada una de las 10 "flechas" o recorridos

    printf("\nIniciando los recorridos y sumas parciales:\n\n");

    for (k = 0; k < 10; k++) {

        // PARTE 1 DE LA FLECHA: Caminar horizontal de derecha a izquierda
        // La fila se queda fija abajo (9 - k) mientras la columna (j) retrocede
        i = (N - 1) - k;
        for (j = (M - 1) - k; j >= k; j--) {
            suma_parcial = suma_parcial + a[i][j];
        }

        // PARTE 2 DE LA FLECHA: Caminar vertical hacia arriba
        // La columna se queda fija a la izquierda (k) mientras la fila (i) sube
        j = k;
        for (i = (N - 2) - k; i >= k; i--) {
            suma_parcial = suma_parcial + a[i][j];
        }

        // Imprimir el resultado parcial después de terminar cada flecha
        printf("Suma parcial despues del recorrido %d: %d\n", k + 1, suma_parcial);
    }

    return 0;
}