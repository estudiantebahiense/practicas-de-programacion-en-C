
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)

{
	int a, q, i, y=0;


	printf("Ingrese un valor para a : \n");
	scanf("%d", &a);

	printf("ingrese un valor para q:  \n");
	scanf("%d", &q);

	for (i = 0; i < 4; i = i + 1)

		y = y + ( a * pow(q, i));

		printf("\n el resultado de la sumatoria es: %d",y);

	return 0;


}