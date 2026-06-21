//sumatoria simple
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int i = 1;
	int n = 0;
	double sumatoria=0;

	printf("ingrese un numero entero positivo\n");
	scanf("%d", &n);

	for (i = 1; i <= n;i++) {
		sumatoria = sumatoria + (1.0 / i);

	}
	printf("el resultado de la sumatoia es %.2f\n", sumatoria);

	return 0;
}