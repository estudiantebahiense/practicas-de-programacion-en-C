#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

#include <time.h>

void generarDado(void) //la funcion con static
{
    
    static int contador_cuatros = 0;

    int numero_sacado;

    
    numero_sacado = rand() % 6 + 1; //numero entre 1 y 6

    printf("Te h salido el numero %d\n", numero_sacado);

   
    if (numero_sacado == 4)
    {
        contador_cuatros = contador_cuatros + 1;
    }

    printf("Te ha salido %d veces el numero 4 desde el comienzo\n", contador_cuatros);
}


int main(void)
{
    int cantidad_tiros = 0;
    int i;

    
    srand((unsigned int)time(NULL));

    printf("Hola! Cuantos dados queres tirar: ");
    scanf("%d", &cantidad_tiros);

    
    for (i = 1; i <= cantidad_tiros; i++)
    {
        printf("Generando dado %d...... ", i);
        generarDado();
        printf("\n");  
    }

    return 0;
}