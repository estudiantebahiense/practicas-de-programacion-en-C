
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14159

int main(void) {
	int r = 3, a = 6, b = 6;
	double h = 0, r_menor=0,radio_h, volumen, cono, cilindro;

	printf("por favor ingrese un valor: \n");
	scanf("%lf", &h);

	if (h <= 0) {
		printf("\n por favor introduzca un valor positivo \n");
	}
	else {
		if (h <= b) {

			radio_h = (h * r) / b;

			cono = ( PI * radio_h * radio_h * h) / 3.0;
			printf("el volumen del cono es: %lf \n", cono);
		}
		else {
			if (h > b && h < a) {
				cilindro = PI * r * r * (h - b);
				volumen = cono + cilindro;
				printf("el volumen del tanque es :%fl \n", volumen);
			}
		}
          else {
	           if (h > (a + b)) {
				   printf("el tanque rebalsó: ");
	}

		}
		
		
	}








	return 0;
}