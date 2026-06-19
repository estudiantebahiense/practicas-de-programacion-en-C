#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 10

int main(void) {

	int arr[N] = { 3,45,46,50,2,4,90,78,101,-4 };
	int i = 0;
	int max = arr[i];



	while (i < N) {
		if (max < arr[i]) {
			max = arr[i];
			printf("imprimir %d\n", max);
			
		}
		i++;
		}
	printf("el maximo arreglo es %d", max);





	return 0;
}