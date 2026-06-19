
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	const int PI = 3.14159;
	double r2, r1, e, i, area;

	printf("\n CUANTO VALE EL AREA COLOREADA AZUL?\n\n Ingrese el diametro de la circunferencia menor: \n");
	scanf("%lf",&r1);

	printf("\nIngrese el diametro de la circunferencia mayor: \n");
	scanf("%lf", &r2);

	e = pow(r2 / 2, 2.0);
	i = pow(r1 / 2, 2.0);

	// printf("e es igual a %lf", e);

		area = PI * (e - i);

		area = area * 0.75;

		printf("\n El area de la sección de la corona circular es: %lf\n", area);

		return 0;
}
