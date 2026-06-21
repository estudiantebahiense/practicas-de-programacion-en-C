

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrarMatriz(double m[4][5],int i, int j);
void zirtaMrartsom(double m[4][5],int f, int c);



int main(){

	srand((unsigned int)time(NULL));

	double a[4][5];
	int i, j;

	for (i = 0;i < 4;i++) {
		for (j = 0;j < 5;j++) {
			a[i][j] = ((rand() % 1001) - 500)/10.0;
		}
		printf("\n");
	}
	
		
    printf("la matriz original es: \n");
    mostrarMatriz(a, 4, 5);

	printf("\n y la matriz recorrida hacia atras es:..\n");
	zirtaMrartsom(a, 4, 5);


	

	return 0;
}

void mostrarMatriz(double z[4][5], int c, int d) {

	for (c = 0;c < 4;c++) {
		printf("|");
		for (d = 0; d < 5;d++) {
			printf("%6.1lf", z[c][d]);
		}
		printf("|");
		printf("\n");
	}
}

void zirtaMrartsom(double m[4][5], int f, int c) {
	for (f = 3;f >= 0;f--) {
		printf("|");
		for (c = 4; c >= 0;c--) {
			printf("%6.1lf ", m[f][c]);
		}
		printf("|\n");
	}
}


