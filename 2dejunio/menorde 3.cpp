
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int valorMenor (int N1,int N2,int N3)

{
	int menor;
	if (N1 < N2)
	{                 //si N1<N2 solo me queda compararlo con N3
		if (N1 < N3)
		{
			menor = N1;
		}
		else
		{
			menor = N3;
		}
	
	}
	else
	{             //aca se compara N2 con N3 porque ambos son mayores que N1
		if (N2 < N3)
		{
			menor = N2;
		}
		else
		{
			menor = N3;
		}
	}

	return menor;
}

int main(void)
{
	int num1, num2, num3;
	int el_menor;

	printf("Por favor ingrese el primer numero entero\n");
	scanf("%d", &num1);
	printf("Por favor ingrese el segundo numero entero\n");
	scanf("%d", &num2);
	printf("Por favor ingrese el tercer numero entero\n");
	scanf("%d", &num3);

	el_menor = valorMenor(num1, num2, num3);
	printf("El menor valor de los 3 numeros es : %d\n", el_menor);
}