
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("Hola! ingrese un numero entero:  \n");
	scanf("%d", &a);

	printf("ingrese un segundo valor entero: \n");
	scanf("%d", &b);

	printf("ingrese un ultimo valor entero: \n");
	scanf("%d", &c);

	printf("los valores que ha ingresado en el orden invertido son: %d, %d y %d", c, b, a);
	
	return 0;
}