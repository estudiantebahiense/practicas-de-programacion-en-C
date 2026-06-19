#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a;
	
	double XMIN, XMAX;

	printf("ingrese el valor maximo: \n");
	scanf("%lf", &XMAX);
	printf("ingrese el valor minimo: \n");
	scanf("%lf", &XMIN);

	printf("ingrese un valor de a: \n");
	scanf("%lf", &a);


	if (a > XMIN && a < XMAX) {
		printf("el valor de %.02lf esta dentro del rango\n", a);
	}
	else {
		printf("el valor de %lf NO esta dentro del rango", a);

	}

	return 0;
}