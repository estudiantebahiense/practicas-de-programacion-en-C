#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2;

	printf("Digite 2 numeros: "); scanf("%i      %i", &num1, &num2);

	if (num1 % num2 == 0) {
		printf("el numero %i es divisible por el numero %i", num1,num2);
	}



	return 0;
}