
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double total;
	double aumento;

	
	printf("Ingresa tu consumo en kWh \n");
	scanf("%lf", &total);

	if (total < 0) {
		printf("error: el consumo no puede ser negativo \n");
	}
	else {
		if (total >= 0 && total < 150) {
			aumento = total * 10;
			total = aumento + total;
				printf("consumo bajo. Debera pagar: %lf  \n", total);
		}
		else {
			if (total >= 150 && total < 400) {
				aumento = total * 15;
				total = aumento + total;
				printf("consumo medio. Debera pagar: %lf \n", total);
			}
			else {
				aumento = total * 20;
				total = aumento + total;
				printf("Tarinfa alto consumo: debera pagar %lf \n", total);
			}
		}
	}



	return 0;
}