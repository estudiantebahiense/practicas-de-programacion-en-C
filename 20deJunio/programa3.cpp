
//---ALGORITMO SUMA DE DOS MATRICES----//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int filas, columnas;
	int i, j;

	printf("ingrese el numero de las filas y columnas que desea separadas por enter:\n");
	scanf("%d%d", &filas, &columnas);

	int m1[30][30], m2[30][30], m3[30][30]; //se declaran matrices mas grandes sino no se puede en VS


	printf("ingrese los elementos de M1:\n");
	for (i = 0;i < filas;i++) {
		for (j = 0; j < columnas; j++) {
			scanf("%d",&m1[i][j]);
		}
	}
	printf("ingrese los elementos de M2:\n");
	for (i = 0;i < filas;i++) {
		for (j = 0; j < columnas; j++) {
			scanf("%d", &m2[i][j]);
		}
	}
	

	for (i = 0;i < filas;i++) {
		for (j = 0; j < columnas; j++) {
			m3[i][j]= m1[i][j] + m2[i][j];
		}
	}
	printf("\n La suma de las dos matrices es : \n");
	for (i = 0;i < filas;i++) {
		for (j = 0; j < columnas; j++) {
			printf("%4d", m3[i][j]);
		}
		printf("\n");
	}

	return 0;
}