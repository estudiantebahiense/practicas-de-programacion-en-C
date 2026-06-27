//proyecto: matriz hecha con terminos de sumatoria recursiva y traza
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void sumatoria(double arreglo[100]);
void cargar_matriz(double arreglo[100], double matriz[10][10]);

void imprimir_matriz(double matriz[10][10]);

int main(void) {

	double arreglo[100];
	double matriz[10][10];
	int j;

	sumatoria(arreglo);

/*prueba de los prmieros 4 terminos
	for (j = 0;j < 4;j++) { 
		printf("arreglo[%d]=%lf\n", j, arreglo[j]);
	} */

	printf("\n arreglo[46] = %.4lf ", arreglo[46]); // verificacion con el 46 =0;

	cargar_matriz(arreglo, matriz);
	printf("\n");
	
	imprimir_matriz(matriz);

	return 0;
}

void sumatoria(double arreglo[100]) {

	static int i = 0;

	if (i == 100) {
		i = 0;
		return;
	}

	double valor_i = i + 1;

	if (valor_i == 47) {

		arreglo[i] = 0.0;

	}
	else {
		arreglo[i] = (valor_i + 1) / (valor_i - 47);
	}

	i = i + 1;
	sumatoria(arreglo);

	}

void cargar_matriz(double arreglo[100], double matriz[10][10]) {

	int i, j;
	int k = 0;

	int min_i = 0;
	int max_i = 9;
	int min_j = 0;
	int max_j = 9;

	while (k < 100) {

		//la flecha q sube por la columna izqueirda
		for (i = max_i; i >= min_i; i--) {
			matriz[i][min_j] = arreglo[k];
			k = k + 1;

		}
		min_j = min_j + 1;


		//flecha hacia la derecha de la fila de arriba
		for (j = min_j;j <= max_j;j++) {
			matriz[min_i][j] = arreglo[k];
			k = k + 1;
		}
		min_i = min_i + 1;

		// flecha abajo desde la derecha

		for (i = min_i;i <= max_i;i++) {
			matriz[i][max_j] = arreglo[k];
			k = k + 1;

		}
		max_j = max_j - 1;

		//flecha izquierda por abajo

		for (j = max_j;j >= min_j;j--) {
			matriz[max_i][j] = arreglo[k];
			k = k + 1;
		}

		max_i = max_i - 1;


	}

}

void imprimir_matriz(double matriz[10][10]) {

	int i, j;

	printf("\nLa matriz impresa es:   \n\n");

	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {
			printf("%7.3lf |",matriz[i][j]);
		}
		printf("\n");
	}
}