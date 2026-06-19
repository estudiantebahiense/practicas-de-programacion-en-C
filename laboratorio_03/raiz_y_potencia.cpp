
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)

{
	double a = 140, b = 4, c=8, d= 7, y;

	double radicando = (a * b) / pow(c, d);

    y = 1 / sqrt(radicando);

	printf("el resultado es %lf\n.", y);

	return 0;


}