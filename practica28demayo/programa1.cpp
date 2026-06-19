
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // Necesaria para usar rand() y srand()
#include <time.h>   // Necesaria para usar time() y que los dados cambien siempre

// --- LA FUNCIÓN CON VARIABLE ESTÁTICA ---
void generarDado(void)
{
    // Esta variable NO se destruye cuando la función termina. 
    // Arranca en 0 SOLO la primera vez.
    static int contador_cuatros = 0;

    int numero_sacado;

    // Generamos un número aleatorio entre 1 y 6
    numero_sacado = rand() % 6 + 1;

    printf("Ha salido el numero %d\n", numero_sacado);

    // Si salió el 4, lo sumamos al anotador eterno
    if (numero_sacado == 4)
    {
        contador_cuatros = contador_cuatros + 1;
    }

    printf("Ha salido %d veces el numero 4 desde el comienzo\n", contador_cuatros);
}

// --- EL CAPATAZ (MAIN) ---
int main(void)
{
    int cantidad_tiros = 0;
    int i;

    // Esto sirve para que los números cambien en cada ejecución de la compu
    srand((unsigned int)time(NULL));

    printf("Cuantos dados quiere tirar: ");
    scanf("%d", &cantidad_tiros); // Recordá: sin \n adentro del scanf

    // Usamos un bucle rústico para llamar a la función las veces que pidió el usuario
    for (i = 1; i <= cantidad_tiros; i++)
    {
        printf("Generando dado %d...... ", i);
        generarDado(); // Llamamos al especialista
        printf("\n");   // Un salto de línea para que quede prolijo como el ejemplo
    }

    return 0;
}