#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


#define tarifa_minima 0.6
#define tarifa_normal 1.0
#define tarifa_maxima 2.5

int main()
{
	double consumo, tasa;

	printf("cual fue el consumo mensual?\n");
	scanf("%lf", &consumo);
	
	if (consumo <= 0) {
		printf("el error no puede ser negativo");
		return (EXIT_FAILURE); //le pongo esto porque puse stdlib, sino le pongo 1 y listo, es para que corte aca
	}

	if (consumo < 1000.0) {
		tasa = tarifa_minima;
	}
	if (consumo >= 1000 && consumo <= 1900) {
		tasa = tarifa_normal;
	}
	if (consumo > 1900) {
		tasa = tarifa_maxima;
	}
	
	tasa = consumo * tasa;
	printf("la tasa que le corresponde a un consumo de %.1lf es de %.2lf\n", consumo, tasa);

	return (EXIT_SUCCESS);
}