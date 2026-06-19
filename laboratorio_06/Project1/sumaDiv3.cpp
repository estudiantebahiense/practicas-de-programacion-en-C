
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)

{
	int numero;
	int sumaDiv3 = 0;
	int contadorDiv3 = 0;
	int maximo =0, minimo =0;
	int primerNumero = 1; 
	double promedio = 0.0;

	printf("Hola!. Por favor ingrese un numero: (-1 para terminar) \n");
	scanf("%d", &numero);

	while (numero != -1)

	{
		if (numero % 3 == 0)
		{
			sumaDiv3 = sumaDiv3 + numero;
			contadorDiv3++;
	}
		if (primerNumero)
		{
			maximo = numero;
			minimo = numero;
			primerNumero = 0;
		}
		else {

			if (numero > maximo)
				maximo = numero;

			if (numero < minimo)
				minimo = numero;
		}

		printf("Ingrese un numero. \n");
		scanf("%d", &numero);
	}

	printf("\n-------- _Resultado de los valores ingresados ---------\n");

	if (contadorDiv3 > 0)

	{
		promedio = (double)sumaDiv3 / contadorDiv3;
		printf("Suma de divisibles por 3: %d\n", sumaDiv3);
		printf("Promedios de divisibles por 3: %.2lf\n", promedio);
	}
	else 
	{
		printf("No se ingresaron numeros divisibles por 3 \n");
	}

	if (primerNumero == 0)
	{
		printf("El mayor de los numeros ingresados es  %d\n", maximo);
		printf("El menor de los numeros ingresados es:  %d\n", minimo);
	}

	return 0;
}