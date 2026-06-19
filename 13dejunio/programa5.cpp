#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void der(int filas) {

	int i, j;

	for (i = 0;i <= filas; i++) {
		for (j = 1; j <= filas - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void izq(int filas) {
	
	int k, l;
	for (k = 1; k <= filas; k++) {
		for (l = 1; l <= k; l++) {
			printf("1");
		}
		printf("\n");
	}
}

int main() {

	der(7);
	izq(7);


	return 0;
}