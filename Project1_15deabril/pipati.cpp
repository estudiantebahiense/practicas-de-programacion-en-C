
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int jugador = 0, computadora;
	printf("bienvenido!\n\n por favor elige alguna de las siguientes opciones:\n 1.piedra\n 2.papel\n 3.tijera\n\n");
	scanf("%d", &jugador);

	computadora = (rand() % 3) + 1;


	printf("elegiste %d y yo elegi %d\n\n", jugador, computadora);

	if ((jugador == 2 && computadora == 1) || (jugador == 1 && computadora == 3) || (jugador == 3 && computadora == 2))
		printf("tu ganaste!\n\n");

	if ((jugador == 1 && computadora == 2) || (jugador == 3 && computadora == 1) || (jugador == 2 && computadora == 3))

		printf("Jajaja yo te gane!\n");
	
	if (jugador == computadora)
		printf("hemos empatado\n\n");

	return 0;
	
}