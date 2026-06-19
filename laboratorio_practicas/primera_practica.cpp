
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	double numero1, numero2, suma;

	printf("ingresa un numero con coma: ");
	scanf("%lf", &numero1);

	printf("ingresa otro numero: ");
	scanf("%lf", &numero2);

	suma = numero1 + numero2;

	printf("la suma de dos numero es: %.3lf\n", suma);

	return 0;
}