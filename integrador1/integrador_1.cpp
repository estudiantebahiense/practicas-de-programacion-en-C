
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double W, H, L, h;
	double h_llenado, area_superior, litros, latas;
	double area_inferior, L_salida, area_total;
	int opcion, manos;

	printf("///////// \n MENU TOLVA\n ///////// \n");
	printf("ingrese el ancho y largo (en metros) de la entrada de la tolva:   \n");
	scanf("%lf %lf", &W, &L);
	printf("Ingrese el lado de la salida de la tolva: \n"); /*tengo que pedirle al usuario
	una variable mas para la salida de la tolva*/
	scanf("%lf", &L_salida);

	if (L_salida < W && L_salida < L) {


		h = W / 2.0;

		H = 1.1 * h;

		printf("\n ---Valores auxiliares calculados ---\n\n");
		printf("La altura H es %.2lf\n", H);
		printf("La altura de h es %.2lf\n\n", h);

		printf("\nElige las siguientes opciones: \n");
		printf("1. Calcular latas de pintura epoxi necesarias.\n\n");
		printf("2. Calculo del volumen de la tolva en funcion de la altura de llenado(h)\n\n");
		scanf("%d", &opcion);


		switch (opcion) {
		case 1:
			printf("cuantas manos de pintura necesitas?\n");
			scanf("%d", &manos);
			area_superior = 2 * (H - h) * (W + L);
			area_inferior = 2 * ((W + L_salida) / 2.0) * h + 2 * ((L + L_salida) / 2.0) * h; //trapecios de lado inferior de 1 metro
			area_total = area_superior + area_inferior;
			litros = (manos * area_total) / 10.0;
			latas = litros / 20.0;   //20 litros = 1 lata de pintura
			printf("necesitas %.2lf latas de pintura epoxi para puntar %d veces\n", latas, manos);
			break;


		case 2:
			printf("----¿Cuantos metros de altura de llenado quiere?---- \n");
			scanf("%lf", &h_llenado);

			if (h_llenado < 0) {
				printf("ERROR: la altura de llenado no puede ser negativa\n");
			}
			else {
				if (h_llenado > H) {
					printf("ERROR: la altura de llenado es mayor que la altura de la tolva (%.2lf metros) \n", H);
				}
			}
	else { //altura valida: entre 0 y H: el embudo de la tolva

		if (h_llenado <= h) {

			area_inferior = L_salida * L_salida; //base de abajo del embudo lxl
			area_superior = W * L;               // base de arriba del embudo W*L
			litros = ((area_inferior + area_superior) / 2.0) * h_llenado * 1000.0;
		}

		printf("Usted requerira de %.2lf litros de material en total \n", litros);
	}
		} //cierre del else de validacion
		break;

		default:
			printf("Opcion incorrecta \n");
			break;

	}

}
	else { //cartel de error
		printf("ERROR: la entrada es invalida\n");
		printf("El lado de la salida de la tolva debe ser menor que el ancho y largo de la entrada.\n");
	}


	return 0;
}