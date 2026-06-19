#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int const precio_de_lista = 100;
	double precio_venta;

	double k, descuento;

	printf("cuantos kilos pesa el pollo?\n");
	scanf("%.2lf", &k);

	if (k <= 1) {
		descuento = 1;
	}
	else if (k<= 5) {
		descuento = 7;
	}
	else if (k <= 10) {
		descuento = 10;
	}
	else descuento = 15;

	precio_venta = precio_de_lista * (1- descuento/100);
	printf("el precio de venta es de : %.2lf", precio_venta);


	return 0;
}