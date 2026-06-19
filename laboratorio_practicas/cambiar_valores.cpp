
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b;
	double c;

	printf("ingrese una valor: \n");
	scanf("%d", &a);

	printf("ingrese otra letra: \n");
	scanf("%d", &b);

	printf("ingrese un numero con coma: \n");
	scanf("%lf", &c);

	printf("los valores ingresados son: %lf, %d, %d", c, b, a);

	return 0;

}