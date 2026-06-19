#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int numero, cantidad=0, suma=0 ;
	
	double media;

	printf("Ingrese numeros distinto de cero\n");
	scanf("%d", &numero);

	while (numero != 0) {

		suma = suma + numero;
		cantidad++;
		printf("Ingrese numeros distinto de cero\n");
		scanf("%d", &numero);



	}
	if (cantidad > 0) {
		media = suma / cantidad;
		printf("la media es %.2lf\n", media);
	}
	else {
		printf("no hay media\n");
	}


	return 0;
}


