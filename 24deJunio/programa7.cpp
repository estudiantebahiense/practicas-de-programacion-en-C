
int suma_total = 0;

for (int k = 0; k < 10; k++) {
    int i_actual = 9 - k; // Esta es la FILA (i) donde arranca la flecha
    int suma_parcial = 0;

    // 1. Recorrido Horizontal: Camina por la fila actual (i_actual) de derecha a izquierda.
    // La columna (j) arranca en 9 y va retrocediendo hasta llegar a k.
    for (int j = 9; j >= k; j--) {
        suma_parcial = suma_parcial + matriz[i_actual][j];
    }

    // 2. Recorrido Vertical: Sube por la columna fija (j = k) hacia el techo.
    // La fila (i) arranca una posición más arriba de la esquina (i_actual - 1) y sube hasta 0.
    for (int i = i_actual - 1; i >= 0; i--) {
        suma_parcial = suma_parcial + matriz[i][k];
    }

    // Imprimimos el resultado de esta flecha [cite: 21]
    printf("Suma parcial del recorrido %d: %d\n", k, suma_parcial);

    // Sumamos al gran total
    suma_total = suma_total + suma_parcial;
}