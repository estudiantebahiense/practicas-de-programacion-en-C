
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int dia, mes, anio;

	printf("Hola! \n");
	printf("Que fecha es hoy?\n");

	scanf("%d", &dia);

	printf("En que mes estamos?\n");
	scanf("%d", &mes);

	printf("De que anio?\n");
	scanf("%d", &anio);

	printf("\n\n");

	switch (mes) {

	  case 1: printf("Hoy es %d de enero de %d\n",dia,anio); 
		  break;

	  case 2: printf("Hoyes %d de febrero del %\n", dia , anio); 
		  break;

	  case 3: printf("Hoy es %d de marzo de %d\n",dia, anio); 
		  break;

	  case 4: printf("Hoy es %d de abril de %d\n", dia, anio); 
		  break;

	  case 5: printf("Hooy es %d de mayo de %d\n", dia, anio); 
		  break;

	  case 6: printf("Hoy es %d de junio de %d\n", dia, anio); 
		  break;

	  case 7: printf("Hoy es %d de julio del %d \n",dia, anio);
		  break;

	  case 8: printf("Hoyes %d de agosto de %d\n",dia, anio); 
		  break;

	  case 9: printf("Hoy es %d de septiembre del %d\n",dia,anio); 
		  break;

	  case 10: printf("Hoy es %d de octubre del %d \n",dia, anio); 
		  break;

	  case 11: printf("Hoy es %d de noviembre del %d \n",dia,anio); 
		  break;

	  case 12: printf("Hoy es %d de diciembre de %d \n",dia, anio); 
		  break; 

	  default: printf("no es un mes valido"); break;
	}

	printf("Muchas gracias por utilizar este software!!!!!!\n");


	return 0;
}