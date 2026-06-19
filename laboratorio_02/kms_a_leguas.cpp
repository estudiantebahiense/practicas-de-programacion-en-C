
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double kilometros, leguas;
	const double kilometrosxlegua = 4.82803;

	printf("Hola!.Por favor ingrese una distancia en kilometros:   \n");
	scanf("%lf", &kilometros);

	leguas = kilometros / kilometrosxlegua;

	printf("%lf kilometros equivalen a %lf leguas \n", kilometros, leguas);

	return 0;

}