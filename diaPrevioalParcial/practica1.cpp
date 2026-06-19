
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n ,i;
	double resultado = 0, s=0;

	printf("ingrese un numero entero positivo\n");
	scanf("%d", &n);

	for (i = 1; i <= n; i=i+1) {
		s = (1.0 / i);
		resultado = resultado + s;

		

	}
	printf("\nel resultado es %.2lf \n", resultado);
	return 0;
}