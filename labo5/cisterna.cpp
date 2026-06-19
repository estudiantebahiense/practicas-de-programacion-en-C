
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)

{
	double r = 3, a = 6, b = 6;
	double pi = 3.14159;
	double volumen, h;

	double r2 = 0.0; //el radio en función de "b" a medida que se va llenando el cono
	double vol_cono_lleno = 0.0;
	double h2 = 0.0;
	double vol_cilindro_parcial = 0.0;
	


	printf("Ingrese la altura de llenado del tanque:\n");
	scanf("%lf", &h);

	if (h <= b) {
		r2 = (r * h) / b;     //calcula el radio a la altura "b" del cono
		volumen = (pi * pow(r2, 2) * b) / 3.0;

	}

	else {

		if (h < a + b) {
			vol_cono_lleno = (pi * pow(r, 2) * b) / 3.0;
			h2 = h - b;          //lo que va quedando de altura para ser llenado
			vol_cilindro_parcial = pi * pow(r, 2) * h2;

			volumen = vol_cono_lleno + vol_cilindro_parcial;

		}


		else printf("el tanque está lleno!!\n");

		
	} 

	printf("El volumen actual de llenado es : %.3lf", volumen); 

	return 0;


 }




