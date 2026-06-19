
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	int A[10][10];
	int n = 10, m = 10;
	int j, i, k = 0;
	int L;
	int suma_L;

	
	// creacion de la matriz 10x10
	for (i = 0;i < n; i++) {
		for (j = 0; j < m; j++) {
			A[i][j] = k;
			k = k + 1;
		}
	}

	for (i = 0;i < n;i++) {
		for (j = 0;j < m;j++) {
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	// recorrido de las "L"

	for (L = 0; L < 10; L++) { //recorrido de las filas
		suma_L = 0;
		i = 9 - L;
		for (j = 9; j >= L; j--) {

			suma_L = suma_L + A[i][j];
			//printf("%3d", A[i][j]); 

		}
		j = L;                 //recorrido de las columnas
		for (i = (9 - L)-1;i >= 0; i--) {
			suma_L = suma_L + A[i][j];
			//printf("%3d", A[i][j]);
		}
		printf(" Suma de este trayecto: %3d\n", suma_L);

	}

	return 0;
}