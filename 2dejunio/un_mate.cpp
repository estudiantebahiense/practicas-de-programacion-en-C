#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// El embudo acá arriba se llama "x" (Parámetro Formal)
double formula(double x)
{
	double resultado;
	resultado = x * 2.0 + 1.0;
	return resultado;
}

int main(void)
{
	double un_mate; // <-- Abajo la variable se llama "un_mate"

	printf("ingrese un valor: ");
	scanf("%lf", &un_mate);

	// Invocamos pasando "un_mate" (Parámetro Real)
	printf("el doble mas uno es : %.3lf\n", formula(un_mate));

	return 0;
}