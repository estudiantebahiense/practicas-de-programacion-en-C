
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	double sumando1, sumando2, suma;

	printf("Hola! por favor ingrese el primer numero con coma:  \n");
		scanf("%lf", &sumando1);

	printf("Ingresa un segundo numero con coma:  \n");
		scanf("%lf", &sumando2);

	suma = sumando1 + sumando2;

	printf("el resultado de la suma es: %lf", suma);

	return 0;

}