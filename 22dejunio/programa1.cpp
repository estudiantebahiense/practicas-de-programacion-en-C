//funciones
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double formula(double x);
double inverso(double t);
void imprimirEje();

int main() {
	double a,r;
	printf("ingrese un numero para obtener el triple mas uno y su inverso\n");
	scanf("%lf", &a);

	imprimirEje();

	r = formula(a);
	printf("el resultado del triple mas uno es : %.2f\n", r);
	imprimirEje();

	
	printf("y el inverso de ese resultado es %.2f\n",inverso(r));
	return 0;
}


double formula(double x) {
	double resultado;

	resultado = 3 * x + 1;
	return resultado;
}

double inverso(double t) {
	double i;
	if (t == 0) {
		i=1;
	}
	else {
		
			i = 1 / t;
		
	}
	return i;
}

void imprimirEje() {
	int i;
	for (i = 0;i <= 50;i++) {
		printf("__");
	}
	printf("\n");
	return;
}