//ejemplo de recursion-Fibonacci
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int n);

int main(void) {

	int f = 7;
	int resultado_suma;

	resultado_suma= fibonacci(f);
	printf("El numero de Fibonacci en la posicion %d es: %d\n", f, resultado_suma);

	return 0;
}

int fibonacci(int suma) {
	int resultado;
	if (suma == 0)
		return 0;
	if (suma == 1) {
		return 1;
	}
	else {
		resultado =  fibonacci(suma - 1)+fibonacci(suma-2);
		return resultado; 
	}
}