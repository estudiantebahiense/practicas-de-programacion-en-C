#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()


{
	double x, y;

	printf("ingrese el valor de x\n");
	scanf("%lf", &x);
	if (x < 0 || x>20) {
		printf("ingrese un numero mayor que 0 y menor que 20\n");
		return 1;
	}

	else if (x <5) {
		y = x;
	}
	else if (x >= 5 && x < 15) {
		y = 5;
	}
	else {
		y = -x+20;
	}

	printf("el valor de x es %.1lf es %.1lf", x, y);


	return 0;
}