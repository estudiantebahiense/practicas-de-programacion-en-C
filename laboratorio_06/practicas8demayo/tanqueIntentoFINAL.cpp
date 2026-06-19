
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void) {

	int r = 3, a = 6, b = 6;
	double h, radio_h,h2, volumen, cono, cilindro;

	printf("Ingrese un valor para determinar la altura de llenado \n\n");
	scanf("%lf", &h);

	if (h < 0) {
		printf("ingrese un valor positivo \n");
	}
	else {
		if (h >= 0 && h <= 6) {
			radio_h = (r * h) / b;
			cono = (PI * pow(radio_h,2.0) * h) / 3.0;

			printf("el volumen de llenado es %.2lf", cono);

		}
		else {
			if (h > b && h <= (a+b)) {
				h2 = h-b; 
				cilindro = PI * pow(r,2.0) * h2;
				cono = (PI * pow(r,2.0) * 6) / 3.0;

				volumen = cono + cilindro;
				printf("el volumen de llenado es %.2lf", volumen);
			}
			else {
				printf("el tanque ha rebalsado"); // este detalle lo recuerdo de la primera vez que me hiciste el programa
			}
		}
	}





	return 0;
}