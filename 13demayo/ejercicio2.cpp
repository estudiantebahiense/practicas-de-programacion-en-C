#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 12

int main(void) {
	int arr[N] = { 12,56,343,-43,0,341,3,-3,8,90 };
	int i = 0;
	int maximo = arr[0];
	int indice_max = 0;

	while (i<N) {
		if (arr[i] > maximo) {
			maximo = arr[i];
			indice_max = i;
		}
		i++;
		
	}
	printf("\nel valor maximo es : %d y se encuentra en el indice %d \n", maximo, indice_max);

	
	return 0;
}