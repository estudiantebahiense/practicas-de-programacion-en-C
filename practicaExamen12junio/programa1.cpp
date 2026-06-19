#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void imprimir();
float division(float numero1, float numero2);
int suma();

//implementacion

void imprimir() {
	printf("Hola mundo");
	printf("\n");
}

int suma() {
	int numero = 12;
	int numero2 = 3;
	int s; 

	s = numero + numero2;
	printf("\n");

	

	return s;
}
float divi(float numero1, float numero2) {

	float d = numero1 / numero2;
	return d;
}

int main(void)
{
	int r;
	float division; 
	imprimir();
	
	

	division = divi(20.3, 3.1);
	printf("%.2fl", division);


	

	return 0;
}