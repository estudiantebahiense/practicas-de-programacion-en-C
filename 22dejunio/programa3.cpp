//funcion factorial
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include "separador.cpp"

int funcionRecursiva4(int n);

int main(void) {
	int n = 5;


	funcionRecursiva4(n);
	printf("el resultado del factorial es %d", funcionRecursiva4(n));

	return 0; 
}

int funcionRecursiva4(int x) {
	if (x == 0) {
		return 1;
	}
	else 
		return x * funcionRecursiva4(x - 1);

	
}