
//usar funciones para hacer valor minimo y darle forma a la matriz

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mostrarMatriz(double m[4][3], int filas, int columnas) {
	int i, j;

	for (i = 0;i < 4; i++) {
		printf("|");
		for (j = 0;j < 3;j++) {
			printf("%4.1lf ", m[i][j]);
		}
		printf("|");
		printf("\n");
	}
}

double numeroMinimo(double matriz[4][3], int filas, int columnas) {
	double min = matriz[0][0];
	int i, j;

	for (i = 0;i < 4;i++) {
		for (j = 0;j < 3;j++) {
			if (min > matriz[i][j]) {
				min = matriz[i][j];
			}
		}
	}
	return min;
}

int main() {
	double a[4][3] = { {1.2,0.5,7.3},{3.3,5.1,0.9},{3.4,1.2,4.4},{1.0,9.1,7.8} };
	int x, y;

	printf("\n La matriz es: \n\n");

	mostrarMatriz(a, 4, 3);

	printf("el valor minimo de la matriz es: %.2lf\n", numeroMinimo(a, 4, 3));
	
	return 0;
}