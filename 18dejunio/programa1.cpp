#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 6

int main(void) {

	int arr[N] = { 3,54,-2,0,98,11 };

	int x;
	int pos = 0;

	printf("valor a buscar \n");
	scanf("%d", &x);

	while (pos < N) {
		if (arr[pos] == x) break;
		pos++;
		
	
	}
	if (pos < N) { 

	printf("encontre el valor %d en el lugar %d", x, pos);
	
	}
	else {
		printf("valor no encontrado \n");

	}


	return 0;
}