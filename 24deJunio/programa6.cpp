//trazo de matriz de ejemplo de teoria
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int i, j;
	int a[10][10];
	int valor = 0;

	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {
			a[i][j] = valor;
			valor = valor + 1;
		}
	}
	printf("la matriz original es: \n");
	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int k;
	int recorrido_l;
	int suma_parcial;
	for (k = 0; k<10;k ++) {
		recorrido_l = 9 - k;
		suma_parcial = 0;

		for (j = 9;j >= k;j--) {
			suma_parcial = suma_parcial + a[recorrido_l][j];
	
		}
		for (i = recorrido_l-1;i >= 0;i--) {
			suma_parcial = suma_parcial + a[i][k];
		}
		printf("\n suma_parcial es igual a: %d ", suma_parcial);

	}




	return 0;
}