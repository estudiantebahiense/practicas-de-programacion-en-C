
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {

	double numero, resultado; 
	int opcion;

		printf("Ingresa un numero real para operar: \n");
		scanf("%lf", &numero);

		printf("\n**---------------MENU DE OPCIONES---------------**\n");
		printf("*1. Calcula el cadrado*\n");
		printf("*2. Calcular la raiz cuadrada* \n");
		printf("*3. Calcular el 10%% del valor* \n*");
		printf("*4. Calcular el doble* \n");

		scanf("%d", &opcion);


		switch (opcion) {

		case 1:
			resultado = pow(numero, 2.0);
			printf("\n El cuadrado de %.2lf es %.2lf\n", numero, resultado);
			break;

		case 2: 
			resultado = sqrt(numero);
			printf(" La raiz de %lf es %.2lf\n", numero, resultado);
			break;

		case 3:
			resultado = numero * 0.1;
			printf("el 10% del numero es %.2lf\n", resultado);
			break;

		case 4:
			resultado = numero * 2;
			printf(" el doble del numero es: %.2lf\n",resultado);
			break;

		default:
			printf("opcion no valida\n\n");
			break;
		}



	return 0;
}