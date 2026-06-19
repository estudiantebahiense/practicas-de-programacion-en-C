

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n,i,j, totalAsteriscos;


	printf("ingrese un numero de asteriscos \n");
	scanf("%d", &n);
	totalAsteriscos = n;

	//for (i = 0; i <=n; i++) {
		for (j = 0; j < totalAsteriscos; j++) {
			
			printf("*");

		}
		printf("\n");
		//totalAsteriscos--;
	//}

	return 0; 
}