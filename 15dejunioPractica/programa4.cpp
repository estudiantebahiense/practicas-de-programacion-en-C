#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void) {

	int i=0;
	printf("ingrese valores positivo:\n");
	printf("un numero negativo finaliza el programa\n");
	
	
	while (i >= 0) {
		
		

		
		printf("ingrese un valor positivo:\n");

		scanf("%d", &i);
		printf("%d",i);
	}
	printf("programa terminado por ingreso de un numero negativo");



	return 0; 
}