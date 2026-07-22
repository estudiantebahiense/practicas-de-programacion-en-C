
//ejercicio de traza diagonal sacado de youtube
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int  i, j;
	int matriz[9][9];
	int cont = 1;

	for (i = 0;i < 9;i++) {
		for (j = 0;j < 9;j++) {
			matriz[i][j] = cont++;
		}
	}

	for (i = 0;i < 9;i++) {
		for (j = 0;j < 9;j++) {
			printf("%4d",matriz[i][j]);
		}
		printf("\n");
	}

	
	// recorridos

	printf("recorrido por traza\n");

	for (i = 0;i < 9;i++) {
		if (i % 2 == 0) {
			for (j = 0;j < 9;j++) {
				printf("%4d", matriz[i][j]);
			}
		}
		else {
			for (j =8;j >= 0;j--) {
				printf("%4d", matriz[i][j]);
			}
		}
		//printf("\n");
	}
	





	return 0;
}
