
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {   // calculo de la suma de dos series con n terminos


        int n;
        double y = 0.0; 

  
        printf("Ingrese el valor de n: ");
        if (scanf("%d", &n) != 1 || n < 1) {
            printf("Por favor, ingrese un numero entero mayor o igual a 1.\n");
            return 1;
        }

        printf("\n  i  |   y\n");
        printf("-------------\n");

        for (int i = 1; i <= n; i++) {
            
            y += (5.0 * i * i) + ((6.0 * i) / (i + 8)); // Suma el valor del término actual al acumulado "y"

            printf("  %d  |  %.2f\n", i, y);
        }

        printf(" ... |  ...\n"); //cierra el cuadro como la imagen de muestra



	return 0;
}