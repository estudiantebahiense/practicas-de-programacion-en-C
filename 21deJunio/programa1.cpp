
//maximo de un arreglo usando while

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 10


int main(void) {

	int array[N] = { 40,2,-3,98,102,75,49,55,89,111 };

	int i = 0;
	int max = array[0];
	while (i < N) {
		if (max < array[i]) {
			max = array[i];
			
		}
		i++;
	}
	printf("el maximo valor almacenado es %d\n", max);

	return 0;
}