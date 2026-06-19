
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// --- EL ESPECIALISTA: Devuelve el menor de los tres ---
int valorMenor(int N1, int N2, int N3)
{
    int el_menor;

    // Lógica rústica anidada para comparar
    if (N1 < N2)
    {
        if (N1 < N3)
        {
            el_menor = N1; // N1 es menor que N2 y que N3
        }
        else
        {
            el_menor = N3; // N1 era menor que N2, pero N3 es más chico que N1
        }
    }
    else
    {
        if (N2 < N3)
        {
            el_menor = N2; // N2 es menor que N1 y que N3
        }
        else
        {
            el_menor = N3; // N2 era menor que N1, pero N3 es más chico que N2
        }
    }

    return el_menor; // Le devolvemos el ganador al main
}

// --- EL CAPATAZ (MAIN) ---
int main(void)
{
    int num1, num2, num3;
    int resultado_menor;

    // Pedimos los tres valores de forma limpia
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    // Invocamos la funcion mandándole las tres variables
    resultado_menor = valorMenor(num1, num2, num3);

    // Mostramos el resultado final
    printf("\nEl valor del menor es: %d\n", resultado_menor);

    return 0;
}