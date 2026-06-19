#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 6

int main () {
	int arr[N];
	int i;

	arr[3] = 78;

	printf("-------ingresa los valores rstantes------\n");
	for (i = 0;i < N;i++) {
		if (i == 3) {
			printf("posicion %d ya asignada con el valor %d\n\n", i+1, arr[3]);
			continue;
		}
		printf("introduce el valor para la posicion %d\n", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("----resultado final-----\n"); //si quisiera puedo agregar antes del for arr[2]=arr[4]+arr[0], por ej.
	arr[2] = arr[4] + arr[0];//jugar con los arreglos una vez cargados
	for (i = 0;i < N; i++) {
		printf(" %d ",arr[i]);
	}

	 


	return 0;

}