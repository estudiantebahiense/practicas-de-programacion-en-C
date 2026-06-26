//recorrido de una matriz

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

	int i = 0, j = 0;
	int valor = 0;
	int a[10][10];

	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {

			a[i][j] = valor;
			valor = valor + 1;
		}

	}
	printf("La matriz original es: \n");


	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {

			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("El nuevo recorrido de la matriz es: \n");

	//printf("La diagonal principal es:\n");
	for (i = 0; i <10; i++) {
		for (j = 0;j <10; j++) {
			if (i==0 ||j==0 ||i==9 ||j==9) {
				printf("%4d", a[i][j]);

			}
			
			

		}
	}
	printf("\n");

	printf("\nEl nuevo recorrido de la matriz es: \n");

	for (j = 0;j < 10;j++) {
		for (i = 0;i < 10;i++) {

			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");


	return 0;
}