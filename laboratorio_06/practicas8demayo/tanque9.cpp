
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int p;

	printf("ingrese la nota que obtuvo el alumno en el examen:   \n");
	scanf("%d", &p);

	if (p >= 90) {
		printf("La nota es A (sobresaliente)");
	}
	else {
		if (p >= 80 && p < 90) {
			printf("Calificacion B(notable)\n");
		}
		else {
			if (p >= 70 && p < 80) {
				printf("Calificacion C. (Bien)");
			}
			else {
				if (p >= 60 && p < 70) {
					printf("calificacion D. (Suficiente)");
				}
				else {
					if (p < 60) {
						printf("Calificacion F (Insuficiente)");
					}
				}
			}
		}
	}


	return 0;
}