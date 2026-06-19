#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main() {
	int i;
	int calificacion[N];
	int mayor, menor;

	srand(time(NULL));

	for (i = 0;i < N;i++) {
		calificacion[i] = rand() % 10+1;
	}
	

	for (i = 0;i < N;i++) {
		printf("  %d  \n", calificacion[i]);
		mayor = calificacion[0];
		menor = calificacion[0];
		for (i = 1; i < N; i++) {

			if (calificacion[i] > mayor) {
				mayor = calificacion[i];
			}
			if (calificacion[i] < menor) {
				menor = calificacion[i];
			}
				

		}
		printf("la calificacion mayor es %d  y la calificacion menor es  %d  \n", mayor, menor);

	}



	return 0;
}