//el ejemplo de funcion recursiva de la pagina 6
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "separador.cpp"

void funcionRecursiva(int n);
void funcionRecursiva2(int n);

int main() {
	int n = 5;

	funcionRecursiva(n);
	separador();
	funcionRecursiva2(n);

	return 0;
}

void funcionRecursiva(int n) {
	printf("el valor de n en esta llamada es %d\n", n);

	if (n == -2) {
		return;
	}
	funcionRecursiva(n - 1);
}

void funcionRecursiva2(int n) {
	printf("el valor de la llamada es %d\n", n);
	if (n == 19) {
		return;
	}
	funcionRecursiva2(n + 1);
}

