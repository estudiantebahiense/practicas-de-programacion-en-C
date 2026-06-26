//ejemplo de recursion
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sumaDigitos(int numero);
int sumatoria(int s);

int main() {
	int num = 123;
	int resultado = 0;
	int resultado2 = 0;

	resultado = sumaDigitos(num);
	printf("la suma de los digitos del numero %d es %d ", num, resultado);

	resultado2 = sumatoria(num);
	printf("y su sumatoria es: %d", resultado2);


	return 0;
}
 int sumaDigitos(int numero) {
	int resultado_parcial;
	if (numero < 10) {
		return numero;
	}
	else {
		resultado_parcial = (numero%10) + sumaDigitos(numero / 10);
		
		return resultado_parcial;
	}
}

 int sumatoria(int num) {
	 
	 int resultado_parcial;
	 if (num==1) {
		 return 1;
	 }
	 else {
		 resultado_parcial = num + sumatoria(num - 1);

		 return resultado_parcial;
	 
	 }
 }