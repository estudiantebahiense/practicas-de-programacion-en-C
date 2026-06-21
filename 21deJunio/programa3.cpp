//promedio de numeros impares menores a 100
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int x; //numero ingresado
	int cant=0; //cantidad de numeros ingresados
	double promedio;  //promedio de la suma
	int suma=0; 

	do {
		printf("ingrese un valor de x? (-1 para terminar):\n");
		scanf("%d", &x);

		if (x != -1) {
			if (x % 2 == 0) {
				continue;
			}
			else {
				cant++;
				suma = suma + x;
			}
		}

	} while (x < 100 && x!= -1); 

	if (cant > 0) {
		promedio = suma / (double)cant;
		printf("el promedio de los numeros impares ingresados es %.2lf\n", promedio);

	}
	else {
		printf("no se han ingresado numeros impares");
	}



	return 0;
}