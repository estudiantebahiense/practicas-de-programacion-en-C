#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void izq(int filas) {
	int i, j;

	for (i = 1; i <= filas; i++) {
		for (j = 1; j <= i;j++) {
			printf("*");
		}
		printf("\n");
	}
}

void der(int filas) {
	int i, j, k;

	for (i = 1;i <= filas; i++) {
		for (k = 1; k<= filas - i;k++) {
			printf("0");
		}
		for (j = 1;j <= i; j++) {
			printf("1");
		}
		printf("\n");
	}
}

int main(void) {

	izq(4);
	der(4);

	return 0;
}