
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//funcion iterativa

int factorial_it(int n)

{
	int resultado2 = 1;
	int i;

	for (i = n; i > 1; i = i - 1)
	{
		resultado2 = resultado2 * i; /* en cada for cada resultado2 
		se va reemplazando por éste y la multiplicacion de un nuevo factor (i) 
		cada vez mas mas chico (disminuido en uno)*/

	}
	return resultado2;
}

//funcion recursiva. basado en la pag 10 del apunte

int factorial(int n)
{
	if (n == 0) return 1;
	return (n * factorial(n - 1));
}

int main()
{
	int n = 0;
	int resultado = 1, resultado2 = 1;

	printf("valor de n?: ");
	scanf("%d", &n);

	resultado = factorial(n);
	resultado2 = factorial_it(n);
	

	printf("\n");
	printf("\n el resultado del factorial por iteracion es: %d", resultado2);
	
	printf("\n%d! = %d \n", n, resultado);

	return 0;
}