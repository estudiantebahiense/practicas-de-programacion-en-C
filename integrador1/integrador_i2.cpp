
/*
Apellido y nombre: Aguirre Claudio
Legajo: 907798
Proyecto Integrador N°1 - Informatica */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {

	double W, H, L, h;
	double h_llenado, area_superior, litros, latas;
	double area_inferior, L_salida, area_total;
	double volumen_m3, vol_embudo, vol_recto;
	int opcion, manos;

	printf("////////////////// \n//  MENU TOLVA  //\n////////////////// \n");
	printf("\n Ingrese el ancho y largo (en metros) de la entrada de la tolva: \n");
	scanf("%lf %lf", &W, &L);
	printf("Ingrese el lado de la salida de la tolva: \n");
	scanf("%lf", &L_salida);


	if (L_salida < W && L_salida < L) {

		h = W / 2.0; // La altura h es la mitad de W 
		H = 1.1 * h; // Altura total

		printf("\n ---Valores auxiliares calculados ---\n"); //borrar en la presentacion final
		printf("La altura H es %.2lf\n", H);
		printf("La altura de h es %.2lf\n\n", h);

		printf("Elige las siguientes opciones: \n");
		printf("1. Calcular latas de pintura epoxi necesarias.\n");
		printf("2. Calcular litros de material almacenados.\n\n");
		scanf("%d", &opcion);

		switch (opcion) {
		case 1:
			printf("¿Cuantas manos de pintura necesitas?\n");
			scanf("%d", &manos);
			area_superior = 2 * (H - h) * (W + L);

			// Cálculo de los trapecios del embudo de la tolva
			area_inferior = 2 * ((W + L_salida) / 2.0) * h + 2 * ((L + L_salida) / 2.0) * h;
			area_total = area_superior + area_inferior;

			litros = (manos * area_total) / 10.0; // 10.0 porque rinde 10m2 por litro
			latas = litros / 20.0;   // 20.0 porque cada lata tiene 20 litros de epoxi
			printf("Usted necesita %.2lf latas de epoxi.\n", latas);
			break;

		case 2:
			printf("----Cuantos metros de altura de llenado quiere?---- \n");
			scanf("%lf", &h_llenado);

			// Validación de altura de llenado
			if (h_llenado < 0) {
				printf("ERROR: la altura de llenado no puede ser negativa\n");
			}
			else {
				if (h_llenado > H) {
					printf("ERROR: la altura es mayor que la de la tolva (%.2lf m)\n", H);
				}
				else {
					area_inferior = L_salida * L_salida;
					area_superior = W * L;
					
					if (h_llenado <= h) { // El material está solo en el embudo.
						
						volumen_m3 = (h_llenado / 3.0) * (area_superior + area_inferior + sqrt(area_superior * area_inferior));
						litros = volumen_m3 * 1000.0;
					}
					else {
						// cuando el material llenó el embudo y está en la parte superior
						vol_embudo = (h/3.0) * (area_superior + area_inferior + sqrt(area_superior*area_inferior));
						vol_recto = (area_superior) * (h_llenado - h);
						litros = (vol_embudo + vol_recto) * 1000.0;
					}
					printf("Usted requerira de %.2lf litros de material en total.\n", litros);
				}
			}
			break;

		default:
			printf("Opcion incorrecta.\n");
			break;
		} // Cierre del switch
	}
	else {
		printf("ERROR: la entrada es invalida\n");
		printf("El lado de la salida de la tolva debe ser menor que el ancho y largo de la entrada.\n");
	}

	printf("\nGracias por utilizar este programa!!\n"); 
	return 0;
}