
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double a, b, c;

	printf("escribe los 3 lados de un triangulo:  \n");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a <= 0 || b <= 0 || c <= 0) {
		printf("error: los lados deben ser positivos");
	}
	else {
		if (a == b && b == c) {
			printf("el triangulo es equilatero");
		}
		else {
			if (a == b || b == c || a == c) {
				printf("el triangulo es isosceles");
			}
			else {
				printf("el triangulo es escaleno");
			}
		}
	}


	return 0;
}