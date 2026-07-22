//escribir y leer columna (repaso). no traza

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int i, j, cont=1;

	 int matriz[3][5];

	for (i = 0; i < 3;i++) {
		for (j = 0; j < 5;j++) {
			matriz[i][j] = cont++;
			if (i == j) {
				matriz[i][j] = 7;

			}
		}
	}
	

	for (i = 0; i < 3;i++) {
		for (j = 0; j < 5;j++) {
			printf("%5d   ",matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}