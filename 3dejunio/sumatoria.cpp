
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//la sumatoria usando for

double suma_por_iteracion(int n)

{
	double suma = 0.0;
	int i;

	for (i = 1; i <= n; i = i + 1) {

		suma = suma + ((5 * i) / (i + 10.0)); //cada termino de la serie mas su acumulado
	}
	return suma;
}

//funcion usando recursiva
double suma_por_recursion (int n)
{ 
	if(n==1)
	{
	return ((5.0 * 1.0) / (1.0 + 10.0));

	}
else {
	return ((5.0 * n) / (n + 10.0)) + suma_por_recursion(n - 1);
	}
}


//main

int main(void)
{
	int n;
	double resultado1;
	double resultado2;

	printf("Hola! Por favor ingrese el valor de n: ");
	scanf("%d", &n);

	resultado1 = suma_por_iteracion(n);
	resultado2 = suma_por_recursion(n);

	printf("\n Resultado de la sumatoria por iteracion es: %.2lf", resultado1);
	
	printf("\nel resultado de la sumatoria por recursividad es: %.2lf", resultado2);


	return 0;
}