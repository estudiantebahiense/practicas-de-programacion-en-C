//adivinar numero de la teoria, incluir librerias stdlib.h y time.h para que funcione

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int numero_secreto;
	int intento=-2;


	srand((unsigned int)time(NULL));
	numero_secreto = rand() % 100;

	int fin = 0;

	while (fin != 1) {
		printf("ingresa un numero de 0 a 99\n");
		scanf("%d", &intento);
		if (numero_secreto == intento) {
			printf("has acertado el numero!!\n");
			fin = 1;
		}
		else if (intento < numero_secreto) {
			printf("prueba un numero mas alto\n");

		}
		else {
			printf("prueba un numero mas bajo\n");
		}
	}


	return 0;
}
