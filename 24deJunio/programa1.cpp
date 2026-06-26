//crear una matriz usando rand

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	
	int i=0, j=0;
	int posicion_i = 0;
	int posicion_j = 0;
	srand(time(NULL));
	

	int a[10][10];
	int max = a[0][0];

	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {

			a[i][j] = rand() % 100;
		}
		printf("\n");
	}
	printf("\n");

	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {

			printf("%4d |",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");



	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {
			if (max < a[i][j]) {
				max = a[i][j];
				posicion_i = i;
				posicion_j = j;
			}
		}
		
	}
	printf("el maximo valor de t es %d y se da la celda a[%d][%d]", max, posicion_i,posicion_j);

	return 0;
}