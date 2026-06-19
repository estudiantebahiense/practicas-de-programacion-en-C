#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int mes, dia, anio;

	printf("ingresa la fecha actual en formato DD/MM/AA: \n");

	scanf("%d/%d/%d", &dia, &mes, &anio);

	printf("\n hoy es %02d del mes %02d de 20%d ", dia, mes, anio);

	return 0;
}